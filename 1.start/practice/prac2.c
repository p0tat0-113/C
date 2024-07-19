#include <stdio.h>

void func(int,int);

int main(void) {
    func(3,5);
    func(5,3);

    return 0;
}

void func(int num1,int num2){
    if (num1 > num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%d * %d = %d\n",i,j,i*j);
        }
    }
}