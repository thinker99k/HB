#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ALGraphDFS.h"
#include "DLinkedList.h"
#include "ArrayBaseStack.h"

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

/** Descending **/
int WhoIsPrecede(int data1, int data2)
{
	if(data1 < data2)
		return 1;
	else
		return 0;
}


int VisitVertex(ALGraph * pg, int visitV)
{
	if(pg->visitInfo[visitV] == 0)
	{
		pg->visitInfo[visitV] = 1;
		printf("%c ", visitV + 65);     // 방문 정점 출력
		return TRUE;
	}
	
	return FALSE;
}

// Depth First Search: 정점의 정보 출력
void DFShowGraphVertex(ALGraph * pg, int startV)
{
	Stack stack;
	int visitV = startV;
	int nextV;

	// DFS를 위한 스택의 초기화
	StackInit(&stack);

	VisitVertex(pg, visitV);    // 시작 정점 출력
	SPush(&stack, visitV);   // 방문 정점(여기서는 시작 정점) 출력

    // visitV가 존재할 때, 헤드 다음(데이터 가진 첫번째 노드) 데이터 출력 -> arjList [0,N] 출력
	while(LFirst(&(pg->adjList[visitV]), &nextV) == TRUE)
	{
		int visitFlag = FALSE; // visitFlag init, false로 초기화

		if(VisitVertex(pg, nextV) == TRUE) // 방문 아직 안한 곳일 때, 방문하고 return true
		{
			SPush(&stack, visitV);
			visitV = nextV;
			visitFlag = TRUE;
		}
		else // 방문 이미 한 곳일때, return false
		{
            // visitV가 존재할 때, 커서 다음 데이터(데이터 가진 두번째 노드) 데이터 출력 -> arjList[n] 안에서 LL 탐색
			while(LNext(&(pg->adjList[visitV]), &nextV) == TRUE)
			{
				if(VisitVertex(pg, nextV) == TRUE) // 방문 안한 곳일 때, 방문하고 return true
				{
					SPush(&stack, visitV);
					visitV = nextV;
					visitFlag = TRUE;
					break;
				}
			}
		}
		
		if(visitFlag == FALSE) // 방문 이미 한 곳일 때(위의 else), arjList[n] 안에서 전부 출력하면
		{
			if(SIsEmpty(&stack) == TRUE)    // 스택이 비면 DFS종료
				break;
			else // 스택이 안 비면
				visitV = SPop(&stack); // 스택에서 pop
		}
	}

	// 탐색 정보 초기화
	memset(pg->visitInfo, 0, sizeof(int) * pg->numV);
}