/*Exercise 1-13: Write a program to print a histogram of the lengths
of words in its input. It is easy to draw the histogram with the
bars horizontal; a vertical orientation is more challenging.*/

#include<stdio.h>

#define MAX 20 //the max length a word can be

main()
{
    int len, c, i, j, max_len;
    int wor_len[20];    //max word lenght is 20 chars

    max_len = 0;        //length of the longest word
    len = 0;             //initializing counters
    for(i=0;i<MAX;i++)
        wor_len[i] = 0;

    while((c=getchar())!=EOF)
    {
        if(c!=' ' && c!='\n' && c!='\t')
        {
            ++len;
        }
        else if((c==' ' || c=='\n' || c=='\t') && len!=0)
        //len!=0 is needed in case there are multiple spaces (don't want to have ++wor_len[-1])
        {
            ++wor_len[len-1];
            len = 0;
        }

    }

    //printing the values from the array - for control purposes only
    //print only if value is >0

    for(i=0;i<MAX;i++)
    {
        if(wor_len[i]>0)
            printf("\n %2d character long words: %2d", i+1, wor_len[i]);
    }

    //histogram - horizontal bars
    printf("\n\n Histogram - horizontal bars:\n");

    for(i=0;i<MAX;i++)
    {
        printf("\n %2d : ", i+1);
        for(j=0;j<wor_len[i];j++)
            printf("X");
    }

    //histogram - vertical bars
    printf("\n\n Histogram - vertical bars:\n");

    for(i=0;i<MAX;i++)             //to get the maximum word length
        if(wor_len[i] > max_len)
            max_len = wor_len[i];

    for(i=max_len;i>0;i--)      //will start printing from top to bottom
    {
        for(j=0;j<MAX;j++)
        {
            if(wor_len[j] >= i)    //if word length is >= than i will have to put a x else nothing
                printf(" X ");
            else printf("   ");
        }
        printf("\n");
    }
    for(i=1;i<=MAX;i++)        //printing the numbers (lengths) at the bottom
        printf(" %d ",i);

}
