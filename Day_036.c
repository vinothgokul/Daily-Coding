#include<stdio.h>
#include<string.h>

int main()
{
    int row,col,rowCounter,colCounter,totalCount[4]={0},flag=0,tempCounter;
    scanf("%d %d",&row,&col);
    char input[row][col],str[50];
    
    for(rowCounter=0;rowCounter<row;rowCounter++)
        for(colCounter=0;colCounter<col;colCounter++)
            scanf(" %c",&input[rowCounter][colCounter]);
    
    scanf("%s",str);
    
    if(input[0][0]==str[0] || input[0][0]==str[strlen(str)-1])
    {
        if(input[0][0]==str[0])
        {
            for(int counter=0;counter<strlen(str);counter++)
            {
                if(input[0][counter]!=str[counter])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                totalCount[0]++;
                printf("Top");
                return 0;
            }
            flag=0;
            for(int counter=0;counter<strlen(str);counter++)
            {
                if(input[counter][0]!=str[counter])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) 
                totalCount[3]++;
        }
        else
        {
            tempCounter = strlen(str)-1;
            for(int counter=0;counter<strlen(str);counter++)
            {
                if(input[0][counter]!=str[tempCounter--])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                totalCount[0]++;
                printf("Top");
                return 0;
            }
                
            tempCounter=strlen(str)-1;
            flag=0;
            for(int counter=0;counter<strlen(str);counter++)
            {
                if(input[counter][0]!=str[tempCounter--])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) 
                totalCount[3]++;  
        }
    }
    
    tempCounter=0;
    flag=0;
    
    if(input[0][col-1]==str[0] || input[0][col-1]==str[strlen(str)-1])
    {
        if(input[0][col-1]==str[0])
        {
            for(int counter=col-1;str[tempCounter]!='\0';counter--)
            {
                if(input[0][counter]!=str[tempCounter++])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                totalCount[0]++;
                printf("Top");
                return 0;
            }
            tempCounter=0;
            flag=0;
            for(int counter=0;str[tempCounter]!='\0';counter++)
            {
                if(input[counter][col-1]!=str[tempCounter++])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                totalCount[1]++;
                if(totalCount[0]==0)
                {
                    printf("Right");
                    return 0;
                }
                
            }
        }
        else
        {
            tempCounter=strlen(str)-1;
            flag=0;
            for(int counter=col-1;tempCounter>=0;counter--)
            {
                if(input[0][counter]!=str[tempCounter--])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                totalCount[0]++;
                printf("Top");
                return 0;
            }
            tempCounter=0;
            flag=0;
            for(int counter=0;str[tempCounter]!='\0';counter++)
            {
                if(input[counter][col-1]!=str[tempCounter++])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                totalCount[1]++;
                if(totalCount[0]==0)
                {
                    printf("Right");
                    return 0;
                }
            }
        }
    }
    tempCounter=0;
    flag=0;
    if(input[row-1][col-1]==str[0] || input[row-1][col-1]==str[strlen(str)-1])
    {
        if(input[row-1][col-1]==str[0])
        {
            for(int counter=row-1;str[tempCounter]!='\0';counter--)
            {
                if(input[counter][col-1]!=str[tempCounter++])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                totalCount[1]++;
                if(totalCount[0]==0)
                {
                    printf("Right");
                    return 0;
                }
            }
            tempCounter=0;
            flag=0;
            for(int counter=col-1;str[tempCounter]!='\0';counter--)
            {
                if(input[row-1][counter]!=str[tempCounter++])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                totalCount[2]++;
                if(totalCount[0]==0 && totalCount[1]==0)
                {   
                    printf("Bottom");
                    return 0;
                }
            }
        }
        else
        {
            tempCounter=strlen(str)-1;
            flag=0;
            for(int counter=row-1;tempCounter>=0;counter--)
            {
                if(input[counter][col-1]!=str[tempCounter--])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                totalCount[1]++;
                if(totalCount[0]==0)
                {
                    printf("Right");
                    return 0;
                }
            }
            tempCounter=strlen(str)-1;
            flag=0;
            for(int counter=col-1;tempCounter>=0;counter--)
            {
                if(input[row-1][counter]!=str[tempCounter--])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                totalCount[2]++;
                if(totalCount[0]==0 && totalCount[1]==0)
                {   
                    printf("Bottom");
                    return 0;
                }
            }
        }
    }
    tempCounter=0;
    flag=0;
    if(input[row-1][0]==str[0] || input[row-1][0]==str[strlen(str)-1])
    {
        if(input[row-1][0]==str[0])
        {
            for(int counter=0;str[tempCounter]!='\0';counter++)
            {
                if(input[row-1][counter]!=str[tempCounter++])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                totalCount[2]++;
                if(totalCount[0]==0 && totalCount[1]==0)
                {   
                    printf("Bottom");
                    return 0;
                }
            }
            tempCounter=0;
            flag=0;
            for(int counter=row-1;str[tempCounter]!='\0';counter--)
            {
                if(input[counter][0]!=str[tempCounter++])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                totalCount[3]++;
                if((totalCount[0]==0 && totalCount[1]==0) && totalCount[2]==0)
                {
                    printf("Left");
                    return 0;
                }
            }
            
        }
        else
        {
            tempCounter=strlen(str)-1;
            flag=0;
            for(int counter=0;tempCounter>=0;counter++)
            {
                if(input[row-1][counter]!=str[tempCounter--])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                totalCount[2]++;
                if(totalCount[0]==0 && totalCount[1]==0)
                {   
                    printf("Bottom");
                    return 0;
                }
            }
            tempCounter=strlen(str)-1;
            flag=0;
            for(int counter=row-1;tempCounter>=0;counter--)
            {
                if(input[counter][0]!=str[tempCounter--])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                totalCount[3]++;
                if((totalCount[0]==0 && totalCount[1]==0) && totalCount[2]==0)
                {
                    printf("Left");
                    return 0;
                }
            }
        }
    }
    if((totalCount[0]==0 && totalCount[1]==0)&&(totalCount[2]==0 && totalCount[3]==0))
    	printf("-1");
}
