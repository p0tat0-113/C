#include <stdio.h>

int main(void){
    //문자열 단위 입출력 함수

    //출력: int puts(const char * s), int fputs(const char * s,FILE * stream)
    //fputs는 두번째 인자를 통해서 출력스트림을 지정할 수 있다.
    //puts는 자동개행이 되지만, fputs는 자동개행이 되지 않는다.

    puts("Hello World");
    fputs("Hello World",stdout);//자동개행이 되지 않음.
    printf(" ==END==\n");

    //입력: char * gets(char * s), fgets(char * s, int n, FILE * stream)
    //배열의 길이를 벗어난 크기의 문자열을 입력받으면 오류가 나기 때문에 문자열을 입력받을 때는 아래와 같이 하는 것이 좋다.
    //fgets(str,sizeof(str),stdin);
    //scanf()는 띄어쓰기를 기준으로 입력값을 구분하기 때문에 문자열을 입력받기 곤란하지만, 얘네를 쓰면 문자열을 잘 입력받을 수 있다.

    char str1[10];
    fgets(str1,sizeof(str1),stdin);
    puts(str1);

    //입력받은 문자열의 끝에는 자동으로 \0 null문자가 붙는다.
    char str2[7];
    
    for (int i = 0; i < 3; i++)
    {
        fgets(str2,sizeof(str2),stdin);//123415716915717561704701입력
        puts(str2);
    }
    //배열에 다 담기지 못할 만큼 큰 문자열을 입력해서, 딱 한 번 입력했지만, fgets함수는 3번 호출되었다.
    //배열의 길이는 7인데, 문자는 6개까지만 입력됨. 맨 끝에 자동으로 \0 null문자가 붙기 때문이다.

    //fgets()함수는 "\n을 만날 때까지 문자열을 읽어들인다." 이때 \n을 버리지 않고, 문자열의 일부로 받아들인다.
    //그래서 아래 코드에서 개행이 2번씩 되는 모습을 볼 수 있다.
    fgets(str1,sizeof(str1),stdin);
    puts(str1);
    fgets(str1,sizeof(str1),stdin);
    puts(str1);
    

    return 0;
}