#include<stdio.h>
int main()
{
    int n, arr[1000], c, d, tmp;
    scanf("%d", &n);
    for(c=0; c<n; c++)
        scanf("%d", &arr[c]);
    for(c=1; c<=n-1; c++){
        d=c;
        while(d>0 && arr[d] < arr[d-1])
            {
                tmp=arr[d];
                arr[d] = arr[d-1];
                arr[d-1]=tmp;
                d--;
            }
    }
    printf("Sorted list in ascending order: \n");
    for(c=0; c<=n-1; c++)
    {
        printf("%d\n", arr[c]);
    }
    return 0;
}

