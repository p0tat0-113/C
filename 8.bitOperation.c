#include <stdio.h>

int main(void) {
    int num1 = 15;  //00001111
    int num2 = 20;  //00010100
    printf("%d\n",num1&num2); //AND 00000100 = 4

    printf("%d\n",num1|num2); //OR 00011111 = 31

    printf("%d\n",num1^num2); //XOR 00011011 = 27

    printf("%d\n",~num1); //NOT 11110000 이걸 양의 정수로 바꿔보면 00010000 = 16 즉 -16

    //곱하기 나누기 연산을 이런 쉬프트 연산으로 대체할 수 있음, 성능 향상 가능.
    printf("%d\n",num1<<1); //왼쪽으로 1비트 이동. 왼쪽으로 1비트 이동할 때마다 두배로 증가

    printf("%d\n",30>>1); //오른쪽으로 1비트 이동. 오른쪽으로 1비트 이동할 때마다 나누기 2
    printf("%d\n",-30>>1);//CPU에 따라서 음의 부호비트를 유지하기 위해 1을 채우기도 하고, 그냥 무시하고 0을 채우기도 한다고 한다.

    printf("%d\n",toMinus(5));
    printf("%d\n",toMinus(3));
    printf("%d\n",toMinus(167));

    //3*8/4
    printf("%d",3<<3>>2);

    return 0;
}

//양수를 음수로 변환
int toMinus(int num){
    num = ~num+1;
    return num;
}