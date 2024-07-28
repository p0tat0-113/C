#include <stdio.h>
#include <string.h>

int main(void){
    //숫자가 섞인 적당한 길이의 문자열을 입력받고, 문자열에 있는 각각의 숫자들만 모아서 더한 값을 반환하라.

    char str[50];
    fgets(str,sizeof(str),stdin);

    int sum = 0;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str [i] <= '9')
        {

            sum += (str[i]-48);
        }
    }
    printf("%d\n",sum);

    return 0;
}