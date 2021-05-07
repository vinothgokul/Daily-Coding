#include <stdio.h>
#include <stdlib.h>

int* mergeEven(int M,int *arr1,int N,int *arr2)
{
    int *merArr = malloc(sizeof(M+N)),index1=0,index2=0;
    for(int index=0;index<M+N;index++)
    {
        if(arr1[index1]%2!=0)
            merArr[index]=arr1[index1++];
        else{
            merArr[index]=arr1[index1++];
            merArr[index+1]=arr2[index2++];
            index++;
        }
    }
    return merArr;
}


int main()
{
    int M,N;
    scanf("%d %d",&M,&N);
    int arr1[M],arr2[N];
    for(int index=0;index<M;index++)
        scanf("%d",&arr1[index]);
        
    for(int index=0;index<N;index++)
        scanf("%d",&arr2[index]);
        
    int *mergedArr = mergeEven(M,arr1,N,arr2);
    
    printf("Array 1 : ");
    for(int index=0;index<M;index++)
        printf("%d ",arr1[index]);
        
    printf("\nArray 2 : ");
    for(int index=0;index<N;index++)
        printf("%d ",arr2[index]);
        
    printf("\nMerged Array : ");
    for(int index=0;index<M+N;index++)
        printf("%d ",mergedArr[index]);

    free(mergedArr);
        
    return 0;
}
