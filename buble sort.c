#include<stdio.h>
int main()
{
    int n, arr[100], c, d, swap;
    scanf("%d", &n);
    for(c=0; c<n; c++)
        scanf("%d", &arr[c]);

    for(c=1; c<=n-1; c++)
    {
        for(d=0; d<n-c; d++)
        {
            if(arr[d]>arr[d+1])
            {
                swap=arr[d];
                arr[d]=arr[d+1];
                arr[d+1]=swap;
            }
        }
    }

    printf("Sorted list in ascending order: \n");
    for(c=0; c<n; c++)
    {
        printf("%d\n", arr[c]);
    }
    return 0;
}
