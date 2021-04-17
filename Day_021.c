#include <stdio.h>

int main()
{
    char input[101],current;
    int count=1;
    scanf("%s",input);
    current=input[0];
    for(int i=1;input[i]!='\0';i++)
    {
        if(input[i]==current) count++;
        else
        {
            printf("%d%c",count,current);
            current=input[i];
            count=1;
        }
    }
    printf("%d%c",count,current);
}
