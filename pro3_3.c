#include <stdio.h>
void main()
{
	int c=0,j=1,check=0,i;
	char arr[100];
	scanf("%s",&arr);
	if(strlen(arr)>=8)
	{
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]=='L')
		{
			c--;
			if(c==4||c==-4)
			{
				j++;
				c=0;
				check++;
			}
		}
		else if(arr[i]=='R')
		{
			c++;
			if(c==4||c==-4)
			{
				j++;
				c=0;
				check++;
			}
		}
	}
	}
	if(check>0)
	printf("\nYES");
	else
	printf("\nNO");
}
