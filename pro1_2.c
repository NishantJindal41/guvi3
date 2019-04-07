    
#include<stdio.h>
main()
{
    int arr[200],i,j,n,t,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(arr[i]>arr[j])
        {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    for(i=0;i<k-1;i++)
   printf("%d ",arr[i]);
}
