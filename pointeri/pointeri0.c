#include <stdio.h>
#include <stdlib.h>

int main()
{
int  i, * p;
printf("Lungimea intregului=%d \n lungimea pointerului=%d \n lungimea adresei &i= %d \n  lungimea int *= %d",sizeof(i),sizeof(p),sizeof(&i),sizeof(int *));
printf("\n adresa lui i = %p ",&i);
printf("\n si acum pointerii\n");
i=111;
p=&i;
printf("Valoarea =%d\n",i);
printf("Valoarea cu *p =%d\n",*p);
printf("Adresa cu p =%p\n",p);
printf("Adresa pointerului(cu &p) =%p\n",&p);
return 0;
}
