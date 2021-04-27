#include <stdio.h>

int main()
{
    int noOfChairs,noOfDays=0,noOfPerson=0,flag=0;
    scanf("%d",&noOfChairs);
    int chairs[noOfChairs];
    for(int counter=0;counter<noOfChairs;counter++)
        scanf("%d",&chairs[counter]);
        
    do
    {
        flag=0;
        for(int counter=0;counter<noOfChairs;counter++)
        {
                
            if((counter==0 && chairs[counter]==2)&&(chairs[counter+1]==1))
            {
                chairs[counter+1]=2;
                counter++;
                flag=1;
            }
            else if((counter>0 && counter<noOfChairs-1)&&(chairs[counter]==2))
            {
               if(chairs[counter-1]==1)
               {
                   chairs[counter-1]=2;
                   flag=1;
               }
               if(chairs[counter+1]==1)
               {
                   
                   chairs[counter+1]=2;
                   counter++;
                   flag=1;
               }
            }
            else if((counter==noOfChairs-1 && chairs[counter]==2)&&(chairs[counter-1]==1))
            {
                chairs[counter-1]=2;
                flag=1;
            }
        }
        if(flag==0)
            break;
        noOfDays++;
        
    }while(1);
    
    for(int counter=0;counter<noOfChairs;counter++)
        if(chairs[counter]==1)
            noOfPerson++;
            
    printf("%d %d",noOfDays+1,noOfPerson);
}
