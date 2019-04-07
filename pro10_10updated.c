#include <stdio.h>
#include<conio.h>
int w = 0;
#define M 100
#define gotosleep sleep(10)
int main(void)
{
    int num = 0;
    while(1) {
        gotosleep;
        if(w)
            num++;
        else
            num = 0;

        if(num == M) {
            
            printf("Done\n");
            num = 0;
            break;
        }
    }

    return 0;
}
