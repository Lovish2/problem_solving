#include <iostream>
using namespace std;
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0

struct Stack 
{
    int item[STACKSIZE];
    int TOP;
};
struct Stack S;
void Initialisze(struct Stack *S){
    S->TOP=-1;
}
int IsEmpty(struct Stack *S)
{
    if (S->TOP == -1)
        return TRUE;
    else
        return FALSE;
}
int POP(struct Stack *S)
{
    if (IsEmpty(S))
    {
        cout << "\nSTACK UNDERFLOW ";
        exit(1);
    }
    int x = S->item[S->TOP];
    S->TOP--;
    return x;
}
void PUSH(int x,struct Stack *S)
{
    if (S->TOP == STACKSIZE - 1)
    {
        cout << "\nSTACK OVERFLOW";
        exit(1);
    }
    S->TOP++;
    S->item[S->TOP] = x;
}
void Initialize(struct Stack *S)
{
    S->TOP = -1;
}

int stackTOP(struct Stack *S)
{
    int x = S->item[S->TOP];
    return x;
}
int Evaluate(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '*':
        return a * b;
    case '-':
        return a - b;
    case '&':
        return a & b;
    default:
        return a / b;
    }
}
int power(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
      int  p = a * i;
    }
}
int main()
{
    int x;
    Initialize(S); 
    
     
    return 0;
}