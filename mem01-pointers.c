/* mem01-pointers.c */

#include <stdio.h>

int main(void) 
{
    int i = 5;

    printf("\nThe value of variable i is %d.\n",i);

    printf("The variable i is located at address &i=%p in memory.\n",&i);

    printf("The size of i is %d bytes.\n",sizeof(i));

    printf("\nTherefore, i occupies locations\n\t%p\n\t%p\n\t%p\n\t%p\nin memory.\n",
                        &i, ((long int)&i)+1, ((long int)&i)+2, ((long int)&i)+3);
}
