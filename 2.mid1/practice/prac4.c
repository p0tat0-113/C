#include <stdio.h>
#include <string.h>

int main(void) {
    //문자열을 입력받아서, 앞으로 읽으나 뒤로 읽으나 똑같은 회문인지 판단해야 한다. string.h의 strlen()을 사용하자.

    char str[100];//길이를 미리 지정할 수 밖에 없음.
    
    printf("단어 입력: ");
    scanf("%s",str);
    
    int strLen = strlen(str);
    int mid = strLen / 2;

    for (int i = 0; i < mid; i++)
    {
        if (str[i] != str[strLen-1-i])
        {
            printf("회문이 아닙니다.");
            return 0;
        }
        
    }
    printf("회문입니다.");
        
    return 0;
}