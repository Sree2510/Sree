#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n=5,*ptr,sum;
    /*printf("Enter the number of elements:\n");
    scanf("%d",&n);*/
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Unable to allocate the memory\n");
    }
    else{
        printf("Enter the elements\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",ptr+i);
            sum+=*(ptr+i);
        }
        printf("%d",sum);
        free(ptr);
    }
}
