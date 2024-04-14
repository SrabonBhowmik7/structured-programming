///sample input 1 2 3 4 5 6
#include<stdio.h>
void push(int stack[], int top, int maxstk)   ///Push function
{
    top=0;
    int item;
    printf("Push values:\n");
    while(top<maxstk)
    {
        scanf("%d", &item);

        stack[top]=item;
        top++;
    }



    int i;
     for(i=0; i<top; i++)
    {
        printf("%d\n",stack[i]);
    }
     if(top==maxstk)
    {
        printf("\nOverflow\n\n");
    }

    return;
}
/*
void printall(int stack[],int top)
{
    int i=0;
    for(i=0; i<top; i++)
    {
        printf("%d\n",stack[i]);
    }
    return ;
}
*/
void pop(int stack[], int top) ///Pop function
{
    printf("POP:\n");
    while(top>-1)
    {
        printf("popped = %d\n", stack[top]);
        top--;
    }
    if(top==-1)
    {
        printf("\nUnderflow\n");
    }
}
int main()
{
    int stack[15], top, maxstk=6;

    push(stack, top, maxstk);

    top=maxstk-1;

    pop(stack, top);


    return 0;
}

