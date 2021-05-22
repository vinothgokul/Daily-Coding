#include <stdio.h>
#include<stdlib.h>
char* getUniqueUnitDigits(int SIZE, int arr[])
{
    char *s = malloc(sizeof(char));
    int unitDigits[SIZE],x=0;
    
    for(int i=0;i<SIZE;i++)
        unitDigits[i] = arr[i]%10;
        
    for(int i=9;i>=0;i--)
    {
        for(int j=0;j<SIZE;j++)
        {
            if(unitDigits[j]==i){
                s[x++]=i+48;
                break;
            }
        }
    }
    s[x]='\0';
    return s;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        
    char* s = getUniqueUnitDigits(n,arr);
    
    printf("Unique Unit Digits: %s",s);
    free(s);
    return 0;
}
