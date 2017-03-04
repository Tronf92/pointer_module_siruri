#include <stdio.h>
#include <string.h>
int main(void)
{
char string1[]="SIR DE CHARACTERE";
char *string2="SIR DE CHARACTERE";
char string3[100], string4[100], string5[100];
strcpy(string3, string1);
printf("\nstring3: %s\n", string3);
strcpy(string4, "UN SIR STANDARD DE CARACTERE");
printf("\nstring4: %s\n", string4);
strncpy(string5, string2, 9); /* string5 CONTINE SIR 9 caractere */
printf("\nstring5: %s\n", string5);
string5[6]='\0';
printf("\nstring5: %s\n", string5);
return 0;
}
