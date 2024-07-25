#include <stdio.h>

int main(int argc, char * argv[]){
    printf("입력받은 문자열의 수: %d\n",argc);

    for (int i = 0; i < argc; i++)
    {
        printf("%s\n",argv[i]);
    }
    
    return 0;
}