#include <stdio.h>
#include <time.h>
#include <conio.h>

int running = 0;
time_t startTime, currentTime, elapsedTime = 0;

void displayTime(time_t totalTime) {
    printf("\rElapsed time: %02ld:%02ld:%02ld", totalTime / 3600, (totalTime % 3600) / 60, totalTime % 60);
    fflush(stdout);
}

void startStopwatch() {
    if (!running) {
        running = 1;
        startTime = time(NULL);
    }
}

void stopStopwatch() {
    if (running) {
        running = 0;
        elapsedTime += time(NULL) - startTime;
    }
}

void resetStopwatch() {
    running = 0;
    elapsedTime = 0;
}

int main() {
    char input;
    printf("Controls: 's' - Start, 't' - Stop, 'r' - Reset, 'q' - Quit\n");

    while (1) {
        if (running) {
            currentTime = time(NULL);
            displayTime(elapsedTime + (currentTime - startTime));
        }

        if (_kbhit()) {
            input = _getch();
            switch (input) {
                case 's': startStopwatch(); break;
                case 't': stopStopwatch(); break;
                case 'r': resetStopwatch(); break;
                case 'q': return 0; // Exit the program
            }
        }

        sleep(1);
    }
}
