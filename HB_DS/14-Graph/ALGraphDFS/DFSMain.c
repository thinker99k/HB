#include <stdio.h>
#include "ALGraphDFS.h"

int main(void)
{
	ALGraph graph;
	GraphInit(&graph, 7);      // A, B, C, D, E, F, G의 정점 생성

	AddEdge(&graph, A, B);
	AddEdge(&graph, A, D);
	AddEdge(&graph, B, C);
	AddEdge(&graph, D, C);
	AddEdge(&graph, D, E);
	AddEdge(&graph, E, F);
	AddEdge(&graph, E, G);

	ShowGraphEdgeInfo(&graph);

    // A부터 DFS 탐색
	DFShowGraphVertex(&graph, A); printf("\n");

    // C부터 DFS 탐색
	DFShowGraphVertex(&graph, C); printf("\n");

    // E부터 DFS 탐색
	DFShowGraphVertex(&graph, E); printf("\n");

    // G부터 DFS 탐색
	DFShowGraphVertex(&graph, G); printf("\n");

	GraphDestroy(&graph);
	return 0;
}