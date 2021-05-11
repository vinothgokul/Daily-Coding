#include<stdio.h>

int check(int counter,int counter2,int temp)
{
	if(counter==0)
	{
		if(counter2==1)
		{
			if(temp==1)
				return 11;
			else if(temp==2)
				return 55;
		}
		if(counter2==2)
		{
			if(temp==1)
				return 12;
			else if(temp==2)
				return 0;
		}
		if(counter2==3)
		{
			if(temp==1)
				return 1;
			else if(temp==2)
				return 5;
		}
	}
	else if(counter==1)
	{
		if(counter2==0)
		{
			if(temp==1)
				return 10;
			else if(temp==2)
				return 50;
		}
		if(counter2==4)
		{
			if(temp==1)
				return 2;
			else if(temp==2)
				return 10;
		}
	}
	else if(counter==2)
	{
		if(counter2==0)
		{
			if(temp==1)
				return 9;
			else if(temp==2)
				return 45;
		}
		if(counter2==4)
		{
			if(temp==1)
				return 3;
			else if(temp==2)
				return 15;
		}
	}
	else if(counter==3)
	{
		if(counter2==0)
		{
			if(temp==1)
				return 8;
			else if(temp==2)
				return 40;
		}
		if(counter2==4)
		{
			if(temp==1)
				return 4;
			else if(temp==2)
				return 20;
		}
	}
	else
	{
		if(counter2==1)
		{
			if(temp==1)
				return 7;
			else if(temp==2)
				return 35;
		}
		if(counter2==2)
		{
			if(temp==1)
				return 6;
			else if(temp==2)
				return 30;
		}
		if(counter2==3)
		{
			if(temp==1)
				return 5;
			else if(temp==2)
				return 25;
		}
	}

}

int main()
{
	int clock[5][5]={0},input1,input2,temp,result1=0,result2=0,counter,counter2;

	for(counter=0;counter<5;counter++)
	{
		if(counter==0 || counter==4)
			scanf("* %d %d %d *\n",&clock[counter][1],&clock[counter][2],&clock[counter][3]);

		else
			scanf("%d * * * %d\n",&clock[counter][0],&clock[counter][4]);
	}

	scanf("%d %d",&input1,&input2);
    
	for(counter=0;counter<5;counter++)
	{
		for(counter2=0;counter2<5;counter2++)
		{
			if(input1==clock[counter][counter2]){
				temp = 1;
				result1 = check(counter,counter2,temp);
			}
			if(input2==clock[counter][counter2]){
				temp = 2;
				result2 = check(counter,counter2,temp);
			}
		}
	}
	printf("%02d:%02d",result1,result2);
}
