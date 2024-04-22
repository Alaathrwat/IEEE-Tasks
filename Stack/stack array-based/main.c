#include <stdio.h>
#include <stdlib.h>
#define maxstack 100

typedef struct stack {
int top ;
int entry[];
}Stack ;

void craetestack(Stack *ps){
ps->top = 0;
}

int stackfull(Stack *ps){
if(ps->top==maxstack)
    return 1;
else
    return 0;
}

int push(int e, Stack *ps){
 if (ps->top==maxstack)
    return 0;
 else{
   ps->entry[ps->top]=e;
   ps->top++;
   printf("%d",e);}
}

int pop( Stack *ps){
int *pe;
if(ps->top==0)
    return 0 ;
else
    return *pe=ps->entry[--ps->top];
}

void stacktop( int *pe , Stack *ps){
*pe = ps->entry[ps->top-1];
printf("%d",&pe);
}

int stacksize(Stack *ps ){
return ps->top;
}
void clearstack(Stack *ps){
ps->top=0;
}

int main()
{
    Stack s ;
    craetestack(&s);
    push(10,&s);
    push(20,&s);
    push(30,&s);
    printf("%d",pop(&s));
    printf("%d",stackfull(&s));
    return 0;
}
