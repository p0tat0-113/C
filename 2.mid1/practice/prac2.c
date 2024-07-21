#include <stdio.h>

void decimalToBinary(int decimal){
    int temp = decimal;
    int binaryLen = 0;//2진수가 총 몇자리가 될지를 계산함. 이 길이로 binary배열을 선언함.
    while (temp > 0)
    {
        temp = temp/2;
        binaryLen++;
    }

    int binary[binaryLen];

    for (int i = binaryLen-1; i >= 0; i--)//배열의 맨 끝부터 숫자를 2로 나눈 나머지를 대입, 그리고 숫자를 2로 나눔.
    {
        binary[i] = decimal%2;
        decimal = decimal/2;
    }
    
    for (int i = 0; i < binaryLen; i++)
    {
        printf("%d",binary[i]);
    }
}

int main(void) {
    //10진수 정수를 입력받은 다음에 2진수 정수로 출력하는 프로그램.

    decimalToBinary(1345);
    
    return 0;
}