/* task205.c */

#include <stdio.h>

int main(void)
{
    int wordcount = 0;
    int charcount = 0;
    int linecount = 0;
    char in;
    int wasWhitespace = 1;

    while ((in = getchar()) != EOF)
    {
        charcount++;

        if (in == '\n')
        {
            linecount++;
            wasWhitespace = 1;
        }
        else if ((in == '\t') || (in == ' '))
        {
            wasWhitespace = 1;
        }
        else
        {
            if (wasWhitespace)
            {
                wordcount++;
            }
            wasWhitespace = 0;
        }


    }
    printf("words: %d, lines: %d, chars: %d", wordcount, linecount, charcount);

    return (0);
}
