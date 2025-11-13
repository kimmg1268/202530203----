/*선형리스트
리스트 : 데이터를 순서대로 나열한 자료구조
    
    -선형리스트(연결리스트) : ㄱ>ㄴ>ㄷ>...>ㅌ>ㅍ>ㅎ

    -노드
        -리스트의 각 요소
        -데이터와 포인터(노드를가리키는) 보유
        -처음과 끝의 노드 : 헤드노트, 꼬리노트
        -노드 변경 방법
            -삽입 요소가 있다면 삽입요소 다음의 모든 요소를 하나씩 뒤로 밀어야함,삭제의 경우 그 반대 = 배열로 구현한 선형리스트의 단점 -> 쌓이는 데이터의 크기 미리 알아야함, 효율 bad

포인터로 만든 연결리스트(헤더) */

#ifndef ___LinkedList
#define ___LinkedList

#include "Member.h"

//노드//
typedef struct __node{
    Member      data; //데이터
    struct __node *next; //뒤쪽 포인터
} Node;

//연결리스트
typedef struct{
    Node *head //머리 노드 포인터
    Node *crnt; //선택한 노드에 대한 포인터
} List;

//연결 리스트 초기화
void Initialize(List *list);

//함수 compare로 x와 같은 노드 검색
Node *Search(List *list, const Member *x,
                        int compare(const Member *x, const Member *y));
//머리에 노드 삽입
void InserFront(List *list, const Member *x);

//꼬리에 노드 삽입
void InsertRear(List *list, cons Member *x);

//머리 노드 삭제
void Removefront(List *list);

//꼬리 노드 삭제
void Removerear(List *list);

//선택한 노드 삭제
void Removecurrent(List *list);

//모든 노드 삭제
void Clear(List *list);

//선택한 노드의 데이터 출력
void PrintCurent(const List *list);

//모든 노드의 데이터 출력9줄바꿈 문자 포함)
void PrintCurrent(const List *list);

//모든 노드의 데이터를 리스트 순서대로 출력
void Print(const List *list);

//연결 리스트 종료
void Terminate(List *list);

#endif