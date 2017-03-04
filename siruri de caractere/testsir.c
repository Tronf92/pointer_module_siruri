#include <stdio.h>
int strcmp( char *s1, char *s2){
     int i;
     for(i=0;s1[i]||s2[i];i++)
           if(s1[i]<s2[i])
               return -1;
           else
               if(s1[i]>s2[i])
                   return 1;
     return 0;
   }

int main(void)
{
char string1[]="sir de caractere";
char string2[]="sir de caractere";
if (strcmp(string1,string2)==1)
printf("sir1 mai mare");
else if (strcmp(string1,string2)==-1)
printf("sir2 mai mic");
else
printf("sunt egale");
return 0;
}
