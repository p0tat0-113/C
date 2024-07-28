#include <stdio.h>

int main(void){
    struct point//point가 타입 이름.
    {
        int xpos; //멤버변수
        int ypos;
    };

    struct human
    {
        char name[20];
        char phoneNumber[20];
        int age;
    };

    //구조체 배열, 구조체 변수를 배열에 담아보자. 일반적인 변수를 배열에 담는 것과 똑같다.
    struct point pointArr[2];//구조체 배열 선언.

    for (size_t i = 0; i < 2; i++)
    {
        pointArr[i].xpos = 10+i;
        pointArr[i].ypos = 20+i;
    }

    for (size_t i = 0; i < 2; i++)
    {
        printf("%d %d\n",pointArr[i].xpos,pointArr[i].ypos);
    }
    
    //구조체 배열의 초기화, 다른 배열들과 마찬가지로, 선언과 동시에 초기화할 수 있다.
    struct human humanArr[2] = {{"dongwoo", "4635", 23},{"woodong", "4635", 23}};

    for (size_t i = 0; i < 2; i++)
    {
        printf("%s %s %d\n",humanArr[i].name,humanArr[i].phoneNumber,humanArr[i].age);
    }
    

    //구조체 변수를 참조하는 구조체 포인터 변수도, 다른 일반적인 포인터 변수를 쓰는 것과 별반 다르지 않다.
    struct point pos1 = {10,20};
    struct point * ptr1 = &pos1;//일반적인 변수를 담는 포인터와 똑같음. 참고로 구조체 변수도 일반적인 변수와 비슷하다고 생각하면 된다. 구조체변수의 참조값은 첫번째 멤버변수의 침조값과 동일함.
    printf("(*ptr1).xpos = %d\n", (*ptr1).xpos);//접근 방법도 똑같음. 

    //위 문장은 아래와 같이 쓸 수도 있음.
    printf("ptr1 -> xpos = %d\n", ptr1 -> xpos);//더 간편하고, 많이 프로그래머들이 이렇게 쓰니까 익숙해지는 것이 좋다고 한다. ptr이 가리키는 구조체 변수의 xpos를 호출한다는 뜻.

    ptr1 -> xpos += 10;
    ptr1 -> ypos += 10;
    printf("%d %d\n",ptr1->xpos, ptr1->ypos);

    
    //포인터 변수를 구조체의 멤버로 선언하기!, 멤버 변수인 포인터변수가, 다른 구조체 변수를 참조하게 할 수 있다! 드디어 C언어로 노드와 연결구조를 구현할 수 있음!!!!
    //TYPE형 구조체의 멤버로 TYPE형 포인터 변수를 둘 수 있다.
    struct node{
        int xpos;
        int ypos;
        struct node * ptr;
    };

    struct node node1;
    struct node node2;
    struct node node3;
    struct node nodeArr[3] = {node1, node2, node3};

    for (size_t i = 0; i < 3; i++)
    {
        nodeArr[i].xpos = i;
        nodeArr[i].ypos = i;
        nodeArr[i].ptr = &nodeArr[(i+1)%3];//세 개의 노드가 서로를 참조하게 됨.
    }

    for (size_t i = 0; i < 3; i++)
    {
        int ref = (i+1)%3+1;
        printf("node%d [%d, %d]가 node%d[%d, %d]을/를 참조함.\n", i+1, nodeArr[i].xpos, nodeArr[i].ypos, ref, nodeArr[i].ptr ->xpos, nodeArr[i].ptr ->ypos);
    }
    
    
    //구조체변수의 이름의 참조값은, 구조체 변수의 첫번째 멤버의 주소값과 동일하다.
    printf("%p %p\n",&pos1,&pos1.xpos);

    return 0;
}