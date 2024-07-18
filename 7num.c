#include <stdio.h>

int main(void) {
    int num1 = 10;
    int num2 = 0xA;//16진수
    int num3 = 012;//8진수
    //초기화에 사용된 진법만 다를 뿐이지, 컴퓨터는 다 똑같이 2진수로 저장한다.

    printf("%d %d %d\n",num1,num2,num3);

    float num4 = 0.0;
    for (int i = 0; i < 100; i++){
        num4 += 0.1;
    }
    printf("%f\n",num4);//예상 값: 10
    //부동 소수점 오차를 줄이기 위해서는 정밀도가 더 높은 실수 타입을 쓰거나, 아예 정수로 계산하고 실수로 바꾸는 것이 좋다.
    
    double num5 = 0.0;
    for (int i = 0; i < 100; i++){
        num5 += 0.1;
    }
    printf("%lf\n",num5);//예상 값: 10

    return 0;
}