#define SIZE 50            /* Size of Stack */
#include <ctype.h>
#include<stdio.h>
char stack[SIZE];
int top = -1; /* Global declarations */

push(char elem)   /* Function for PUSH operation */
{
    stack[++top] = elem;
}

char pop()   /* Function for POP operation */
{
    return (stack[top--]);
}

int priority(char elem)   /* Function for precedence */
{
    switch (elem)
    {
    case '0':
        return 0;
    case '(':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    case '^':
        return 4;
    }
}

main()   /* Main Program */
{
    char infx[50], pofx[50], ch, elem;
    int i = 0, k = 0;
    printf("Read the Infix Expression ? ");
    scanf("%s", infx);
    push('0');
    while ((ch = infx[i++]) != '\0')
    {
        if (ch == '(')
            push(ch);
        else if (isalnum(ch))
            pofx[k++] = ch;
        else if (ch == ')')
        {
            while (stack[top] != '(')
                pofx[k++] = pop();
            elem = pop(); /* Remove ( */
        }
        else     /* Operator */
        {
            while (priority(stack[top]) >= priority(ch))
                pofx[k++] = pop();
            push(ch);
        }
    }
    while (stack[top] != '0') /* Pop from stack till empty */
        pofx[k++] = pop();
    pofx[k] = '\0'; /* Make pofx as valid string */
    printf("\nPostfix Expn: %s\n", pofx);
}
