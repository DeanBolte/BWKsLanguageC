#include <stdio.h>

int main() {
    int c;
    while((c = getchar()) != EOF && c != '\n') {
        if(c == ' ') {
            putchar('\n');
        } else {
            putchar(c);
        }
    }
    putchar('\n');
}