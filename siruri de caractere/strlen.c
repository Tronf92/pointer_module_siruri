#include <stdio.h>
#include <string.h>
#define alpha "Press a key!"
int main(void)
{

char string1[]="STRING OF CHARACTERS";
char * string2="STRING OF CHARACTERS";
int n1, n2, n3;
n1=strlen(string1);
n2=strlen(string2);
n3=strlen("STRING OF CHARACTERS");
/* The values of n1, n2 and n3 are the same, i.
e. 20 */
printf("\n n1=%d n2=%d n3=%d\n", n1, n2, n3);
printf("%s\n",alpha);
return 0;
}
