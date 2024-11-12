#include<stdio.h>
#include<time.h>
#include<conio.h>
void main()
{
    char s,e;
    clock_t start,end;
    double elapsed_time;
    printf("Press 's' to start the stop watch\n");
    getch();

    start = clock();
    while(1)
    {
    if(kbhit())
    {
        e = getch();
        if(e=='e')
        {
            end = clock();
            break;
        }
        }
    }
        elapsed_time = ((double)(end - start)) / CLOCKS_PER_SEC;
        int hours = (int)(elapsed_time / 3600);
        int minutes = (int)((elapsed_time - (hours * 3600)) / 60);
        int seconds = (int)(elapsed_time - (hours * 3600) - (minutes * 60));
        printf("%d hours:%d minutes:%d seconds\n", hours, minutes, seconds);
}
