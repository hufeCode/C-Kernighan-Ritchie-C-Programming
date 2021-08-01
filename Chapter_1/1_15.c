/*Exercise 1-15: Rewrite the temperature conversion program of Section 1.2
to use a function for conversion.*/

#include<stdio.h>

#define MIN_TEMP 0
#define MAX_TEMP 300
#define STEP 20

float c_to_f(int c);

main()
{
    int i;

    printf("Temperature conversion table:\n\n");
    printf("  C - F \n");

    for(i=MIN_TEMP;i<=MAX_TEMP;i=i+STEP)
    {
        printf(" %3d %3.1f \n", i, c_to_f(i));
    }
}

float c_to_f(int c)     //this function gets the temp in C and returns F
{
    float f;

    f = (9.0/5.0)*c +32;

    return f;
}
