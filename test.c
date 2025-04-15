#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "cat";
    char str2[] = "catt";
    int num = strncmp(str1, str2, 4);
    printf("%d", num);    
}
