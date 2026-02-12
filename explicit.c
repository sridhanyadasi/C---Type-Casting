#include <stdio.h>

int main()
{
    float a = 20.0;
    int c = (int)a;

    printf("Explicit casting, but no data loss occurs : %d\n", c);

    float b = 20.3;
    int i = (int)b;

    printf("Explicit casting, but data loss occurs : %d\n", i);

    return 0;
}
