#include <stdbool.h>

#include <stdio.h>

int main() {
    int x, y, z, a;

    printf("x y z | a\n");
    printf("--------------\n");

    for (x = 0; x <= 1; x++) {
        for (y = 0; y <= 1; y++) {
            for (z = 0; z <= 1; z++) {

                a = (!x || (y && z)) && !y;

                printf("%d %d %d | %d\n", x, y, z, a);
            }
        }
    }

    return 0;
}