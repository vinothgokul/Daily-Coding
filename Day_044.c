#include <stdio.h>

int main()
{
    int size,topLeft,topRight,bottomLeft,bottomRight,temp;
    scanf("%d",&size);
    char input[size][size];
    
    for(int rowCounter=0;rowCounter<size;rowCounter++)
        for(int colCounter=0;colCounter<size;colCounter++)
            scanf(" %c",&input[rowCounter][colCounter]);
            
    
    for(int counter=0;counter<size/2;counter++)
    {
        topLeft = input[counter][counter];
        topRight = input[counter][size-1-counter];
        bottomLeft = input[size-1-counter][counter];
        bottomRight = input[size-1-counter][size-1-counter];
        
        input[counter][counter] = topRight;
        input[counter][size-1-counter] = bottomRight;
        input[size-1-counter][counter] = topLeft;
        input[size-1-counter][size-1-counter] = bottomLeft;
    }
    
    for(int rowCounter=0;rowCounter<size;rowCounter++){
        for(int colCounter=0;colCounter<size;colCounter++)
            printf("%c ",input[rowCounter][colCounter]);
        printf("\n");
    }
}
