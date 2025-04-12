#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char name[7];
    int kor, eng, math;
    float avg;
} student;

int main()
{
    int n;
    scanf("%d", &n);

    student* students = malloc(sizeof(student) * n);

    for(int i = 0; i < n; i++)
    {
        char name[8];
        int kor, eng, math;        

        scanf("%s %d %d %d", &name, &kor, &eng, &math);

        strcpy(students[i].name, name);
        students[i].kor = kor;
        students[i].eng = eng;
        students[i].math = math; 
        students[i].avg = ((float)kor + eng + math) / 3;   
        
        char grade1[6];
        char grade2[4];
        strcpy(grade1, "GREAT");
        strcpy(grade2, "BAD");

        printf("%s %.1f",students[i].name, students[i].avg);

        if(students[i].kor > 89 || students[i].eng > 89 || students[i].math > 89)
        {
            printf(" %s", grade1);
        } 
        
        if(students[i].kor < 70 || students[i].eng < 70 || students[i].math < 70)
        {
            printf(" %s", grade2);
        }                       
    }        
}