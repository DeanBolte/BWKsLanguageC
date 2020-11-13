#include <stdio.h>

int main() {
    int ns = 0;
    int nt = 0;
    int nl = 0;

    int c, prev;
    while((c = getchar()) != EOF) {
        if(c == ' ') {
            ns += 1;
            if(prev != ' ') {
                putchar(c);
            }
        } else if(c == '\t') {
            nt += 1;
            printf("\\t");
        } else if(c == '\n') {
            nl += 1;
        } else if(c == '\b') {
            printf("\\b");
        } else if(c == '\\') {
            printf("\\\\");
        } else {
            putchar(c);
        }
        
        prev = c;
    }

    printf("\nnum of spaces: %d\nnum of tabs: %d\nnum of newlines: %d\n", ns, nt, nl);
}