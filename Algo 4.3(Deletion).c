///*Deletion an element from an array*///
#include<stdio.h>
int main()
{
    int n, j, k, LA[100], item;
    scanf("%d", &n);
    printf("Enter %d elements in the array:\n", n);
    for(k=0; k<n; k++)
    {
        scanf("%d", &LA[k]);
    }

    printf("from which index u want to dlt = ");
    scanf("%d", &k);

    for(j=k; j<n; j++)
    {
        LA[j]=LA[j+1];
    }

    n--;
    for(k=0; k<n; k++)
    {
        printf("%d ", LA[k]);
    }
    return 0;
}
