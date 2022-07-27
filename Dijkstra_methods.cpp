#define MAX 1000

void Dijikstra(int GRAPH[100][100], int V, int START) /* V -> vertex*/
{
	// Declarations
	int COST[100][100], DIS[100], POP[100];
	int VISITED[100], COUNTER, MIN_DIS, NEXT, i,j;
	int END=0;

	for(i=0;i<V;i++)		
		for(j=0;j<V;j++)
			if(GRAPH[i][j]==0)
				COST[i][j]=MAX;
			else
				COST[i][j]=GRAPH[i][j];
	//Sets visited neighbours
	for(i=0;i<V;i++)
	{
		DIS[i]=COST[START][i];
		POP[i]=START;
		VISITED[i]=0;
	}
	// sets start values
	DIS[START]=0;
	VISITED[START]=1;
	COUNTER=1;
	
	// pathfinding
	while(COUNTER < V-1)
	{
		MIN_DIS = MAX;
		for(i=0;i<V;i++)
			if(DIS[i] < MIN_DIS && !VISITED[i])
			{
				MIN_DIS = DIS[i];
				NEXT=i;
			}
		VISITED[NEXT]=1;
		for(i=0;i<V;i++)
			if(!VISITED[i])
				if(MIN_DIS + COST[NEXT][i] < DIS[i])
				{
					DIS[i] =  MIN_DIS + COST[NEXT][i];
					POP[i]=NEXT;
				}
			COUNTER++;
	}
	
 	// printing paths and values
	for(i=0;i<V;i++)
		if(i!=START)
		{
			printf("\nValue of the %d path = %d", i, DIS[i]);
			printf("\nDistance traveled = %d", i);
			j=i;
			do
			{
				j=POP[j];
				printf(" <-- %d", j);
			}while(j!=START);
		}
	//printing value of the shortest path
	for(i=0;i<V;i++)
	{
		END=DIS[i];
		END+=END;
	}
	printf("\nValue of the shortest path = %d",END);
}
 
