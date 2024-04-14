#include<stdio.h>
void substring(char str[], int a, int b)
{
    int i;
    for(i=a-1; i<a+b; i++){
        str[i];
        printf("%c", str[i]);
    }
}

int main()
{
    char str[100];
    gets(str);
    substring(str, 4, 8);
}
