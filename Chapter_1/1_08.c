/*Exercise 1-8: Write a program to count blanks,
tabs and newlines.*/

#include<stdio.h>

main()
{
    int c, blanks, tabs, new_lines;

    blanks = 0;
    tabs = 0;
    new_lines = 0;

    while((c=getchar())!=EOF)
    {
        if(c == ' ')
            ++blanks;  //if it's blank, increments blanks
        else if(c == '\t')
            ++tabs;  //if it's tab, increments tabs
        else if(c == '\n')
            ++new_lines; //if it's new line, increments new_lines
    }

    printf("Number of blanks: %d",blanks);
    printf("\nNumber of tabs: %d",tabs);
    printf("\nNumber of new lines: %d",new_lines);
}
