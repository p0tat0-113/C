#include <stdio.h>

int main(void) {
    printf("간단한 산술 연산자\n");
    printf("%d\n",5+5);
    printf("%d\n",10%3);

    printf("복합 대입 연산자\n");
    int a = 10;
    a += 10;
    printf("%d\n",a);

    printf("증가 감소 연산자, 전위 후위에 따라 다름\n");
    printf("%d\n",++a);//21
    printf("%d\n",a++);//21
    printf("%d\n",a);//22
    
    printf("관계 연산자, 0,1을 반환\n");
    printf("%d\n",5==5);
    printf("%d\n",5>3);
    printf("%d\n",5<3);

    printf("논리 연산자\n");
    printf("%d\n",!0);
    printf("%d\n",5==5&&5<3);
    printf("%d\n",5==5|5<3);

    return 0;
}