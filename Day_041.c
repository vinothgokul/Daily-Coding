#include<stdio.h>
#include<stdlib.h>

int searchBig(int studentCount,int *input,int *rank)
{
    int big = 0;
    for(int counter1=0;counter1<studentCount;counter1++)
        if(input[counter1]>big && rank[counter1]==0)
            big = input[counter1];
            
    return big;
}

int main()
{
    int studentCount,index,rankOfStudent=1,big;
    scanf("%d",&studentCount);
    int input[studentCount],rank[studentCount];
    
    for(int counter=0;counter<studentCount;counter++){
        scanf("%d",&input[counter]);
        rank[counter]=0;
    }
        
    scanf("%d",&index);
    
    for(int counter1=0;counter1<studentCount;counter1++)
    {
        big = searchBig(studentCount,input,rank);

        for(int counter2=0;counter2<studentCount;counter2++)
            if(input[counter2]==big && big!=0)
                rank[counter2]=rankOfStudent;

        rankOfStudent++;
    }
    printf("%d",rank[index-1]);    
}