#include <stdio.h>

int main()
{   
    int n,sum=0,i,k,a[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<k;i++)
    sum+=a[i];
    printf("%d",sum);

    return 0;
}
