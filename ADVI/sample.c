#include<stdio.h>
#include<string.h>
char userID[10],inputID[10],choice;
char password[10],input_Password[10];
char second_choice;
void create_account(){
            printf("\nPlease enter the userId:\n");
            scanf("%s",&userID);
            printf("\nPlease enter the password | Use Atleast one special Character :\n");
            scanf("%s",&password);
            if((strlen(userID)<11)&&(strlen(password)<11)){
                printf("\nyour account is created successfully\n");
            }
            else{
                printf("\nYour userID and Password must be less than 10 character\n");
            }
    }
void login(){
    printf("\nWelcome to login page\n");
    printf("\nEnter your userID\n");
    scanf("%s",&inputID);
    printf("\nEnter your password\n");
    scanf("%s",&input_Password);

    if(strcmp(userID,inputID)&&(strcmp(password,input_Password))){
        printf("Please check Your userID and Password or create an account!\n");
    }
    else{
        printf("You have logged in successfully\n");
    }
}
void main()
{
    do{
        printf("press 1 to create an account:\n");
        printf("Press 2 to login into your account:\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            create_account();
            break;
        case 2:
            login();
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
        printf("\nDo you want to create or login into account(y/n):\n");
        scanf("%s",&second_choice);
    }while(second_choice=='y');

}
