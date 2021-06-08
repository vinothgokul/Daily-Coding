#include <stdio.h>

int main()
{
    int noOfElements,sumValue,combo,temp,tempSum,count=0;
    scanf("%d",&noOfElements);
    int inputArr[noOfElements];
    
    for(int counter=0;counter<noOfElements;counter++)
        scanf("%d",&inputArr[counter]);
        
    scanf("%d %d",&sumValue,&combo);
        
    for(int counter=0;counter<noOfElements;counter++)
    {
        temp = combo-1;
        tempSum = inputArr[counter];
        for(int counter2=counter+1;temp!=0;counter2++,temp--)
        {
            tempSum+=inputArr[counter2];
        }
        if(tempSum == sumValue)
            count++;
    }
    printf("%d",count);
}
