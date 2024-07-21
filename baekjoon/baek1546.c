#include <stdio.h>
#include <string.h>

int n;

int getMax(double arr[]){
    double max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }     
    }
    return max;
}

void operation(double arr[], int maxNum){
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i]/maxNum*100;
    }
}

void getAverage(double arr[]){
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    printf("%lf\n",sum/n);
}

int main(void){
    scanf("%d",&n);

    double arr[n];//한 줄에 여러값을 입력 받을 때는 이렇게 하면 됨. scanf는 공백을 기준으로 입력값을 구분한다.
    for (int i = 0; i < n; i++)
    {
        scanf("%lf",&arr[i]);
    }

    double maxNum = getMax(arr);
    operation(arr,maxNum);
    getAverage(arr);

    return 0;
}