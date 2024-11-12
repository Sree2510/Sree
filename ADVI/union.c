#include<stdio.h>
#include<string.h>

union student
{
    int id;
    float percentage;
    char name[100];
};

int main()
{
    union student s1;
    s1.id = 01;
    printf("%d\n",s1.id);
    s1.percentage = 69.5;
    printf("%.2f\n",s1.percentage);
    strcpy(s1.name,"Johnny");
    printf("%s",s1.name);
    return 0;
}

