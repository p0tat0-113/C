#include <stdio.h>

//500,700,400원 짜리를 최소 한개씩 사서 3500원을 맞춰야 함.

void func1(void){
    for (int i = 1; i*500 < 3500; i++){
        for (int j = 1; j*700 < 3500; j++){
            for (int k = 1; k*400 < 3500; k++){
                if (i*500+j*700+k*400 == 3500){
                    printf("%d %d %d\n",i,j,k);
                }     
            }
        }
    } 
}

//시간복잡도를 O(n^2)로 줄임.
void func2(void) {
    for (int i = 1; i*500 < 3500; i++){
        for (int j = 1; j*700 < 3500; j++){
            int sum = i*500+j*700;
            if (sum >= 3500){
                break;
            }
            int k = (3500-sum)/400;
            if ((3500-sum)%400 == 0){
                printf("%d %d %d\n",i,j,k);
            }
        }
    } 
}

int main(void){
    func1();
    func2();
    return 0;
}

