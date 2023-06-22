#include <stdio.h>
#include <ctype.h>

void toggleCase(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }

        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    toggleCase(str);

    printf("Toggled Case String: %s\n", str);

    return 0;
}
