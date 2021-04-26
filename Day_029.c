/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    for(int rowCounter=1;rowCounter<=input;rowCounter++)
    {
        for(int colCounter=1;colCounter<=(input*2)-1;colCounter++)
        {
            if(colCounter<=(input-rowCounter)||colCounter>=(input+rowCounter))
                printf(" ");
                
            else
                printf("*");
            
        }
        printf("\n");
    }
    for(int rowCounter=input-1;rowCounter>=1;rowCounter--)
    {
        for(int colCounter=1;colCounter<=(input*2)-1;colCounter++)
        {
            if(colCounter<=(input-rowCounter)||colCounter>=(input+rowCounter))
                printf(" ");
                
            else
                printf("*");
        }
        printf("\n");
    }
}
