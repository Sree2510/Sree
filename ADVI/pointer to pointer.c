/*#include<stdio.h>
void main()

{
    int a =10;
    int *ptr1 = &a;
    int **ptr2 = ptr1;
    printf("The value of a :%d\n",a);
    printf("The value of ptr1 %d\n",*ptr1);
    printf("The value of prt2 %d\n",*ptr2);
}
*/
#include<stdio.h>
void main()
{
    int *arr[] = {1,2,3,4};
    int **ptr = arr;
    for(int i=0;i<4;i++)
    {
        printf("The element in %d id %d\n",i,*(ptr+i));
    }
}
