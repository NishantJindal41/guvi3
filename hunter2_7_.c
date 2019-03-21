#include<stdio.h> 
void main(void) 
{ 
int j,a[100],i,n,f; 
scanf("%d",&n); 
for(i=0;i<n;i++) 
{ 
f=0; 
for(j=0;j<n;j++) 
{ 
if(a[i]== a[j]) 
{ 
f++; 
} 
else 
continue; 
} 
if(f==1) 
printf("%d",a[i]); 
} 
} 
