    
#include<stdio.h>
#include<conio.h>
int main()
{
bool find3Numbers(int Arr[], int arr_size, int sum)
{
    int l, r;
 
    
    for (int i = 0; i < arr_size-2; i++)
    {
       
       for (int j = i+1; j < arr_size-1; j++)
       {
         
           for (int k = j+1; k < arr_size; k++)
           {
               if (Arr[i] + Arr[j] + Arr[k] == sum)
               {
                 printf("Triplet is %d, %d, %d", Arr[i], Arr[j], Arr[k]);
                 return true;
               }
           }
       }
    }
 
  
    return false;
}
 

int main()
{
    int Arr[] = {1, 4, 45, 6, 10, 8};
    int sum = 22;
    int minimum=min(int array[10]);
 
    find3Numbers(A, arr_size, sum);
 
    return 0;
}
