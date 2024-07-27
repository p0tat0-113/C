#include <stdio.h>

void clearInputStream(){
    while (getchar() != '\n'){};//개행문자까지 읽을 때까지(소멸시킬 때까지)계속 읽어들인다.
}

int main(void){
    //버퍼, 버퍼는 스트림과 더불어 입출력을 이해하는데 매우 중요한 요소다. C언어 뿐만 아니라 다른 언어들에도 적용이 됨. java에서 BufferReader/Writer를 쓸 때 버퍼에 대해서 잘 몰라서 약간 애를 먹었었음.
    //표준입출력함수(printf,scanf,putchar,fgets등등)를 이용해서 입출력하는 경우 데이터들은 운영체제가 제공하는 "메모리 버퍼"를 중간에 통과해야 한다.
    //fgets()가 문자열을 읽어들이는 문자열은, 버퍼에 저장된 문자열이다. 데이터가 버퍼에 저장되는 시점은 엔터키가 눌렸을 때이다. 

    //입출력은 CPU의 데이터 처리속도에 비해 느리기 때문에, 버퍼에 모아두었다가, 한번에 처리하는 것이 효율적이다.

    //int fflush(FILE * stream)함수는 출력버퍼를 비운다. 버퍼에 저장된 내용이 비워지면서 데이터가 목적지로 이동한다.(스트림에 따라 모니터나 파일)
    printf("Hello World\n");//즉시 출력되지 않고 출력버퍼에 저장된다.
    fflush(stdout);//버퍼를 강제로 비워서 출력함. 윈도우 리눅스 같은 범용 OS를 쓰고 있다면 이 함수를 쓸 일은 사실상 많지 않다고 함.

    //입력 버퍼는 어떻게 비울까? fflush(stdin)을 쓰면 되나?
    //우선 입력버퍼를 비우는 것은 출력버퍼를 비우는 것과 좀 다르다. 입력버퍼를 비우면 그냥 데이터가 그냥 소멸된다.
    //fflush(stdin)은 일부 컴파일러에서 지원할 뿐 ANSI표준이 아니기 때문에 권장하지 않고, getchar()반복문을 쓰는 것이 좋다고 한다.
    char str[10];
    fgets(str,sizeof(str),stdin);//아주 긴 문자 입력
    puts(str);
    clearInputStream();//이 함수로 입력버퍼를 지우지 않았다면 뒤에 호출한 fgets()는 입력버퍼에 남아있는 문자열들을 읽었을 것이다. 사용자가 입력할 기회도 얻지 못함. 
    fgets(str,sizeof(str),stdin);
    puts(str);


    //예제
    char str1[7];
    char str2[20];
    printf("주민등록번호 6자리를 입력하세요: ");
    fflush(stdout);

    fgets(str1,sizeof(str1),stdin);
    clearInputStream();

    fputs("이름을 입력하세요: ",stdout);
    fgets(str2,sizeof(str2),stdin);

    printf("%s %s\n",str1,str2);

    return 0;
}