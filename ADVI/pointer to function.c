#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int multiply(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return a/b;
}
int moduluo(int a,int b)
{
    return a%b;
}

int main()
{
    int (*ptr)(int, int) = &add;
    int (*ptr1)(int, int) = &sub;
    int (*ptr2)(int, int) = &multiply;
    int (*ptr3)(int, int) = &divide;
    int (*ptr4)(int, int) = &moduluo;

    printf("Add: %d\n",(ptr)(10,5));
    printf("Sub: %d\n",(ptr1)(10,5));
    printf("Multiply: %d\n",(ptr2)(10,5));
    printf("Divide: %d\n",(ptr3)(10,5));
    printf("Moduluo: %d\n",(ptr4)(10,5));
    return 0;
}
