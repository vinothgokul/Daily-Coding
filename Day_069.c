#include<stdio.h>

int main()
{
    int y,leapYear=0;

    scanf("%d",&y);

    if(y<1917)
    {
        if(y%4==0)
        {
            leapYear++;
        }
    }
    else
    {
        if(y%400==0)
        {
            leapYear++;
        }
        else{
            if(y%4==0)
            {
                if(y%100==0){}
                else{leapYear++;}
            }
        }
    }

    if(y!=1918)
    {
    if(leapYear==1)
    {
        printf("12.09.%d",y);
    }
    else{
        printf("13.09.%d",y);
    }
    }
    else
    {
        printf("26.09.1918");
    }
    return 0;
}
