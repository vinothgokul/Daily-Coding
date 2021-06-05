#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *a[])
{
	char virus[100000],person[10][100000];
	int noOfPerson,flag,counter,counter2,counter3;
	scanf("%s",virus);
	scanf("%d",&noOfPerson);

	for(counter=0;counter<noOfPerson;counter++)
		scanf("%s",person[counter]);

    for(counter=0;counter<noOfPerson;counter++)
	{
		counter3 = 0;
		flag=0;
		for(counter2=0;person[counter][counter2]!='\0';counter2++)
		{
			for(;virus[counter3]!='\0';counter3++)
			{
				if(person[counter][counter2]==virus[counter3])
				{
					counter3++;
					break;
				}
			}
			if(virus[counter3]=='\0' && person[counter][counter2]!=person[counter][strlen(person[counter])-1])
				flag=1;
		}
		printf("%s\n",(flag==0)?"POSITIVE":"NEGATIVE");
	}
}
