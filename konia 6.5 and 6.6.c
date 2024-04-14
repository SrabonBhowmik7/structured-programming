#include<stdio.h>
#include<string.h>
void polish(char infix[], char postfix[])
{
    char stack[100];
    int i = 0, postfixi = -1, stacki = 0, top;
    top = strlen(infix);
    infix[top] = ')';
    top += 1;
    stack[0] = '(';
    for(i = 0; i < top; ++i)
    {
        if((infix[i] >= '0') && (infix[i] <= '9'))
        {
            ++postfixi;
            postfix[postfixi] = infix[i];
        }
        else if(infix[i] == '(')
        {
            ++stacki;
            stack[stacki] = infix[i];
        }
        else if(infix[i] == '+')
        {
            while((stack[stacki]==47) || (stack[stacki]==42) || (stack[stacki]==94) || (stack[stacki]==45) || (stack[stacki]==43))
            {
                ++postfixi;
                postfix[postfixi] = stack[stacki];
                --stacki;
            }
            ++stacki;
            stack[stacki] = infix[i];
        }
        else if(infix[i] == '-')
        {
            while((stack[stacki]==47) || (stack[stacki]==42) || (stack[stacki]==94) || (stack[stacki]==45) ||(stack[stacki]==43))
            {
                ++postfixi;
                postfix[postfixi] = stack[stacki];
                --stacki;
            }
            ++stacki;
            stack[stacki] = infix[i];
        }
        else if(infix[i] == '*')
        {
            while((stack[stacki]==47) || (stack[stacki]==94) || (stack[stacki]==42))
            {
                ++postfixi;
                postfix[postfixi] = stack[stacki];
                --stacki;
            }
            ++stacki;
            stack[stacki] = infix[i];
        }
        else if(infix[i] == '/')
        {

            while((stack[stacki]==42) || (stack[stacki]==94) || (stack[stacki]==47))
            {
                ++postfixi;
                postfix[postfixi] = stack[stacki];
                --stacki;
            }
            ++stacki;
            stack[stacki] = infix[i];
        }
        else if(infix[i] == '^')
        {
            while(stack[stacki]==94)
            {
                ++postfixi;
                postfix[postfixi] = stack[stacki];
                --stacki;
            }
            ++stacki;
            stack[stacki] = infix[i];
        }
        else if(infix[i] == ')')
        {
            while(stack[stacki]!='(')
            {
                ++postfixi;
                postfix[postfixi]=stack[stacki];
                --stacki;
            }
            --stacki;
        }
    }
    postfix[postfixi+1] = '\0';
    puts(postfix);
    return;
}
void value(char postfix[])
{
    int top,i,j=0,k=0,value;
    char stack[100];
    top=strlen(postfix);
    postfix[top]=')';
    top += 1;
    for(j = 0; j < top; ++j)
    {
        if((postfix[j] >= '0') && (postfix[j] <= '9'))
        {

            //postfix[j]-48;
            stack[k]=postfix[j];
            ++k;

        }
        //stack[k-1]-=48;
        if((postfix[j]==47) || (postfix[j]==42) || (postfix[j]==94) || (postfix[j]==45) || (postfix[j]==43))
        {
            if(postfix[j]==43)
            {
                stack[k-1]=stack[k]+stack[k-1];

            }
            else if(postfix[j]==45)
            {
                stack[k-1]=stack[k]-stack[k-1];

            }
            else if(postfix[j]==42)
            {
                stack[k-1]=stack[k]*stack[k-1];
            }
            else if(postfix[j]==47)
            {
                stack[k-1]=stack[k]/stack[k-1];
            }
            else if(postfix[j]==94)
            {
                int l;
                stack[k-1]=1;
                for(l=0; l<stack[k]; ++l)
                {
                    stack[k-1]*=stack[k];
                }
            }

        }

    }
    value=stack[k];
    printf("%d",value);
}
int main()
{
    char postfix[100], infix[100];

    gets(infix);

    polish(infix, postfix);
    value(postfix);
    return 0;
}
