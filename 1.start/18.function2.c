#include <stdio.h>

int max(int,int,int);
int min(int,int,int);
int fibonacci(int);

int main(void) {

    printf("%d\n",max(1,3,5));
    printf("%d\n",min(1,3,5));

    fibonacci(100);

    return 0;
}

int max(int num1, int num2, int num3){
    int max = num1;
    if (num2 > max){
        max = num2;
    }
    if(num3 > max){
        max = num3;
    }
    return max;
}

int min(int num1, int num2, int num3){
    int min = num1;
    if (num2 < min){
        min = num2;
    }
    if(num3 < min){
        min = num3;
    }
    return min;
}

int fibonacci(int num){
    int a = 0;
    int b = 1;

    for (int i = 0; i < num; i++){
        int temp = b;
        printf("%d, ",a);
        b = a+b;
        a = temp;
    }
    
}