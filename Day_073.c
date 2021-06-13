#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,i,n,temp;
    float pos=0,neg=0,zero=0;
    scanf("%d",&n);

    if(n>0 && n<=100)
    {
    arr=(int *)malloc(n *sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        arr[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            ++pos;
        }
        else
        {
            if(arr[i]<0)
            {
                ++neg;
            }
            else
            {
                ++zero;
            }
        }
    }
    printf("%f\n",(pos/(float)n));
    printf("%f\n",(neg/(float)n));
    printf("%f",(zero/(float)n));
    }
return 0;
}
