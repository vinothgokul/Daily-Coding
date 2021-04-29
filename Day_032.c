#include <stdio.h>

int main()
{
    char inputChar[6];
    int inputInt,rowCounter,colCounter,counter;
    
    for(counter=1;counter<=6;counter++)
        scanf("%c ",&inputChar[counter]);
        
    scanf("%d",&inputInt);
    
    for(rowCounter=0;rowCounter<3*inputInt;rowCounter++)
    {
        for(colCounter=0;colCounter<4*inputInt;colCounter++)
        {
            if(rowCounter<inputInt)
            {
                if(colCounter>=inputInt && colCounter<inputInt+inputInt)
                    printf("%c ",inputChar[6]);
                else
                    printf("* ");
            }
            else if(rowCounter>=inputInt+inputInt)
            {
                if(colCounter>=inputInt && colCounter<inputInt+inputInt)
                    printf("%c ",inputChar[5]);
                else
                    printf("* ");
            }
            else
            {
                if(colCounter>=0 && colCounter<inputInt)
                    printf("%c ",inputChar[4]);
                else if (colCounter>=inputInt && colCounter<inputInt*2)  
                    printf("%c ",inputChar[1]);
                else if(colCounter>=inputInt*2 && colCounter<inputInt*3)
                    printf("%c ",inputChar[2]);
                else
                    printf("%c ",inputChar[3]);
                
            }
        }
        printf("\n");
    }
}
