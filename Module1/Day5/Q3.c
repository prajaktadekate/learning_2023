#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time diff;

    if (end.seconds < start.seconds) {
        end.minutes--;
        end.seconds += 60;
    }

    diff.seconds = end.seconds - start.seconds;

    if (end.minutes < start.minutes) {
        end.hours--;
        end.minutes += 60;
    }

    diff.minutes = end.minutes - start.minutes;
    diff.hours = end.hours - start.hours;

    return diff;
}

int main() {
    struct Time startTime, endTime, difference;

    // Input the start time
    printf("Enter the start time (hh:mm:ss):\n");
    scanf("%d:%d:%d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    // Input the end time
    printf("Enter the end time (hh:mm:ss):\n");
    scanf("%d:%d:%d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    // Calculate the difference between the time periods
    difference = calculateTimeDifference(startTime, endTime);

    // Display the difference in time
    printf("\nDifference: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
