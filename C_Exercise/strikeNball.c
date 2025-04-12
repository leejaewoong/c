#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;        

    scanf("%d %d %d", &a, &b, &c);    

    int pitcher[] = {a, b, c};

    int d;
    int e;
    int f;        

    scanf("%d %d %d", &d, &e, &f);    

    int hitter[] = {d, e, f};

    int strike = 0;
    int ball = 0;
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++) 
        {
            if(i == j && pitcher[i] == hitter[j])  
            {
                strike += 1;
            }
            else if(pitcher[i] == hitter[j])  
            {
                ball += 1;
            }
        }
    }
    printf("%dS%dB", strike, ball);
    return 0;
}