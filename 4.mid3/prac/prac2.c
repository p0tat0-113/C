#include <stdio.h>
#include <string.h>

int main(void){
    //str1, str2, str3 세개의 char형 배열을 선언하고, str1의 문자열을 str3에 붙여넣고, str2의 문자열을 str3의 뒤에 갖다 붙이자. 이때 \n개행문자를 잘 지워야 한다.

    char str1[20];
    char str2[20];
    char str3[40];

    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    str1[strlen(str1)-1] = 0;//참고) strlen()은 맨 뒤의 null문자를 제외한 길이를 반환한다.
    str2[strlen(str2)-1] = 0;

    strcpy(str3,str1);
    strcat(str3,str2);

    puts(str3);

    return 0;
}