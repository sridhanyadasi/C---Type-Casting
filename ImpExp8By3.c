//Write a C program that divides two integer values and provides the result as a floating-point value using both implicit and explicit casting.
 //Use the input values ValueOne = 8 and ValueTwo = 3. Observe and explain the results in both scenarios


#include<stdio.h>

void main()
{
    int valueOne = 8;
    int valueTwo = 3;

    // Implicit casting (integer division first)
    float result1 = valueOne / valueTwo;

    // Explicit casting (floating-point division)
    float result2 = (float)valueOne / valueTwo;

    printf("%f\n", result1);   // Output: 2.000000
    printf("%f\n", result2);   // Output: 2.666667
}


/* Given values:
 ValueOne = 8
 ValueTwo = 3

 Case 1: Implicit casting
 - Both operands (8 and 3) are integers
 - Integer division happens first: 8 / 3 = 2
 - The result (2) is then implicitly converted to float → 2.000000

 Case 2: Explicit casting
 - One operand is explicitly converted to float
 - Floating-point division happens: 8.0 / 3 = 2.666667
 - The accurate decimal result is stored in float variable
