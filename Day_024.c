#include<stdio.h>

void printArray(int row,int col,int arr[][col])
{
    for(int rowCounter=0;rowCounter<row;rowCounter++)
	{
	    printf("\n");
	    for(int colCounter=0;colCounter<col;colCounter++)
	    {
	        printf("%d ",arr[rowCounter][colCounter]);
	    }
	}
}

int main()
{
	int row,col;
	scanf("%d %d",&row,&col);
	int array[row][col],visited[row][col];
	
	for(int rowCounter=0;rowCounter<row;rowCounter++)
	    for(int colCounter=0;colCounter<col;colCounter++)
	        scanf("%d",&array[rowCounter][colCounter]);
	        
	for(int rowCounter=0;rowCounter<row;rowCounter++)
	{
	    for(int colCounter=0;colCounter<col;colCounter++)
	    {
	        if(array[rowCounter][colCounter]==1)
	        {
	            visited[rowCounter][colCounter]=1;
	            for(int counter=0;counter<col;counter++)
	                visited[rowCounter][counter]=1;
	            for(int counter=0;counter<row;counter++)
	                visited[counter][colCounter]=1;
	        }
	        else if(visited[rowCounter][colCounter]!=1)
	            visited[rowCounter][colCounter]=0;
	    }
	}
	printArray(row,col,visited);
}