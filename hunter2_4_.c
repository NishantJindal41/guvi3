#include<stdio.h>
int findPower(long long int);
int rotate(long long int);
int main()
{
    int num=123,rotatenum;
    rotatenum=rotate(num);
    printf("%d",rotatenum);
}
 int rotate(long long int num)
{
    int digit,rotatenum,power,i;
    for(i=0;i<power;i++){
    digit=num%10;
    power=findPower(num);
    num=num/10;
    rotatenum=digit*power+num;
    return rotatenum;}
} int findPower(long long int num)
{
    int power=1;
    while(num!=0)
    {
    num=num/10;
    power=power*10;
    }
    return power/10;
}
