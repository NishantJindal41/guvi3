#include <stdio.h>
#include<math.h>
int main()
{   
    int n,i,f=0;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    printf("no");
    else
    printf("yes");
    return 0;
}
