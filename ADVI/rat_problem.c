#include<stdio.h>
void main()
{
    int no_of_rats,arr[5],required_units,units_consume = 2;
    int sum,house_count;
    printf("Enter the number rats:\n");
    scanf("%d",&no_of_rats);
    printf("Enter the 5 values:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    required_units = no_of_rats * units_consume;
    for(int i=0;i<5;i++)
    {
        if(sum <= required_units){
            sum+=arr[i];
            house_count+=1;
        }
    }

    printf("The number of units required for %d rats is: %d units\n",no_of_rats,required_units);
    printf("The units we have: %d units\n",sum);
    if(sum>required_units)
    {
        sum -= required_units;
        printf("The extra units we have is: %d units\n",sum);
    }
    else{
        printf("The is no extra units!\n");
    }
    printf("The required units of food is got from house 1 to %d",house_count);
}
