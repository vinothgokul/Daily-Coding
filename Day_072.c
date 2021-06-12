#include<stdio.h>

int main()
{
    int s,t,a,b,m,n,i,count1=0,count2=0;

    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);

    int x[m],y[n];
    for(i=0;i<m;i++)
    {
        scanf("%d",&x[i]);
        x[i]+=a;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
        y[i]+=b;
    }
    for(i=0;i<m;i++)
    {
        if(x[i]>=s && x[i]<=t)
            count1++;
    }
    for(i=0;i<n;i++)
    {
        if(y[i]>=s && y[i]<=t)
            count2++;
    }
    printf("%d\n%d",count1,count2);
    return 0;
}
