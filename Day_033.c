#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    char teamName[input][100],homeGround[input][100];
    
    for(int counter=0;counter<input;counter++)
        scanf("\n%[^-] - %[^\n]",teamName[counter],homeGround[counter]);
        
    for(int counter=0;counter<input-1;counter++)
        for(int counter2=counter+1;counter2<input;counter2++)
        {
            printf("%svs %s(%s)\n",teamName[counter],teamName[counter2],homeGround[counter]);
            printf("%svs %s(%s)\n",teamName[counter2],teamName[counter],homeGround[counter2]);
        }
}
