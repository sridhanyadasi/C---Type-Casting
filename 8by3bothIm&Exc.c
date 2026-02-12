#include <stdio.h>

int main()
{
    float a = 8;
    int b = 3;

    // Implicit type conversion
    // int b is automatically converted to float
    // Expression becomes: 8.0 / 3.0 = 2.6667
    // Result is stored in float
    // So NO data loss occurs
    float result1 = a / b;

    // Explicit type conversion
    // a / b gives 2.6667 (float result)
    // Explicitly converting float to int
    // Fractional part (.6667) is removed
    // So DATA LOSS occurs
    int result2 = (int)(a / b);

    printf("Implicit (No Data Loss) : %f\n", result1);
    printf("Explicit (Data Loss)    : %d\n", result2);

    return 0;
}
