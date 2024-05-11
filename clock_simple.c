#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    int hour, minute, second;
    hour = minute = second = 0;

    while (1) {
        printf("\r%02d:%02d:%02d ", hour, minute, second);
        fflush(stdout);
        second++;

        if (second == 60) {
            minute++;
            second = 0;
        }
        if (minute == 60) {
            hour++;
            minute = 0;
        }
        if (hour == 24) {
            hour = 0;
            minute = 0;
            second = 0;
        }
        sleep(1);
    }

    return 0;
}
