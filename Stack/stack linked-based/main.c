#include <stdio.h>
#include <stdlib.h>

typedef struct stacknode{
int entry;
struct stacknode *next;
}StackNode;

typedef struct stack{
StackNode *top
}Stack;

void createstack (Stack *ps){
ps->top = NULL  ;
}

int push(int e , Stack *ps){
StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
pn->entry=e ;
pn->next=ps->top;
ps->top=pn;
printf("%d",e);
}

int pop( Stack *ps){
Stack s;
if(stackempty(&s))
    return 0;
StackNode *pn;
StackNode *pe;
pe=ps->top->entry;
pn=ps->top ;
ps->top=ps->top->next;
return pe;
free(pn);
}

int stackempty(Stack *ps){
return ps->top = NULL ;
}

void clearstack(Stack *ps){
StackNode *pn=ps->top;
StackNode *qn=ps->top;
while(pn)
{
    pn=pn->next;
    free(qn);
    qn=pn;
}
 ps->top=NULL;
}

void traversestack(Stack *ps,void(*pf)(int)){
StackNode *pn=ps->top ;
while(pn){
    (*pf)(pn->entry);
    pn=pn->next;
}
}

int stacksize(Stack *ps){
int x;
StackNode *pn=ps->top;
for(x=0;pn;pn=pn->next)
    x++;
return x;
}

int main()
{
    Stack s;
    createstack(&s);
    int e=10;
    push(e,&s);
    push(20,&s);
    printf("%d",pop(&s));

    return 0;
}
