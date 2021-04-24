#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* getInterlacedString(int X, int Y, char ch1, char ch2)
{
    char *str = malloc(sizeof(char)*(X+Y));
    int temp1 = X,temp2 = Y,counter;
    for(counter=0;counter<(X+Y);counter++)
    {
        if((temp1!=0 && counter%2==0)||(temp2==0)){
            str[counter]=ch1;
            temp1--;
        }
        else if((temp2!=0 && counter%2!=0)||(temp1==0)){
            str[counter]=ch2;
            temp2--; 
        }
    }
    str[counter]='\0';
    return str;
}

int main()
{
    int X,Y;
    char ch1,ch2;
    scanf("%d %d\n%c %c",&X,&Y,&ch1,&ch2);
    char *s = getInterlacedString(X,Y,ch1,ch2);
    printf("Length : %d\n",strlen(s));
    printf("String : %s",s);
}