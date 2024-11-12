#include<stdio.h>
#include<string.h>
char username[25];
char message[30];
char line[300];
void display_message()
{
     FILE *fptr = fopen("C:/Users/poovi/OneDrive/Desktop/ADVI/chatbox.txt", "r");

        while (fgets(line, sizeof(line), fptr)) {
        printf("%s", line);
    }
}

void send_message()
{
    FILE *fptr = fopen("C:/Users/poovi/OneDrive/Desktop/ADVI/chatbox.txt","a");
    if(fptr == NULL)
    {
        printf("Unable to create file");
    }
    else
    {
        // user1 name
        printf("Enter the UserName:\n");
        scanf("%s",username);
        strcat(username," : ");
        fprintf(fptr,"%s",username);

        //getting the \n newline
        getchar();
        // user1 message
        printf("Enter the message:\n");
        fgets(message,sizeof(message),stdin);
        fprintf(fptr,"%s",message);

        fclose(fptr);
    }
}

void main()
{
    int choice;
    char second_choice;
    do
    {
        printf("Press 1 to send message:\n");
        printf("Press 2 to display message:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            send_message();
            break;
        case 2:
            display_message();
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
        printf("Do you want to continue(y/n):\n");
        scanf("%c",&second_choice);
    }
    while(second_choice=='y');
}
