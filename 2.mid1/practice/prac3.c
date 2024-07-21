#include <stdio.h>



int main(void) {
    //길이가 10인 배열을 선언하고, 숫자 10개를 입력받는다. 홀수이면 앞에서부터, 짝수면 뒤에서부터 채운다.

    int arr[10];
    int frontCount = 0;
    int backCount = 9;
    for (int i = 0; i < 10; i++)
    {
        printf("입력: ");
        int num;
        scanf("%d",&num);

        if (num % 2 == 0)
        {
            arr[backCount--] = num;
        } else {
            arr[frontCount++] = num;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}