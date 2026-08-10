#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ALGraphBFS.h"
#include "DLinkedList.h"
#include "CircularQueue.h"

int WhoIsPrecede(int data1, int data2);

// 그래프의 초기화
void GraphInit(ALGraph * pg, int nv)
{
	int i;

	pg->adjList = (List*)malloc(sizeof(List)*nv);
	pg->numV = nv;
	pg->numE = 0;     // 초기의 간선 수는 0개

	for(i=0; i<nv; i++)
	{
		ListInit(&(pg->adjList[i]));
		SetSortRule(&(pg->adjList[i]), WhoIsPrecede); 
	}

	// 탐색 정보 등록을 위한 공간의 할당 및 초기화
	pg->visitInfo= (int *)malloc(sizeof(int) * pg->numV);
	memset(pg->visitInfo, 0, sizeof(int) * pg->numV);
}

// 그래프의 리소스 해제
void GraphDestroy(ALGraph * pg)
{
	if(pg->adjList != NULL)
		free(pg->adjList);

	if(pg->visitInfo != NULL)
		free(pg->visitInfo);
}

// 간선의 추가
void AddEdge(ALGraph * pg, int fromV, int toV)
{
	LInsert(&(pg->adjList[fromV]), toV);
	LInsert(&(pg->adjList[toV]), fromV);
	pg->numE += 1;
}

// 유틸리티 함수: 간선의 정보 출력
void ShowGraphEdgeInfo(ALGraph * pg)
{
	int i;
	int vx;

	for(i=0; i<pg->numV; i++)
	{
		printf("%c와 연결된 정점: ", i + 65);
		
		if(LFirst(&(pg->adjList[i]), &vx))
		{
			printf("%c ", vx + 65);
			
			while(LNext(&(pg->adjList[i]), &vx))
				printf("%c ", vx + 65);
		}
		printf("\n");
	}
}

int WhoIsPrecede(int data1, int data2)
{
	if(data1 < data2)
		return 0;
	else
		return 1;
}


// 방문체크, 해당 인덱스 출력
int VisitVertex(ALGraph * pg, int visitV)
{
	if(pg->visitInfo[visitV] == 0)
	{
		pg->visitInfo[visitV] = 1;
		printf("%c ", visitV + 65);    // 방문 정점 출력
		return TRUE;
	}
	
	return FALSE;
}

// Breadth First Search: 정점의 정보 출력
void BFShowGraphVertex(ALGraph * pg, int startV)
{
	Queue queue;
	int visitV = startV;
	int nextV;

	// DFS를 위한 큐의 초기화
	QueueInit(&queue);

	// 시작 정점 탐색, 첫번째 visitV = 1
	VisitVertex(pg, visitV);
    /*
     * 방문 아직 안한곳이면: index 자체 출력 후 return true
     * 방문 이미 한 곳이면: return false
     */

    // 사작점(더미)가 유효하다면 nextV에 다음 이동해야할 노드 저장 후 return true
	while(LFirst(&(pg->adjList[visitV]), &nextV) == TRUE)
	{
		if(VisitVertex(pg, nextV) == TRUE) // 방문 아직 안한 곳일 때, 방문(출력, nextV 저장)하고 return true
			Enqueue(&queue, nextV);

		while(LNext(&(pg->adjList[visitV]), &nextV) == TRUE) // visitV에 연결된 다음 노드 LNext
		{
			if(VisitVertex(pg, nextV) == TRUE) // 방문 아직 안한 곳일 때, 방문하고 return true
				Enqueue(&queue, nextV);
		}

		if(QIsEmpty(&queue) == TRUE)    // 큐가 비면 BFS 종료
			break;
		else
			visitV = Dequeue(&queue);
	}

	// 탐색 정보 초기화
	memset(pg->visitInfo, 0, sizeof(int) * pg->numV);
}