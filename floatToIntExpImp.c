//Create a program that converts a floating-point number to an integer using implicit casting and explicit casting. Print the result.(observe changes if any)


#include<stdio.h>
void main()
{
    float a=7.6;
    int b=a;

    //int c = (int)a;
    float result=a-b;


    //our expectation is : float
    //compiler expectation is : int
    //data loss occur

    printf("%f\n",result);      // data loss occur = implicit (big  - small)
    printf("%d\n",(int)a);

}
