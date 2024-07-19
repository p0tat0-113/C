#include <stdio.h>

int main(void){
    int n;
    scanf("%d",&n);

    int k = 1;
    int num = 2;
    while (1)
    {
        if (num*2 > n)
        {
            printf("%d",k);
            break;
        }
        num *= 2;
        k++;
    }
    
    return 0;
}