#include<stdio.h>

int main()
{
	int input,count=0,counter;
	scanf("%d",&input);

	for(counter=5;input/counter>=1;counter*=5)
		count += input/counter;

	printf("%d",count);
}
