#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    int num3;
    printf("10진수 8진수 16진수 입력: ");
    scanf("%d %o %x",&num1,&num2,&num3); //12 12 12
    printf("%d %d %d\n",num1,num2,num3); //12 10 18

    //실수 형태의 입력 형태 정의
    //float: %f, double: %lf, long double: %Lf
    //printf()로 출력할 때의 서식문자와 좀 헷갈린다. printf()와 scanf()의 서식문자는 별도로 이해하고 있어야 한다.

    //추가로 서식문자 %s는 문자열의 입력에 사용된다.

    return 0;
}