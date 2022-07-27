#include<stdio.h>
#include"Dijkstra_methods.cpp"

int main()
{
	int GRAPH[100][100], i, j, W, START=0; /* START zmieniony na 0 w ramach testow*/
	printf("\nWelcome to the Dijkstra's algorithm, which is an algorithm for finding the shortest paths between nodes in a graph\n");
	printf("\nEnter how many vertices this graph has: ");
	scanf("%d", &W);
	printf("\nEnter the adjacency matrix as in given example: \n");
	printf("*******************\nExample\n*******************\nGRAPH WITH 4 VERTICES\n Given adjacency matrix\n 1 2 3 4\n 2 3 4 5\n 3 4 5 6\n 4 5 6 7\n");
	printf("Your adjacency matrix:\n");
	for(i=0;i < W;i++)
		for(j=0;j < W;j++)
			scanf("%d", &GRAPH[i][j]);
	Dijikstra(GRAPH,W,START);
	return 0;
}
 
