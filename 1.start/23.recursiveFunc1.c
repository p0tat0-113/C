#include <stdio.h>

//재귀함수
//탈출조건을 잘 만드는 것이 중요함.
//재귀적으로 호출하다가 맨 밑바닥에 닿는 순간 리턴되면서 다시 위로 치고 올라옴.

void recursive(int num){
    if (num <= 0){
        return;
    }
    printf("재귀적 호출 %d\n",num);
    recursive(num-1);
}

int factorial(int num){
    if (num == 0){
        return 1;
    }
    return num * factorial(num-1);
}

int main(void) {
    recursive(3);
    
    printf("%d\n",factorial(5));

    return 0;
}

