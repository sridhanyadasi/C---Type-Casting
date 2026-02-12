/*Create a program that converts an integer to a floating-point number using implicit casting and explicit casting.
Print the result.(observe changes if any) */


#include<stdio.h>
void main()
{
    int a=9;
    float b=5.5;

    float c=(float)a;
    float d=a+b;
    int e=(int)b;


    //our expectation is : float
    //compiler expectation is : float
    //so no data loss occur


    printf("%f\n",c);     // NO data loss = implicit  (small - big)
    printf("%f\n",d);
    printf("%d\n",e);
}
