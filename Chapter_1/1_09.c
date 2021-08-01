/*Exercise 1-9: Write a program to copy its input
to its output, replacing each string of one or more
blanks by a single blank.*/

#include<stdio.h>

main()
{
    int c, blanks;

    blanks = 0;

    while((c=getchar())!=EOF)
    {
    if (c == ' ')
        ++blanks;   //if c is a blank, will increment the counter
    else blanks = 0;    //if c is not a blank, will reset the counter

    if (blanks <= 1)
        putchar(c);  //if blanks <=1 means it's either not blank or single blank

    }
}
