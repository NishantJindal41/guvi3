#include <stdio.h>
#include<math.h>
int main()
{   
    int t,r,s=0,i1,i2,i;
    scanf("%d %d",&i1,&i2);
    for(i=i1;i<=i2;i++)
    {
    t=i;
    s=0;
    while(t>0)
    {
        r=t%10;
        s+=pow(r,3);
        t=t/10;
    }
    if(i==s)
    printf("%d\n",i);
    }
    return 0;
}
