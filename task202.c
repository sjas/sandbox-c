/* task202.c */

#include <stdio.h>

char tolowercase(char c);

int main(void) 
{
    printf("%d\n"   , 'A'); // 65
    printf("%d\n"   , 'B'); // 66
    printf("%d\n"   , 'Y'); // 89
    printf("%d\n\n" , 'Z'); // 90

    printf("%d\n"   , 'a'); // 97
    printf("%d\n"   , 'b'); // 98
    printf("%d\n"   , 'y'); // 121
    printf("%d\n\n" , 'z'); // 122

    printf("%c\n"   , tolowercase('A'));
    printf("%c\n"   , tolowercase('B'));
    printf("%c\n"   , tolowercase('Y'));
    printf("%c\n\n" , tolowercase('Z'));

    printf("%c\n"   , tolowercase('a'));
    printf("%c\n"   , tolowercase('b'));
    printf("%c\n"   , tolowercase('y'));
    printf("%c\n\n" , tolowercase('z'));

    printf("%c\n"   , tolowercase('0'));
    printf("%c\n"   , tolowercase(';'));

    return(0);
}

char tolowercase(char c) 
{
    return (c<='Z' && c>='A') ? c+'a'-'A' : c;
}

