/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
#include<math.h>
int checkPrime(int number)
{
	int isPrime = 1;
	for(int counter=2;counter<=sqrt(number);counter++)
	{
		if(number%counter==0)
		{
			isPrime=0;
			break;
		}
	}
	return isPrime;
}
int main(int argc, char *a[])
{
	int noOfTestcases,counter;
	scanf("%d",&noOfTestcases);
	int testCases[noOfTestcases][2];

	for(counter=0;counter<noOfTestcases;counter++)
	{
		scanf("%d %d",&testCases[counter][0],&testCases[counter][1]);
	}

	for(counter=0;counter<noOfTestcases;counter++)
	{
		int left = testCases[counter][0];
		int right = testCases[counter][1];
		while(checkPrime(left)==0 && left<=testCases[counter][1])
		{
			left++;
		}
		while(checkPrime(right)==0 && right>=testCases[counter][0])
		{
			right--;
		}
		if(left==right)
		{
			printf("0\n");
		}
		else if(left>testCases[counter][1] && right<testCases[counter][0])
		{
			printf("-1\n");
		}
		else
		{
			printf("%d\n",right-left);
		}
	}
}
