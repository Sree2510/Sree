#include<stdio.h>
#include<string.h>

struct student
{
    int id;
    float percentage;
    char name[100];
};

void main()
{
    struct student s1;
    s1.id = 01;
    s1.percentage = 69.5;
    strcpy(s1.name,"Johnny");

    printf("%d\n",s1.id);
    printf("%.2f\n",s1.percentage);
    printf("%s",s1.name);
}
