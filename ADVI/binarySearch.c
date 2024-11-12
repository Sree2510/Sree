#include<stdio.h>
int binarySearch(int arr[], int size,int key)
{
    int low = 0;
    int high = size-1;
    for(int i=0;i<size;i++)
    {
        int mid = high + low /2;
        if(key == arr[mid])
        {
            printf("The value is found at %d ",mid);
            return 0;
        }
        else if(key<arr[mid])
        {
            high = mid -1;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
}
void main()
{
    int num[] = {1,2,3,4,5};
    int size = 5;
    binarySearch(num,size,2);
}
