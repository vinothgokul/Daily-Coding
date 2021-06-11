#include<stdio.h>

int main()
{
    int n,i,min,max,min_count=0,max_count=0;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
            continue;

        if(a[i+1]<min){
            min=a[i+1];
            min_count++;
            continue;
        }

        if(a[i+1]>max)
        {
            max=a[i+1];
            max_count++;
        }
    }
    printf("%d %d",max_count,min_count);
    return 0;
}
