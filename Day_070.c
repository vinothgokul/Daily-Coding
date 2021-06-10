#include<stdio.h>

int main()
{
    long int *ar,sum=0;
    int n,i;

    scanf("%d",&n);
    ar=(int *)malloc(n *sizeof(int));
    if(n>=1 && n<=10)
    {
    for(i=0;i<n;i++)
    {
        scanf("%ld",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=ar[i];
    }
    }
    printf("%ld",sum);
    return 0;
}
