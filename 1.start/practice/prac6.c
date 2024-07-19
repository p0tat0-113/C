#include <stdio.h>

int main(void) {

    int input = 3615;

    int hours = input/60/60;
    int minutes = input/60%60;
    int seconds = input%60;

    printf("%d %d %d",hours,minutes,seconds);
    
    return 0;
}