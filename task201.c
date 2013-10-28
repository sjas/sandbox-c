#include <stdio.h>

int main(void) {
    int i,j,k;

    i = 0;
    j = 0;
    k = 100;

    /*do {*/
        /*if (j<=k) {*/
            /*printf("j is currently less than or equal to k (i:%d, j:%d, k:%d)\n",i,j,k);*/
        /*}*/
        /*else {            */
            /*printf("j is currently greater than k (i:%d, j:%d, k:%d)\n",i,j,k);*/
        /*}*/
        /*i++;*/
        /*j+=10;*/
        /*k-=10;        */
    /*} while (i<=10);*/


    for(;i<=10;i++) {

        char *str = j>k ? "greater than" : "less than or equal to";

        printf("j is currently %s k (i:%d, j:%d, k:%d)\n", str, i, j, k);

        j+=10;
        k-=10;
    }

    return(0);
}
