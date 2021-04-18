#include<stdio.h>

int main()
{
    int noOfTestCase,flag=0;
    scanf("%d",&noOfTestCase);
    int cases[noOfTestCase][2],result[noOfTestCase];
    
    for(int counter=0;counter<noOfTestCase;counter++)
    {
        int count=0,sum=0;
        scanf("%d %d",&cases[counter][0],&cases[counter][1]);
        int temp[cases[counter][0]];
        for(int counter2=0;counter2<cases[counter][0];counter2++)
            scanf("%d",&temp[counter2]);
        for(int counter2=0;counter2<cases[counter][0];counter2++)
        {
            for(int counter3=0;counter3<cases[counter][0];counter3++)
            {
                if(temp[counter2]<temp[counter3])
                {
                    int temp1 = temp[counter2];
                    temp[counter2] = temp[counter3];
                    temp[counter3] = temp1;
                }
            }
        }
        for(int counter2=0;counter2<cases[counter][0];counter2++)
        {
            sum+=temp[counter2];
            if(sum>cases[counter][1]){
                sum-=temp[counter2];
                result[counter]=count;
                flag=1;
                break;
            }
            else
                count++;
        }
        if(flag==0)
            result[counter]=count;
    }
    for(int counter=0;counter<noOfTestCase;counter++)
        printf("%d ",result[counter]);
}