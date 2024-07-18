#include <stdio.h>

int main(void) {

    //초기식; 조건식; 증감식;
    //조건식은 매 반복에 앞서서 진행
    //증감식은 매 반복 실행 후 마지막에 진행
    for(int i = 0; i < 5; i++){
        printf("Hello World\n");
    }

    for (int i = 1; i < 10; i++){   
        for (int j = 1; j < 10; j++){   
        printf("%d * %d = %d\n",i,j,i*j);
        }   
    }
    
    return 0;
}