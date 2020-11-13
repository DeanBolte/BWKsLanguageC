#include <stdio.h>

int main() {
    int step = 20;

    for(int fahr = 300; fahr > 0; fahr -= step) {
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
    }
}