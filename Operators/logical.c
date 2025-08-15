#include <stdio.h>

int main()
{
    printf("Logical Operators\n");

    int a = 1;   
    int b = 0;  

    // Logical AND (&&)
    int and_result = (a && b);
    printf("a && b = %d\n", and_result);

    // Logical OR (||)
    int or_result = (a || b);
    printf("a || b = %d\n", or_result);

    // Logical NOT (!)
    int not_result = (!a);
    printf("!a = %d\n", not_result);

    return 0;
}
