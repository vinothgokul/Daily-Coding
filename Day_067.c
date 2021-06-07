#include <stdio.h>
#include <stdlib.h>
int main()
{
    char input;
    long long int count,sum=0;

    while(scanf("%c",&input))
    {
        if(input == ' ')
            break;
        sum += input - '0';
    }
    scanf("%lld",&count);
    count %= 9;
    sum %= 9;
    sum *= count;
    printf("%lld",(sum%9==0)?9:sum%9);
        
    return 0;
}
