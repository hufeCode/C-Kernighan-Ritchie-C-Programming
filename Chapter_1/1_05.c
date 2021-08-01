/*Exercise 1-5: Modify the temperature conversion program
to print the table in reverse order, that is, from 300 degrees
to 0.*/

#include<stdio.h>

main()
{
    float celsius;
    int lower, upper, step;

    lower = 0; // lower temperature limit (C)
    upper = 300; // upper temperature limit (C)
    step = 20; // step size

    printf(" C  ->  F\n"); //heading
    printf("----------\n"); //heading


    for(celsius=upper; celsius>=lower; celsius=celsius-step)
        printf("%3.0f %6.1f \n", celsius, (9.0/5.0)*celsius +32);

}
