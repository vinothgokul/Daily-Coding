#include <stdio.h>
#include<stdlib.h>
int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {
    
    int finalSum=0,tempSum=0,flag=-1;
    
    for(int i=0;i<keyboards_count;i++)
    {
        for(int j=0;j<drives_count;j++)
        {
            if(keyboards[i]+drives[j]<b){
                tempSum = keyboards[i]+drives[j];
                flag = 1;
            }
           
            if(tempSum>finalSum)
                finalSum = tempSum;
        }
    }
    return (finalSum!=0)? finalSum : flag;
}

int main()
{
    int keyboards_count, drives_count, b, result;
    int* keyboards = malloc(sizeof(int));
    int* drives = malloc(sizeof(int));
    scanf("%d %d %d",&b,&keyboards_count,&drives_count);
    
    for(int i=0;i<keyboards_count;i++)
        scanf("%d",&keyboards[i]);
        
    for(int i=0;i<drives_count;i++)
        scanf("%d",&drives[i]);
        
    result = getMoneySpent(keyboards_count,keyboards,drives_count,drives,b);
    
    printf("%d",result);

    return 0;
}
