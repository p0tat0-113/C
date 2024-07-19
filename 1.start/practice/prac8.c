#include <stdio.h>

int recursion(int num){
    if (num == 1)
    {
        return 2;
    }
    return 2*recursion(num-1);
}

int main(void){
    printf("%d",recursion(8));
    return 0;
}

