///*Bubble sort(ascending order)*///
#include<stdio.h>
int main()
{
    int n, data[100], k, d, swap, ptr, c;
    scanf("%d", &n);
    for(c=0; c<n; c++)
        scanf("%d", &data[c]);
    for(k=1; k<=n-1; k++)
    {
        ptr=0;
        while(ptr<=n-k)
        {
            if(data[ptr]>data[ptr+1])
            {
                swap=data[ptr];
                data[ptr]=data[ptr+1];
                data[ptr+1]=swap;
            }
            ptr++;
        }
    }
    printf("Sorted list in ascending order: \n");
    for(c=0; c<n; c++)
    {
        printf("%d\n", data[c]);
    }
    return 0;
}

