/* sizeof.c */

#include <stdio.h>
int main(void)
{
    char c;

    printf("char: %d\n"          , sizeof(char));
    printf("char c: %d\n"        , sizeof(c));
    printf("short int: %d\n"     , sizeof(short int));
    printf("int: %d\n"           , sizeof(int));
    printf("long int: %d\n"      , sizeof(long int));
    printf("long long int: %d\n" , sizeof(long long int));
    printf("float: %d\n"         , sizeof(float));
    printf("double: %d\n"        , sizeof(double));
    return(0);
}
