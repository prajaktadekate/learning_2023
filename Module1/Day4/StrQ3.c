#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void computeTotalSeconds(char timeStr[], unsigned long *hours, unsigned long *minutes, unsigned long *seconds, unsigned long *totalSeconds) {
    char* token;

    // Extract hours
    token = strtok(timeStr, ":");
    *hours = strtoul(token, NULL, 10);

    // Extract minutes
    token = strtok(NULL, ":");
    *minutes = strtoul(token, NULL, 10);

    // Extract seconds
    token = strtok(NULL, ":");
    *seconds = strtoul(token, NULL, 10);

    // Compute total seconds
    *totalSeconds = *hours * 3600 + *minutes * 60 + *seconds;
}

void displayTime(unsigned long hours, unsigned long minutes, unsigned long seconds) {
    printf("Time: %02lu:%02lu:%02lu\n", hours, minutes, seconds);
}

int main() {
    char timeStr[9];
    unsigned long hours, minutes, seconds, totalSeconds;

    printf("Enter time in hh:mm:ss format: ");
    fgets(timeStr, sizeof(timeStr), stdin);

    // Remove newline character
    if (timeStr[strlen(timeStr) - 1] == '\n') {
        timeStr[strlen(timeStr) - 1] = '\0';
    }

    computeTotalSeconds(timeStr, &hours, &minutes, &seconds, &totalSeconds);

    displayTime(hours, minutes, seconds);
    printf("Total Seconds: %lu\n", totalSeconds);

    return 0;
}
