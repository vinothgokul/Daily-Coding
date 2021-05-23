#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int
main ()
{
  char inputString1[100], inputString2[100];
  scanf ("%s\n%s", inputString1, inputString2);

  int len = strlen (inputString1);

  int mid1 = strlen (inputString1) / 2, start = -1, end = 0;
  int mid2 = strlen (inputString2) / 2;

  for (int counter = 0; counter < len; counter++)
    {
      if (counter==0&&(inputString1[mid1] == inputString2[mid2]))
	{
	  start = mid1;
	  end = mid1 + 1;
	}
      else if (((inputString1[mid1 - counter] == inputString2[mid2 - counter])
	       && (inputString1[mid1 + counter] ==
		   inputString2[mid2 + counter]))&&start!=0)
	{
	  start = mid1 - counter;
	  end = mid1 + counter + 1;
	}
      else
	break;
    }
    
  if(start!=-1)
      for(int counter=start;counter<end;counter++)
          printf("%c",inputString1[counter]);
  else
      printf("-1");
}
