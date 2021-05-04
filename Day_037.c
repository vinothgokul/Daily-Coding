#include <stdio.h>

int main()
{
    int row,col,tempCounter,flag;
    scanf("%d %d",&row,&col);
    int input[row][col];
    
    for(int rowCounter=0;rowCounter<row;rowCounter++)
        for(int colCounter=0;colCounter<col;colCounter++)
            scanf("%d",&input[rowCounter][colCounter]);
            
    for(int rowCounter=0;rowCounter<row;rowCounter+=3)
        for(int colCounter=0;colCounter<col;colCounter+=3)
        {
            flag=0;
            tempCounter=1;
            int checked[10] = {0};
            
            for(int counter1=rowCounter;counter1<rowCounter+3;counter1++)
                for(int counter2=colCounter;counter2<colCounter+3;counter2++)
                    checked[input[counter1][counter2]]=1;
                    
            for(int counter=1;counter<10;counter++)
                if(checked[counter]==0)
                {
                    flag=1;
                    break;
                }
                
            if(flag==0)
            {
                for(int counter1=rowCounter;counter1<rowCounter+3;counter1++)
                    for(int counter2=colCounter;counter2<colCounter+3;counter2++)
                        input[counter1][counter2]=tempCounter++;
            }
        }
        
    for(int rowCounter=0;rowCounter<row;rowCounter++)
    {
        for(int colCounter=0;colCounter<col;colCounter++)
            printf("%d ",input[rowCounter][colCounter]);
        printf("\n");
    }
}
