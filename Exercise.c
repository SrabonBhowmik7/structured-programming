#include<stdio.h>
int main()
{
    char p[100];
    char t[100];
    int k=0, l, s, r, max, index=-1;
    gets(p);
    r=strlen(p);
    gets(t);
    s=strlen(t);
    max=s-r+1;
    while(k<max)
    {
        for(l=0; l<r; l++)
        {
            if(p[l]!=t[k+l])
            {
                break;
            }
        }
        if(l==r)
        {
            index=k;
            printf("%d", index);
            break;
        }
        k=k+1;;
    }
    if(index==-1)
        printf("Not found.\n");
        return 0;
}
