#include <stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    char input[row][col];
    
    for(int rowCounter=0;rowCounter<row;rowCounter++)
        for(int colCounter=0;colCounter<col;colCounter++)
            scanf(" %c",&input[rowCounter][colCounter]);
            
    for(int colCounter=0;colCounter<col;colCounter++)
    {
        input[0][colCounter] = 'x';
        for(int rowCounter=1;rowCounter<row;rowCounter++)
        {
            if((input[rowCounter][colCounter]!='=') && (input[rowCounter-1][colCounter]=='x'))
                input[rowCounter][colCounter]='x';
                
            else    break;
        }
    }
    for(int rowCounter=0;rowCounter<row;rowCounter++)
    {
        for(int colCounter=0;colCounter<col;colCounter++)
            printf("%c ",input[rowCounter][colCounter]);
        printf("\n");
    }
}
