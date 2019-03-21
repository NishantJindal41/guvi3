#include <stdio.h>
  int main()
{
    int a[20][20],i,j,n,m;
    scanf("%d",&n);
   scanf("%d",&m);
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           scanf("%d",&ar[i][j]);
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if(ar[i][j]==ar[i+1][j])
           {
               printf("%d",ar[i][j]);
           }
       }
   }
}
