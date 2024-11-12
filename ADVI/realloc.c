#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,*ptr,i,*ptr2;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    //allocating memory using calloc function
    //default values after allocating the memory is [0,0,0,0,0]
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
        printf("\n");

        //reallocating the size
        printf("Enter the resize value:\n");
        scanf("%d",&n);
        ptr2 = (int*)realloc(ptr, n * sizeof(int));
        if(ptr2 == NULL)
        {
            printf("unable to allocate the memory\n");
        }
        else{
            // getting the values
            for(i=0;i<n;i++)
            {
                scanf("%d",&ptr2[i]);
            }
            printf("Printing the values in ptr2\n");
             for(i=0;i<n;i++)
            {
                printf("%d ",ptr2[i]);
            }
        }
    }
}

