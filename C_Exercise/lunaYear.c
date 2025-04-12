#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if(n % 400 == 0)
    {
        printf("%d", 1);
    } 
    else if(n % 100 == 0)
    {
        printf("%d", 0);
    }    
    else if(n % 4 == 0)
    {
        printf("%d", 1);
    }
    else
    {
        printf("%d", 0);
    }   
    return 0;
}
