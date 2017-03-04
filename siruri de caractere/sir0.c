#include <stdio.h>



void main(void){

    int i,*pi;
float f;
  i=3; pi=&i; // variabila pi se initializeaza cu adresa var i
    // linia de mai sus este echivalenta cu:
    // pi=&i; *pi=3;

    f=-5;
  printf("i=%d,f=%f,val=%d,pi=%p,adr_i=%p,adr_pi=%p,adr_f=%p\n",i,f,*pi,pi,&i,&pi,&f);

  /* sizeof aplicat unor expresii de tip pointer */
  printf("%d %d %d %d %d %d %d\n",sizeof(int *),sizeof(char *),sizeof(float *),sizeof(&i),sizeof(pi), sizeof(&pi),sizeof(&f));

  pi=&f; /* adresa lui f e convertita implicit la pointer la intreg*/
  printf("%p %p %p %p %p %p\n",&i,&i+1,pi,pi+1,&f,&f+1); // tipariri de pointeri
  getche();
}
