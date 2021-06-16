#include <stdio.h>

int main()
{
    int n,i,count=0,max;
    scanf("%d",&n);

    int ar[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    max=ar[0];
    for(i=0;i<n;i++)
    {
        
        if(ar[i]>max)
        {
            max=ar[i];
        }
            
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]==max)
        {
            count++;
        }
            
    }

    printf("%d",count);
    return 0;
}
