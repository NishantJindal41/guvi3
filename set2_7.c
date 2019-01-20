#include <stdio.h>
#include<math.h>
int main()
{   
    int n,t,r,s=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        s+=pow(r,3);
        n=n/10;
    }
    if(t==s)
    printf("yes");
    else 
    printf("no");
    return 0;
}
