///*Traversing, insertion and deletion(3 in 1)*///
#include<stdio.h>
void traverse(int ara[], int n) ///*Traversing function*/
{
    int k=0;
    while(k<n)
    {
        printf("%d ", ara[k]);
        k++;
    }
}
void insert(int ara[], int n, int k, int item) ///*insertion function*/
{
    int j;
    j=n;
    while(j>=k)
    {
        ara[j+1]=ara[j];
        j--;
    }
    ara[k]=item;
    n=n+1;
    for(j=0; j<n; j++)
    {
        printf("%d ", ara[j]);
    }
}
void deletion(int ara[], int n, int k) ///*Deletion function*/
{
    int j;
    for(j=k; j<=n-1; j++)
    {
        ara[j]=ara[j+1];
    }
    n=n-1;
    for(k=0; k<n; k++)
        printf("%d ", ara[k]);
}
int main()
{
    int ara[100], n, i, j, item, k, call;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ara[i]);
    }
    printf("Enter 1 for traversing, 2 for insertion or 3 for deletion:\n");
    scanf("%d", &call);
    if(call==1)
    {
        traverse(ara, n);
    }
    if(call==2)
    {
        scanf("%d %d", &k, &item);
        insert(ara, n, k, item);
    }

    if(call==3)
    {
        scanf("%d", &k);
        deletion(ara, n, k);
    }
    return 0;
}
