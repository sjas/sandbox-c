#include <stdio.h>

char *lessthan = "less than";
char *equalto = "equal to";
char *greaterthan = "greater than";

char* message(int i) {
	if (i<0) 
		return lessthan;
	else if (i==0) 
		return equalto;
	else
		return greaterthan;
}

// old code
/*int strcmp(char *s, char *t) {*/
	/*int i;*/
	/*for (i=0; s[i] == t[i]; i++)*/
		/*if (s[i] == '\0')*/
			/*return 0;*/
	/*return s[i] - t[i];*/
/*}*/

int strcmp(char *s, char *t) {
    while ((*s == *t)) 
    {
        if (*s == '\0')
        {
			return 0;
        }
        s++;
        t++;
    }
	return *s - *t;
}

int main(void) {
	char *str1 = "aaaa";
	char *str2 = "aaab";
	char *str3 = "aaac";
	printf("\"%s\" is %s \"%s\"\n",str1,message(strcmp(str1,str2)),str2);
	printf("\"%s\" is %s \"%s\"\n",str1,message(strcmp(str1,str1)),str1);
	printf("\"%s\" is %s \"%s\"\n",str3,message(strcmp(str3,str2)),str2);
}
