/* ampersand.c */

#include <stdio.h>

int main(void) 
{
    int i = 5;

    printf("The value of variable i is %d\n",i);

    printf("The variable i is located at address %p in memory\n",&i);

    printf("The size of i is %d bytes\n",sizeof(i));

    printf("Therefore, i occupies locations\n %p\n%p\n%p\n%p\nin memory\n",
            &i, ((long int)&i)+1, ((long int)&i)+2, ((long int)&i)+3);
}
