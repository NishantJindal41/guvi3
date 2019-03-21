#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    int array[5][5];
    int count=0;
    int i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(arr[i][j]==1)
            {
                if(array[i][j+1]==0&&array[i+1][j]==0&&array[i+1][j+1]==0)
                {
                    count=count+1;
                }
            }
        }
    }
        printf("%d",count);
return 0;
}
