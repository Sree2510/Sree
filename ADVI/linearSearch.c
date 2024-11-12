#include<stdio.h>
int linerSearch(int arr[], int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            printf("The value %d is found at index %d\n",key,i);
        }
    }
    return -1;
}


void main()
{
    int num[]= {1,2,3,4};
    int size = 4;
    linerSearch(num,size,3);
}
