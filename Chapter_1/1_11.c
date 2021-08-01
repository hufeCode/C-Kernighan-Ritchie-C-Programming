/*Exercise 1-11: How would you test the word count program?
What kinds of input are most likely to uncover bugs if there
are any?*/

//This program counts lines, words, chars and is a program from the book.

//Testing: The number of characters, lines and words are stored in integers. If the program gets a long text
//and any of these counters goes beyond 32767, that will cause a problem. 
//Usually a character is a letter, a digit or a punctuation mark. This program will increment the character count
//on every new line, tab or space. That is a problem as well.

#include<stdio.h>

#define IN 1  //inside a word
#define OUT 0   //outside a word

main()
{
    int c, nl, nw, nc,state;

    state = OUT;
    nl = nw = nc = 0;

    while((c=getchar())!=EOF)
    {
        ++nc;               //on every char it will increase char count
        if(c == '\n')
            ++nl;

        if(c==' ' || c=='\n' || c=='\t') //if c is a newline, tab or space then it's a word separator
            state = OUT;
        else if(state == OUT)
        {
            state = IN;         //sets the flag to in a word and increases the word count
            ++nw;
        }
    }
    printf("Lines: %d\t Words: %d\t Chars: %d",nl,nw,nc);
}
