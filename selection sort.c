#include<stdio.h>
int main()
{
    int n, arr[100], c, d, swap, position;
    scanf("%d", &n);
    for(c=0; c<n; c++)
        scanf("%d", &arr[c]);
    for(c=0; c<n-1; c++){
        position=c;
       for(d=c+1; d<n; d++)
            {
                if(arr[position] > arr[d])
                {
                    position = d;
                }
            }
        if(position!=c)
            {
                swap=arr[c];
                arr[c]=arr[position];
                arr[position]=swap;
            }
    }
    printf("Sorted list in ascending order: \n");
    for(c=0; c<n; c++)
    {
        printf("%d\n", arr[c]);
    }
    return 0;
}
