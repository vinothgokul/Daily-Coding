#include <stdio.h>

int main()
{
    int noOfElements,max;
    scanf("%d %d",&noOfElements,&max);
    int arr[noOfElements],high = max;
    
    for(int counter=0;counter<noOfElements;counter++)
        scanf("%d",&arr[counter]);
        
    for(int counter=0;counter<noOfElements;counter++)
    {
        if(arr[counter]>high)
            high = arr[counter];
    }
    
    printf("%d",(high==max)?0:high-max);
}
