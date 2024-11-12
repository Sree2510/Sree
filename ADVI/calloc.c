#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*ptr,i;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    //allocating memory using calloc function
    // default values after allocating the memory is [0,0,0,0,0]
    ptr = (int*)calloc(n, sizeof(int));

    if(ptr==NULL)
    {
        printf("Unable to allocate the memory\n");
        exit(0);
    }
    else{
            printf("Enter the values\n");
        //assign the values
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
        //printing the values in the ptr
        printf("Printing the values\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",ptr[i]);
        }
    }
}
