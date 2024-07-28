#include <stdio.h>
#include <string.h>

int main(void){
    //"홍길동 15" 이런 형식으로 두 사람의 이름과 나이를 입력받고 이름과 나이가 각각 같은지 비교하는 간단한 프로그램.

    char name1[40];
    char name2[40];
    char age1[10];
    char age2[10];
    
    scanf("%s %s",name1,age1);
    scanf("%s %s",name2,age2);

    if (strcmp(name1,name2) == 0)
    {
        puts("이름이 같습니다.");
    } else {
        puts("이름이 다릅니다.");
    }
    
    if (strcmp(age1,age2) == 0)
    {
        puts("나이가 같습니다.");
    } else {
        puts("나이가 다릅니다.");
    }

    return 0;
}