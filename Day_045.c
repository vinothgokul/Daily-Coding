#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k;
        scanf("%d",&n);
        printf("0\n");
        for(i=2;i<=n;i++)
        {
            int c1=9,c2=9-i+2;
            for(j=1;j<i;j++)
            {
                printf("%d",c2++);

            }
            printf("0");
            for(k=1;k<i;k++)
            {
                printf("%d",c1--);
            }
            printf("\n");
        }
}

/*
Input : 3

Output :
0
909
89098
*/
