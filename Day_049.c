#include<stdio.h>

int main()
{
    long long int input,tensCount=1,count=0,temp;
    int evenDigit;
    scanf("%lld",&input);
    temp = input;
    while(temp)
    {
        count++;
        temp/=10;
    }
    temp = input;
    int _array[count];

    for(int counter=count-1;counter>=0;counter--)
    {
        _array[counter] = temp%10;
        temp/=10;
    }
    
    for(int counter=0;counter<count;counter++)
    {
        printf("%d ",_array[counter]);
    }
}