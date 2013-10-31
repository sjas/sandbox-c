/* mem02-arrays.c */

#include <stdio.h>

int main(void) 
{
    int a[5] = {1,2,3,4,5};

    printf("The size of a is %d bytes\n",sizeof(a));
    printf("Where does a reside in memory?\n");

    for (int i=0; i<5; i++) 
    {
        printf("&a[%d]=%p\n",i,&a[i]);
    }

    printf("a is a pointer to the first element:\n");
    printf("a=%p\n",a);
    printf("*a=%d\n",*a);
}
