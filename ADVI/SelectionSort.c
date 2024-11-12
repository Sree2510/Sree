#include<stdio.h>
void selectionSort(int arr[],int size)
{
    for(int i=0;i<=size;i++)
    {
    int min = i;
        for(int j=i+1;j<size;j++)
        {

            if(arr[j]<arr[min])
            {
                min = j;
            }
                int temp = arr[min];
                arr[min]=arr[i];
                arr[i] = temp;
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

void main()
{
    int num[] = {1,0,7,5,3,-1};
    int size = 6;
    selectionSort(num,size);
}
