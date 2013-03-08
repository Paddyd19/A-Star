

#include <stdio.h>
#include <stdlib.h>		//include Standard Library Dependencies
#include <string.h>

struct Node {
	char name[2];
	int xPos;
	int yPos;	
	int f;
	int g;
	int h;	
	struct Node *next;
};

struct Edge{
	char start[2];
	char end[2];
	int weight;
};

struct Path{
	char startNode[2];
	char endNode[2];
};

// Open List	- Nodes with all successors not yet checked
// Closed List  - Nodes with all successors already checked

//Linked list stuff: http://www.thegeekstuff.com/2012/08/c-linked-list-example/


int numNodes;
int numPaths;
int numEdges;

struct Node *openList;
struct Node *closedList;

struct Node *head;
struct Node *tail;

void readGraphFile();
void AddNewNode();



int main()
{	
	readGraphFile();	 	

	//read in text file

	//get start node

	//get end node

	//start search

	// while targetNode not found
		//take node with lowest hueristic value B, from the open list
		//if this is the goal, then the solution has been found
		//if the list is empty then there is no solution

			//for each node N connected to B:
				//assign F,G,H for node N
				//if N is in open or closed list then
					//if new path is better then
						//replace old entry for N with new one
					//else Add N to open List
				//Add B to Closed List
	return(0);
}

void readGraphFile()
{
	FILE *ptr_file;
    char buf[1000];

   	ptr_file =fopen("ASTAR.txt","r");
    if (!ptr_file)
	{
     	printf("\nUnable t open file string.txt");
		exit(1);
	}

 	while (fscanf(ptr_file,"%s",buf) != EOF)
	{
		int i;		
		
		if (strcmp(buf,"NODES") == 0)
		{
			fscanf(ptr_file,"%d",&numNodes);
			for (i = 0; i < numNodes; i++)
			{
				char name[2];
				int x,y;
				fscanf(ptr_file,"%s %d %d",&name,&x,&y);
				
				//AddNewNode(name, x, y);
			}
			//numNodes
		}		
		else if (strcmp(buf,"EDGES") == 0)
		{
			fscanf(ptr_file,"%d",&numEdges);
			for (i = 0; i < numEdges; i++)
			{
				char startNode[2];
				char endNode[2];
				int weight;
				fscanf(ptr_file,"%s %s %d",&startNode,&endNode,&weight);
				
			}
			
		}
		else if (strcmp(buf,"PATHS") == 0)
		{
			fscanf(ptr_file,"%d",&numPaths);
			for (i = 0; i < numPaths; i++)
			{
				char start[2];
				char finish[2];				
				//fscanf(ptr_file,"%s %s",&start,&finish);				
			}
			//numPaths
		}		
	}		

	fclose(ptr_file);
}

void AddNewNode(char Name[], int xPos, int yPos)
{

}