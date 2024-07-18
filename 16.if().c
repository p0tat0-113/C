#include <stdio.h>

int main(void) {

    //if - else if - else 는 사실 if-else가 중첩된 형태일 뿐이다.
    int num = 40;
    if (num == 10){   
        printf("10\n");
    } else if(num == 20){
        printf("20\n");
    } else if(num == 30){
        printf("30\n");
    } else{
        printf("40\n");
    }

    for (int i = 1; i <= 50; i++)
    {
        if (i%3==0 ||i%4==0 ){
            printf("3또는 4의 배수: %d\n",i);
        }
    }
    
    //삼항연산자. C언어도 삼항연산자가 있네. 많이 써봐서 잘 알잖아.
    //(num > 0) ? num : num*-1
    num = -5;
    printf("%d\n",(num > 0) ? num : num*-1);

    return 0;
}