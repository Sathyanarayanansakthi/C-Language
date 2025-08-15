#include <stdio.h>

int main() {
    printf("This is For Loop\n");

    int i;

    for (i = 0; i <= 10; i++) {
        if (i % 2 == 0) {  // check if even
            printf("%d\n", i);
        }
    }

    return 0;
}
