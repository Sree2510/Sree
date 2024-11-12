#include<stdio.h>
int arr[3][4],column,row,choice,count,user_seat;
char second_choice,;
int row_size = sizeof(arr)/sizeof(arr[0]);
int column_size = sizeof(arr[0])/sizeof(arr[0][0]);
void seats()
{
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<column_size;j++)
        {
            arr[i][j]=0;
        }
    }
}
void print_seats()
{
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<column_size;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void book_seats()
{
    count =0;
    printf("Enter Seat Number from(1-12):\n");
    scanf("%d",&user_seat);
    if((user_seat >0)&&(user_seat < 12))
    {
        for(int i=0;i<row_size;i++){
            for(int j=0;j<column_size;j++)
            {
                count+=1;
                if (count == user_seat){
                    if(arr[i][j] == "X")
                        {
                            printf("The seat is already booked\n");
                        }
                    else{
                    arr[i][j] = "X";
                    printf("Your seat is successfully Booked\n");
                    }
                }
            }
        }
            for(int i=0;i<3;i++)
            {
            for(int j=0;j<4;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Invalid Seat Number:\n");
    }
}
void main()
{
    do{
        printf("Press 1 to book the seat\n");
        printf("Press 2 to display all the seats\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                book_seats();
                break;
            case 2:
                print_seats();
                break;
            default:
                printf("Invalid choice\n");
        }
        printf("Do you want to continue booking(y/n)\n");
        scanf("%s",&second_choice);
    }while(second_choice == 'y');
}
