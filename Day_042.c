#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* getCommaSeparatedValues(int SIZE,int arr[])
{
    char *result = (char*)malloc(SIZE * 10000 * sizeof(char));
    char temp[10];
    for(int counter=0;counter<SIZE;counter++)
    {
        if(counter!=SIZE-1)
            sprintf(temp, "%d,",arr[counter]);
        else
            sprintf(temp, "%d",arr[counter]);
        if(counter==0)
            strcpy(result,temp);
        else
            strcat(result,temp);
    }
    return result;
}
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int index=0;index<N;index++)
        scanf("%d",&arr[index]);
        
    char *ptr = getCommaSeparatedValues(N,arr);
    printf("CSV: %s",ptr);
    return 0;
}