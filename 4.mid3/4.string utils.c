#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    //입출력 외에 문자열 관련 함수

    //문자열의 길이를 반환해주는 size_t strlen(char * str), 맨 뒤의 null문자를 제외한 길이를 반환함.
    char str[50];
    fgets(str,sizeof(str),stdin);
    str[strlen(str)-1] = 0;//맨 뒤의 개행문자를 null문자로 바꿔버림.

    printf("%s %d\n",str,strlen(str));    


    //문자열 복사: char * strcpy(char * dest, char * src), char * strncpy(char * dest, char * src, size_t n) 복사된 문자열을 반환함.
    //오른쪽의 문자열이 복사돼서 왼쪽 문자열에 붙여넣기 됨.
    //strncpy()는 세번째 매개변수의 크기만큼 문자열을 복사함.

    //근데 strncpy()를 사용할 때 주의할 점이 있음.
    char str1[] = "131646165017514";
    char str2[5];

    strncpy(str2,str1,sizeof(str2));//str1에서 5개의 문자만 str2에 복사함.

    puts(str1);
    puts(str2);//이상한 값이 출력됨.
    //strncpy()를 쓰면 딱 그만큼 문자를 복사해서 붙여넣음. 그런데 맨 뒤에 null문자가 자동으로 들어가지 않음. 
    //5개만 복사하라고 하면 딱 5개만 복사를 한다. 그래서 출력할 때 문자열의 끝이 어디인지를 알 수가 없어서 이상한 값이 출력되게 됨.

    //그래서 이런 경우에는 null문자가 들어갈 공간이 남게, 배열 크기보다 하나 적게 복사하고, 맨 뒤에 수동으로 null문자를 넣어줘야 한다.
    strncpy(str2,str1,sizeof(str2)-1);
    str2[sizeof(str2)-1] = 0;
    puts(str2);


    //문자열 합치기: char * strcat(char * dest, char * src), char * strncat(char * dest, char * src, size_t n)
    //왼쪽 문자열 뒤에 오른쪽 문자열을 붙임.
    //왼쪽 문자열의 null문자가 있는 인덱스부터 오른쪽 문자열을 붙인다. 
    //strncat의 경우 오른쪽 문자열을 앞에서부터 n개만 붙인다. 이때 맨 뒤에 자동으로 null문자를 붙여줌.
    char str3[40] = "Hello World!";
    char str4[20] = " Hello JAVA!";
    char str5[20] = " Hello C!";

    strcat(str3,str4);
    puts(str3);

    strncat(str3,str5,6);
    puts(str3);


    //문자열 비교: int strcmp(char * s1, char * s2), int strcmp(char * s1, char * s2, size_t n);
    //참조값으로 동일성을 비교하는 것이 아니라, 동등성을 비교하는 함수임.
    //사전등록순으로 비교해서 같으면 0, s1이 더 크면 0보다 큰 값, s2가 더 크면 0보다 작은 값을 반환한다.
    char str6[] = "ABCD";
    char str7[] = "ABCD";
    char str8[] = "ABCDE";
    char str9[] = "ABC";

    printf("strcmp(str6,str7): %d\n",strcmp(str6,str7));
    printf("strcmp(str6,str8): %d\n",strcmp(str6,str8));
    printf("strcmp(str6,str9): %d\n",strcmp(str6,str9));

    printf("strncmp(str6,str9,3): %d\n",strncmp(str6,str9,3));


    //그 외의 변환함수. 문자열로 저장된 숫자를 숫자로 변환해줌. 예전에 아두이노 할 때 썼던 기억이 나네ㅋㅋ
    //<stdlib.h>가 제공함.
    //int atoi(const char * str)
    //long atol(const char * str)
    //double atof(const char * str)
    char str10[] = "15";
    char str11[] = "3.14";
    int integerNum = atoi(str10);
    double doubleNum = atof(str11);
    printf("%d %f\n",integerNum,doubleNum);

    return 0;
}