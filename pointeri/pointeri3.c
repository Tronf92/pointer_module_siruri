#include <stdio.h>
int *pi; // pi este variabila statica

void main(void){

  pi=(int *)malloc(sizeof(int));
  if(pi==NULL){
    puts("*** Memorie insuficienta ***");
    return; // revenire din main
  }

  printf("valoare:");
  scanf("%d",pi);  // citirea variabilei dinamice, de pe heap, de la adresa din pi!!!
  printf("\n am citit valoarea=%d",*pi);
  printf("\n s-a memorat la adresa=%p",pi);
  printf("\nVom  inmultit cu 2\n");
  *pi*=2; // dublarea valorii

  printf("val=%d,\npi(adresa pe heap)=%p,\nadr_pi(var statica-&p)=%p\n",
      *pi,   pi,   &pi);

  /* sizeof aplicat unor expresii  */
 // printf("%d %d %d\n",sizeof(*pi), sizeof(pi), sizeof(&pi));

  free(pi); //eliberare spatiu

  printf("pi(dupa elib-INVALIDA):%p\n iar valoarea %d",pi,*pi); // nemodificat, dar invalid
  printf("\n adresa statica dupa elib &p%p",&pi);

}
