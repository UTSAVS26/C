#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time
    time_t currentTime = time(NULL);
    printf("Current time: %s", ctime(&currentTime));

    // Convert the current time to a string
    char timeString[50];
    struct tm* timeInfo = localtime(&currentTime);
    strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", timeInfo);
    printf("Formatted time: %s\n", timeString);

    // Get the current calendar time in seconds
    time_t calendarTime = time(NULL);
    printf("Calendar time: %ld\n", calendarTime);

    // Add 10 seconds to the current time
    time_t futureTime = currentTime + 10;
    printf("Future time: %s", ctime(&futureTime));

    // Get the difference between two times
    time_t startTime = time(NULL);
    // Some time-consuming task
    time_t endTime = time(NULL);
    double elapsedTime = difftime(endTime, startTime);
    printf("Elapsed time: %.2f seconds\n", elapsedTime);

    return 0;
}

