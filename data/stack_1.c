#ifndef ___IntStack //int형 스택 intStack(해더)
#define ___IntStack

typedef struct{                         //스택 구현 구조체
    int max;                            //스택 용량
    int ptr;                            //스택 포인터
    int *stk;                           //스택 첫 요소 포인터
} IntStack;

int Initialize(IntStack *s,int max);    //스택 초기화

int Push(IntStack *s, int x);           //스택에 데이터 푸쉬

int Pop(IntStack *s, int *x);           //스택에서 데이터 팝

int Peek(const IntStack*s, int *x);     //스택에서 데이터 피크

void Clear(IntStack *s);                //스택 비우기

int Capacity(const IntStack *s);        //스택 최대용량

int Size(const IntStack *s);            //스택 데이터 갯수

int IsEmpty(const IntStack *s);         //스택 비어있는지 질문

int IsFull(const IntStack *s);          //스택 꽉 찼는지 질문

int Search(const IntStack *s, int x);   //스택에서 검색

void Print(const IntStack *s);          //모든 데이터 출력

void terminate(IntStack *s);            //스택 종료
#endif