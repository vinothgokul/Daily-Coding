#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *input = malloc(sizeof(char));
    long long int count,counter2,sum=0;
    scanf("%s",input);
    scanf("%lld",&count);
        for(counter2=0;input[counter2]!='\0';counter2++)
        {
            sum = (sum + input[counter2] - '0');
        }
    count %= 9;
    sum *= count;
    printf("%lld",(sum%9==0)?9:sum%9);
        
    return 0;
}
