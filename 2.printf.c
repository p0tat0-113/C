#include <stdio.h>

int main(void){

    //printf()는 문자열을 출력한다.

    //prinf(10); //이렇게 숫자를 바로 출력하려고 하면 컴파일 에러가 발생함.
    //이럴때는 %d 같은 서식문자를 사용해야 한다.

    printf("%d %d %f \n",10,10,10.0);
    printf("동우는 %d살이다.\n",23);

    for (int i = 1; i < 10; i++){
        for (int j = 1; j < 10; j++){
            printf("%d * %d = %d\n",i,j,i*j);
        }
        
    }
    
    return 0;
}