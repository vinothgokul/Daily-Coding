#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char input[100],temp[2];
    scanf("%s",input);
    int x=0,len=strlen(input);
    char result[(len/2)-3];
    
    for(int counter=0;counter<len;)
    {
        temp[0] = input[counter++];
        temp[1] = input[counter++];
        counter++;
        if(temp[0]<58)
            result[(temp[0]-'0')-1] = temp[1];
        else
            result[(temp[1]-'0')-1] = temp[0];    
    }
    
    result[(len/2)-2] = '\0';
    printf("%s",result);
}