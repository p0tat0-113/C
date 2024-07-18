#include <stdio.h>

int main() {
    int num1;
    printf("num1 입력: ");
    scanf("%d",&num1);//서식 문자로 입력 받을 타입을 지정, &는 변수의 참조값을 반환한다. scanf에 인수로 전달됨.
    printf("%d\n",num1);

    printf("&num1 참조값 출력: ");
    printf("%d\n",&num1);//참조값이 출력되는 것을 볼 수 있음.

    printf("num2, num3, num4 입력: ");
    int num2, num3, num4;
    scanf("%d %d %d",&num2,&num3,&num4);//scanf는 공백을 기준으로 데이터를 구분한다.
    printf("%d %d %d\n",num2,num3,num4);

    float f1;
    printf("실수 입력: ");
    scanf("%f",&f1);
    printf("%f\n",f1);

    return 0;
}