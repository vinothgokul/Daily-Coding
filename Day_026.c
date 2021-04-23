#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row,col,noOfGroups,currentValue = 1;
    scanf("%d %d %d",&row,&col,&noOfGroups);
    int groups[noOfGroups],output[row][col];
    
    for(int counter=0;counter<noOfGroups;counter++)
        scanf("%d",&groups[counter]);
    
    for(int rowCounter=row-1;rowCounter>=0;rowCounter--)
        for(int colCounter=0;colCounter<col;colCounter++)
        {
            if(groups[currentValue-1]==0)
                currentValue++;
                
            groups[currentValue-1]--;
            output[rowCounter][colCounter]=currentValue;
        }
    
    for(int rowCounter=0;rowCounter<row;rowCounter++)
    {
        for(int colCounter=0;colCounter<col;colCounter++)
            printf("%d ",output[rowCounter][colCounter]);

        printf("\n");
    }
}