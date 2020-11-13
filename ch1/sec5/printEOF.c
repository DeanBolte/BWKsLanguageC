#include <stdio.h>

int main() {
    printf("EOF = %d\n", EOF);
    int c;
    int printBool;
    while(printBool = ((c = getchar()) != EOF && c != '\n')) {
        printf("bool = %d\n", printBool);
        printf("%c\n", c);
    }
    printf("final char = %d\n", c);
}