#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
void polish(char infix[100], char postfix[100])
{
    char stack[10];
    //char op[5]={'^', '*', '/', '+', '-'}
    int len;
    len=strlen(infix);
    int top=len;
    int i=0, pst=-1, stk=0;
    infix[top]=')';
    top=top+1;
    stack[0]='(';
    while(i<top)
    {
        if((infix[i]>='0')&&(infix[i]<='9'))
        {
            ++pst;
            postfix[pst]=infix[i];

        }
        else if(infix[i]== '(')
        {
            ++stk;
            stack[stk]=infix[i];

        }
        else if(infix[i]== '+')
        {
            while(stack[stk]== 47 || stack[stk]== 42 || stack[stk]== 94 || stack[stk]== 45)
                {
                    ++pst;
                    postfix[pst]=stack[stk];

                    --stk;
                }
                ++stk;
                stack[stk]=infix[i];
                //puts(stack);

        }
        else if(infix[i]== '-')
        {
            while(stack[stk]== 47 || stack[stk]== 42 || stack[stk]== 94 || stack[stk]== 43 || stack[stk]== 45)
                {
                    ++pst;
                    postfix[pst]=stack[stk];

                    --stk;
                }
                ++stk;
                stack[stk]=infix[i];

        }
        else if(infix[i]== '*')
        {
            while(stack[stk]== 47 || stack[stk]== 94)
                {
                    ++pst;
                    postfix[pst]=stack[stk];
                    --stk;
                }
                ++stk;
                stack[stk]=infix[i];

        }
        else if(infix[i]== '/')
        {
            while(stack[stk]== 42 || stack[stk]== 94)
                {
                    ++pst;
                    postfix[pst]=stack[stk];

                    --stk;
                }
                ++stk;
                stack[stk]=infix[i];

        }
         else if(infix[i]== '^')
        {
            while(stack[stk]== 94)
                {
                    ++pst;
                    postfix[pst]=stack[stk];

                    --stk;
                }
                ++stk;
                stack[stk]=infix[i];

        }
        else if(infix[i]== ')')
        {
            //puts(postfix);
            while(stack[stk]!='(')
                {
                    ++pst;
                    postfix[pst]=stack[stk];

                    //printf("%d",pst);
                    //puts(postfix);
                    --stk;
                }
                --stk;
        }
        i++;
    }
    postfix[pst+1]='\0';
    puts(postfix);

  /* for(i=0; i<pst; i++)
    {

        printf("%c", postfix[i]);
    }*/

    return;
}
int main()
{
    char infix[100], postfix[100];
    int i, top=10;
    //gets(infix);
    /*for(i=0; i<top; i++)
    {
        scanf("%c", &infix[i]);
    }*/
    polish(infix, postfix);
    return 0;
}
