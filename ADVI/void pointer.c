#include<stdio.h>
void main()
{
    int a = 10;
    void *p = &a;
    // (int*)p is for casting the void into int and *() is for dereferencing the value in the memory address
    printf("%d",*(int*)p);
}
