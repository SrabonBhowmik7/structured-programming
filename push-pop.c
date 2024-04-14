#include<stdio.h>
int stack[20];
int top = -1;

void push(int stack[])
{
        return stack[++top];
}

int pop()
{
        return stack[top--];
}
int main()
{
    int n, x[10], i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
    push(x);
    pop();
    printf("push %d\npop %d\n", x, pop());
}
