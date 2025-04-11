#include <stdio.h>
#include <stdlib.h>

int compare_desc(int *a, int *b);

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);    
    int arr[] = {a, b, c, d, e};        
    int *p1 = arr;

    int rank[5];
    for(int i = 0; i < 5; i++)
    {
        rank[i] = arr[i];
    }
    
    int *p2 = rank;
    int size = sizeof(rank) / sizeof(rank[0]);

    qsort(p2, size, sizeof(int), compare_desc);    

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(*(p1+i) == *(p2+j))
            {
                printf("%d=r%d ", *(p1+i), j+1);
                break;
            }
        }
    }
}

int compare_desc(int *a, int *b)
{
    return (*b - *a);
}