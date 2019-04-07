#include <stdio.h>
int main()
{
int a,b,c,d,e;
scanf("%d", &aa);
b=aa;
while (aa!=0)
{
c=aa%10;
d=pow(c,3);
e=e+d;
aa=aa/10;
}
if (e==b)
{printf ("yes");}
else
{printf ("not");}
return 0;
}
}
