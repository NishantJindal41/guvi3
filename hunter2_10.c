#include<stdio.h>
int main()
{
int i, p,upper,lower,n,count=0;
scanf("\n %d \n %d", &lower,&upper);
for(n=lower;n<=upper;n++)
{
p=1;
for(i=2;i<n/2;i++)
if(n%i==0)
{
p=0;
break;
}
if(p)
count=count+1;
}
printf("\n %d",count-1);
return 0;
}
