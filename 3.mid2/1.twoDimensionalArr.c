#include <stdio.h>

int main(void){
    //2차원 배열

    //배열의 구조는 2차원 적이지만, 각 요소의 메모리 할당은 1차원 배열과 마찬가지로, 1차원 적으로 나란히 이어진다.

    int arr1[2][3] = {{1,2},{3,4,5}}; //앞의 수는 행, 뒤의 수의 열
    //크기에 맞지 않게 비워진 공간은 자동으로 0으로 채워진다.

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    //이렇게 선언할 수도 있음.
    int arr2[][3] = {1,2,3,4,5,6};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    //3차원 배열도 2차원 배열만 이해하고 있다면 별로 어려울 것 없다. 그냥 2차원 배열을 여러겹으로 쌓아놓은 것 뿐이다.

    //간단한 문제 풀이

    int grade [4][4];

    //점수 입력 및 각 학생 총점 및, 전체 학생 총점 구하기
    int allSum = 0;
    for (int i = 0; i < 3; i++)
    {
        int eachSum = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("점수를 입력하세요: ");

            int point;
            scanf("%d",&point);

            eachSum += point;
            grade[i][j] = point;
        }
        printf("\n");

        allSum += eachSum;
        grade[i][3] = eachSum;
    }
    grade[3][3] = allSum;

    //과목별 점수 총합
    for (int i = 0; i < 3; i++)
    {
        int eachSum = 0;
        for (int j = 0; j < 3; j++)
        {
            eachSum += grade[j][i];
        }
        grade[3][i] = eachSum;
    }

    //출력
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",grade[i][j]);
        }
        printf("\n");
    }

    return 0;
}