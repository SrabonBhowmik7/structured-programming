///*Matrix multiplication*///
///Sample input:
/*
3 2
1 2 3
4 5 6
3 1
7
8
9
*/
///Sample ouput
/*
7
28
*/
#include<stdio.h>
//#include<conio.h>
int main()
{
    int m, p1, p, n, i, j, k, a[50][50], b[50][50], c[50][50];
    scanf("%d %d", &m, &p);
    for(i=0; i<m; i++)
    {
        for(j=0; j<p; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    p=0;
    scanf("%d %d", &p, &n);
    for(i=0; i<p; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j]=0;
            for(k=0; k<p; k++)
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }
    }
    printf("Product matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");

    }
    return 0;
}
