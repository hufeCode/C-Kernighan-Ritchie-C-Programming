/*Exercise 1-12: Write a program that prints its input one word per line.*/

#include<stdio.h>

#define YES 1
#define NO 0

main()
{
    int flag, c;

    flag = NO;  //to follow if there are multiple spaces, tabs

    while((c=getchar())!=EOF)
    {
        if((c==' ' || c=='\n' || c=='\t')&&(flag==NO)) //for the first space, new line, will put a new line
        {
            putchar('\n');
            flag = YES;
        }
        else if(c!=' ' && c!='\n' && c!='\t') //if it's not new line or space it will display c
        {
            putchar(c);
            flag = NO;
        }
    }
}
