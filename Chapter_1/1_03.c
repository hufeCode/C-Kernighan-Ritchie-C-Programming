/*Exercise 1-3: Modify the temperature conversion program to
print a heading above the table.*/

#include<stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; // lower temperature limit (F)
    upper = 300; // upper temperature limit (F)
    step = 20; // step size

    printf(" F  ->  C\n"); //heading
    printf("----------\n"); //heading


    fahr = lower; // init fahr

    while(fahr <= upper)
    {
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f %6.1f \n", fahr, celsius);
        fahr = fahr + step;
    }
}
