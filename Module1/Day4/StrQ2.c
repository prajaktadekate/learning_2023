#include <stdio.h>

int stringToInteger(char str[]) {
    int res = 0;
    int i = 0;

    while (str[i] != '\0') {
        int ival = str[i] - '0';
        res = res * 10 + ival;
        i++;
    }

    return res;
}

int main() {
    char str[] = "5278";
    int result = stringToInteger(str);

    printf("Input String: %s\n", str);
    printf("Integer Value: %d\n", result);

    return 0;
}
