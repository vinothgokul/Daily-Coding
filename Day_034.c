#include <stdio.h>

int main()
{
    int individual,total,rowCounter,colCounter,alternative=0;
    scanf("%d %d",&individual,&total);
    
    for(rowCounter=0;rowCounter<individual*total;rowCounter++)
    {
        if(rowCounter%individual==0)
            alternative = !alternative;
            
        for(colCounter=0;colCounter<individual*total;colCounter++)
        {
            if(colCounter%individual==0)
            {
                if((colCounter==0 && total%2!=0)&&(rowCounter!=0)){}
                else
                alternative = !alternative;
            }
                
            printf("%d ",alternative);
        }
        printf("\n");
    }
}
