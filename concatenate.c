#include<stdio.h>
#include<string.h>
void concatenate(char s1[], char s2[])            ///concatenation function
{
    char s3[100];
    int i, j, len1, len2, k;
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0; i<len1; i++)
    {
        s3[i]=s1[i];
    }
    int pos=0;
    for(j=len1; j<len1+len2; j++)
    {

        s3[j]=s2[pos];
        pos++;
    }

    s3[j]='\0';    ///To avoid garbage value
    puts(s3);
    return;
}

int main()        ///main function
{
    char s1[100];
    char s2[100];
    int len1, len2;
    gets(s1);         ///1st string
    gets(s2);         ///2nd string
    concatenate(s1, s2);
}
