/* task204.c */

#include <stdio.h>

int main(void)
{
    char in,out;
    int initialWhitespaceIsSet = 0;

    while ((in = getchar()) != EOF)
    {
        if ((in == '\t') || (in == ' ') || (in == '\r') || (in == '\n'))
        {
            out ='\0';
            if (initialWhitespaceIsSet == 0)
            {
                initialWhitespaceIsSet = 1;
                out = ' ';
            }
        }
        else
        {
            out = in;
            initialWhitespaceIsSet = 0;
        }
        putchar(out);
    }
    putchar('\n')

    return (0);
}
