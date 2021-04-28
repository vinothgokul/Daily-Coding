#include<stdio.h>
#include<stdlib.h>

int main()
{
    int row,col,counter;
    scanf("%d %d",&row,&col);
    char input[row][col],result[row][col/2];
    
    for(int rowCounter=0;rowCounter<row;rowCounter++)
        for(int colCounter=0;colCounter<col;colCounter++)
            scanf(" %c",&input[rowCounter][colCounter]);
            
    for(int rowCounter=0;rowCounter<row;rowCounter++)
    {
        counter = col-1;
        for(int colCounter=0;colCounter<(col/2);colCounter++){
            if(input[rowCounter][colCounter]=='R')
            {
                if(input[rowCounter][counter]=='R')
                        result[rowCounter][colCounter] = 'R';
                else if(input[rowCounter][counter]=='B')
                        result[rowCounter][colCounter] = 'M';
                else if(input[rowCounter][counter]=='G')
                        result[rowCounter][colCounter] = 'Y';
            }
            else if(input[rowCounter][colCounter]=='G')
            {
                if(input[rowCounter][counter]=='G')
                    result[rowCounter][colCounter] = 'G';
                else if(input[rowCounter][counter]=='B')
                    result[rowCounter][colCounter] = 'C';
                else if(input[rowCounter][counter]=='R')
                    result[rowCounter][colCounter] = 'Y';
            }
            else if(input[rowCounter][colCounter]=='B')
            {
                if(input[rowCounter][counter]=='B')
                    result[rowCounter][colCounter] = 'B';
                else if(input[rowCounter][counter]=='R')
                    result[rowCounter][colCounter] = 'M';
                else if(input[rowCounter][counter]=='G')
                    result[rowCounter][colCounter] = 'C';
            }
            counter--;
        }
    }
    for(int rowCounter=0;rowCounter<row;rowCounter++)
    {
        for(int colCounter=0;colCounter<(col/2);colCounter++)
        {
            printf("%c ",result[rowCounter][colCounter]);
        }
        printf("\n");
    }
}