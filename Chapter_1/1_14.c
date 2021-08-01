/*Exercise 1-14: Write a program to print a histogram of the
frequencies of different characters in its input.*/

#include<stdio.h>

main()
{
    int c, i, j, char_count[256], max_num;

    max_num = 0;

    for(i=0;i<256;i++)  //init the char count
        char_count[i] = 0;

    while((c=getchar())!=EOF)
    {
        if((c!=EOF)&&(c!='\n')&&(c!='\t'))  //tab, new line and EOF not counted
            char_count[c]++;
    }


    for(i=0;i<256;i++)     //how many times the most used character has been used
        if(char_count[i] > max_num)
            max_num = char_count[i];


    for(i=0;i<256;i++)      //list char_count  for control purposes
    {
        if(char_count[i]>0)
        {
                putchar(i);
                printf(": %3d\n", char_count[i]);
        }
    }


    //histogram - vertical bars
    printf("\nHistogram:\n\n");

    for(i=max_num;i>0;i--)      //will start displaying from top to bottom
    {
        for(j=0;j<256;j++)
        {
            if(char_count[j]>0)
            {
                if(char_count[j] >= i)    //if word length is >= than i will have to put a x else nothing
                    printf("X");
                else if(char_count[j] < i)
                    printf(" ");
            }
        }
    printf("\n");
    }

    for(i=0;i<256;i++)        //printing the characters at the bottom
        if(char_count[i]>0)
            putchar(i);

}
