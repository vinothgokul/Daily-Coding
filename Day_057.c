#include <stdio.h>
int main()
{
    int input,temp;
   scanf("%d",&input);
    temp=input;
    for(int counter=input-1;counter>=0;counter--)
    {  
        int temp1=input;
        for(int counter2=1;counter2<temp;counter2++)
        {
            printf(" ");
        }
        for(int counter3=1;counter3<=input-counter;counter3++)
        {
            printf("%d ",temp1--);
        }
        temp--;

        printf("\n");
    }
    return 0;
}