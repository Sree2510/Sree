#include<stdio.h>
void bubbleSort(int arr[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void  main()
{
    int num[] = {30,1,0,4,5,10,-1,-8};
    int size = 8;
    bubbleSort(num,size);
}
