#include <stdio.h>

// int main(void)
// {
//     int n = 0;   

//     scanf("%d", &n);    
    
//     for(int i = 1; i < n+1; i++)
//     {
//         for(int j = 0; j < i; j++)
//         {
//             printf("*");            
//         }
//         printf("\n");            
//     }    
// }


int printStar(int);

int main()
{
    int n;
    scanf("%d", &n);

    printStar(n);
}

int printStar(int n)
{
    static int i = 0;
    
    if (i < n)
    {
        for(int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
        i++;
    }
    printStar(n);
}