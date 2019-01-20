#include <stdio.h>
#include<math.h>
int main()
{   
    int n,i,f=0,i1,i2,j;
    scanf("%d %d",&i1,&i2);
    for(i=i1+1;i<i2;i++)
    {
        f=0;
    for(j=2;j<i/2;j++)
    {
        if(i%j==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    printf("%d ",i);
    }
    return 0;
}
