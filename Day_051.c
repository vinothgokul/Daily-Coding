#include<stdio.h>

int main()
{
    long int inputNum,divisor1,divisor2,findPos,first,second,andNext,temp,tensCount=10;
    scanf("%ld %ld %ld %ld",&inputNum,&divisor1,&divisor2,&findPos);
    temp = inputNum;
    while(temp/10)
    {
        first=inputNum/tensCount;
        second = inputNum%tensCount;
        tensCount*=10;
        temp/=10;
	
        if(first%divisor1==0&&second%divisor2==0)
        {	
            if(first>second)
            {
                temp = first;
                first = second;
                second = temp;
            }
            break;
        }
    }
    andNext = first + second;
    if(findPos==1)
        printf("%ld",first);
    else if(findPos==2)
        printf("%ld",second);
    else
    {
        for(int counter=3;counter<findPos;counter++)
        {
            first = second;
            second = andNext;
            andNext = first+second;
        }
        printf("%ld",andNext);
    }
}