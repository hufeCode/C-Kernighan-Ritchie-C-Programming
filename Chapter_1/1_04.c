/*Exercise 1-4: Write a program to print the corresponding
Celsius to Fahrenheit table.*/

#include<stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower temperature limit (C)
    upper = 300; // upper temperature limit (C)
    step = 20; // step size

    printf(" C  ->  F\n"); //heading
    printf("----------\n"); //heading


    celsius = lower; // init fahr

    while(celsius <= upper)
    {
        fahr = (9.0/5.0)*celsius +32;  //celsius to fahrenheit formula
        printf("%3.0f %6.1f \n", celsius, fahr);
        celsius = celsius + step;
    }
}
