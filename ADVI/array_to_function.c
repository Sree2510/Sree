#include<stdio.h>
void modify(int value)
{
    value+=10;
    printf("\nModified number: %d\n",value);
}

void printArray(int arr[], int size)
{
    printf("The array elements are: ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void main()
{
    int num[] = {1,2,3,4};
    printArray(num,4);
    modify(num[2]);

}
