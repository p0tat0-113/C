#include <stdio.h>

int squareByValue(int value){
    value = value*value;
    return value;
}

void squareByReference(int * value){
    *value = *value * *value;
}

void swap3(int * ptr1, int* ptr2, int * ptr3){
    int temp = *ptr3;

    *ptr3 = *ptr2;
    *ptr2 = *ptr1;
    *ptr1 = temp;
}

int main(void){
    //문제풀이

    int num = 2;

    num = squareByValue(num);
    printf("%d\n",num);
    
    squareByReference(&num);
    printf("%d\n",num);


    int num1 = 1,num2 = 2,num3 = 3;
    swap3(&num1,&num2,&num3);
    printf("%d %d %d\n",num1,num2,num3);

    return 0;
}