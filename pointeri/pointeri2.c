#include <stdio.h>
#include <stdlib.h>
int main(){
  float real=5.6, *preal;
  preal=&real;
  *preal+=3;
   printf(" Numarul=%f \nLungimea numarului=%d \nAdresa numarului=%p \Valoarea cu *p=%f\n", real, sizeof(preal),preal,*preal);
   printf("Adresa adresei= %p",&preal);
   return 0;
}

