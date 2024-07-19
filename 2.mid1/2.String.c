#include <stdio.h>

int main(void){
    //c언어에서 문자열은 chat형 배열로 다룬다.
    char str1[] = "Hello World";
    printf("%s\n",str1);

    //그런데 문자열의 길이를 뽑아보면 실제보다 한 칸 더 길다.
    printf("%d\n",sizeof(str1));//12

    //이것은 C언의 모든 문자열의 끝에는 \0 널(null) 문자가 자동으로 들어가 있기 때문이다.
    printf("%d\n",str1[11]);//널 문자의 아스키코드는 0이다.

    //문자열의 끝에 무조건 널 문자가 삽입되는 이유는 문자열의 끝을 알기 위함이다. c언어는 추상화되어있지 않고, 기계에 가깝게 작동된다는게 실감되네.
    int index = 0;
    while (str1[index] != '\0')
    {
        printf("%c",str1[index++]);
    }
    printf("\n");

    //c언어에서는 문자열 끝에는 반드시 null문자가 들어가 있어야 한다.
    char arr1[] = {'a'};//얘는 문자열이 아님. 그냥 문자 배열일 뿐.
    char arr2[] = {'a','\0'};//얘는 문자열임.
    

    //scanf로 문자열 입력받기
    char str2[50];
    scanf("%s",str2);//scanf로 배열에 입력을 할 때는 &를 붙이지 않아도 된다. 배열변수 자체가 배열의 참조값을 가리키기 때문

    //hello world입력
    printf("%s",str2);//hello
    //scanf는 띄어쓰기를 기준으로 입력값을 구분하기 때문에 이런 결과가 나옴.
    //scanf는 문자열을 입력받기에 적합하지 않다.
}
