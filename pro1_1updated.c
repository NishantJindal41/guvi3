    
#include <stdio.h>
#include<string.h>
int main(void) 
{
	int aa,bb,max=0,j;
	char a[100],b[100];
	printf("\nEnter the first string:  ");
	scanf("%s",a);
	printf("\nEnter the second string:  ");
	scanf("%s",b);
	aa=strlen(a);
	bb=strlen(b);
	if(aa>bb)
	{
		max=aa;
	}
	else
	{
		max=bb;
	}
	for(j=0;j<max;j++)
	{
		if(a[j]==b[j])
		{
			printf("%c",a[j]);
		}
		else
		{
			break;
		}
	}
	return 0;
}
