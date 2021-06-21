#include<stdio.h>

int main()
{
    int n,k,c,b,i,sum=0;

    scanf("%d %d",&n,&k);

    int bill[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&bill[i]);
    }
    scanf("%d",&b);

    for(i=0;i<n;i++)
    {
        if(i!=k)
            sum+=bill[i];
    }
    if(sum/2==b)
    {
        printf("Bon Appetit");
    }
    else
    {
        c=b-(sum/2);
        printf("%d",c);
    }
    return 0;
}
