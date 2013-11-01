/* task203.c */

#include <stdio.h>

int main(void)
{
    char *password = "asdf";
    char guess;
    long count = 0;

    while ((guess = getchar()) != EOF)
    {
        if (*(password+count) != '\0')
        {
            if (guess != '\n')
            {
                if ((*(password+count) != guess))
                {
                    printf("PW MISMATCH");
                    return(0);
                }
            count++;
            }
        }
        else
        {
            printf("pw match");
            return(0);
        }
    }
    return (0);
}

