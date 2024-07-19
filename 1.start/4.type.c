#include <stdio.h>

int main(void) {

    //char형은 문자의 아스키코드 값을 담기 위해 만들어졌다. %c로 출력하면 문자, %d로 출력하면 숫자가 나온다.
    char w1 = 'A';
    printf("%c, %d\n", w1, w1);

    char w2 = 65;
    printf("%c, %d\n",w2,w2);

    short s1 = 32767;
    printf("%hd\n",s1);
    s1 = 32768;
    printf("%hd\n",s1);//오버플로우 발생 확인

    unsigned int num = 4294967295;
    printf("%u\n",num);

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(double));

    //int형의 계산 속도가 빨라서, int형으로 형변환돼서 계산됨. C언어의 정수 승격 원칙
    char c3 = 100;
    char c4 = 100;
    printf("%d\n",sizeof(c4+c3));


    return 0;
}