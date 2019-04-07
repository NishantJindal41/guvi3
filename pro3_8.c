#include <stdio.h> 
  
int main() 
{ 
    int a,bcc; 
    printf("Enter Value of a "); 
    scanf("%d", &a); 
    printf("\nEnter Value of b "); 
    scanf("%d", &bcc); 
  
    int temp = a; 
    a=bcc; 
    bcc= temp; 
  
    printf("\nAfter Swapping: abb = %d,bcc = %d",a,bcc); 
    return 0; 
}
