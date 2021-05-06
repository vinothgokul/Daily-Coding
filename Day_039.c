#include <stdio.h>

int main()
{
    int row,column,rowCounter,colCounter,inputNum,flag=0;
    scanf("%d %d",&row,&column);
    char input[row][column];
    
    for(rowCounter=0;rowCounter<row;rowCounter++)
        for(colCounter=0;colCounter<column;colCounter++)
            scanf(" %c",&input[rowCounter][colCounter]);
            
    scanf("%d",&inputNum);
    
    for(rowCounter=0;rowCounter<=(row-inputNum);rowCounter++){
        for(colCounter=0;colCounter<=(column-inputNum);colCounter++){
            if((input[rowCounter][colCounter]==input[rowCounter][colCounter+inputNum-1])&&(input[rowCounter][colCounter]==input[rowCounter+inputNum-1][colCounter])&&(input[rowCounter][colCounter]==input[rowCounter+inputNum-1][colCounter+inputNum-1]))
            {
                for(int counter=rowCounter,counter2=colCounter,counter3=(colCounter+inputNum-1);counter<(rowCounter+inputNum);counter++,counter2++,counter3--)
                {
                    input[counter][counter2]='*';
                    input[counter][counter3]='*';
                }
                flag = 1;
                break;
            }
        }
        if(flag==1) break;
    }

    for(rowCounter=0;rowCounter<row;rowCounter++){
        for(colCounter=0;colCounter<column;colCounter++)
            printf(" %c",input[rowCounter][colCounter]);
        printf("\n");
    }
}
