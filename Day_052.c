#include<stdio.h>

int main()
{
    int input,printNum=1;
    scanf("%d",&input);
    int myMatrix[input][input];

    for(int rowCounter=0;rowCounter<input;rowCounter++)
    {
        if(rowCounter%2==0){
            for(int colCounter=0;colCounter<input;colCounter++)
            {
                myMatrix[rowCounter][colCounter] = printNum;
                    printNum++;
            }
        }
        else
        {
            for(int colCounter=input-1;colCounter>=0;colCounter--)
            {
                myMatrix[rowCounter][colCounter] = printNum;
                    printNum++;
            }
        }
    }
    for(int rowCounter=0;rowCounter<input;rowCounter++)
    {
        for(int colCounter=0;colCounter<input;colCounter++)
        {
            if(colCounter!=input-1)
                printf("%02d*",myMatrix[rowCounter][colCounter]);
            else
                printf("%02d",myMatrix[rowCounter][colCounter]);
        }
        printf("\n");
    }
}