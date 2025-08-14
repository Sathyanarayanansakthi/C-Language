#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;

    int c = a != b;  // 1 (true)
    int d = a == b;  // 0 (false)
    int e = a > b;   // 1 (true)
    int f = a < b;   // 0 (false)

    printf("a != b : %d\n", c);
    printf("a == b : %d\n", d);
    printf("a > b  : %d\n", e);
    printf("a < b  : %d\n", f);

    return 0;
}
