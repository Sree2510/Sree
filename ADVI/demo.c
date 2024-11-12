/*#include<stdio.h>
int a= 10;
int b = 20;
void swap()
{
    int temp = a;
    a = b;
    b = temp;
}

void main()
{
    swap();
    printf("Values after swaped: %d %d",a,b);
}
*/
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int a=10;
    int b = 20;
    swap(&a,&b);
    printf("Values after swap %d %d",a,b);
}
