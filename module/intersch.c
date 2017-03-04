#include <stdio.h>
#include <stdlib.h>


 void intersch_er(int x,int y){ //functia primeste valorile de interschimbat
  int t=x;
  x=y;
  y=t;
}

void intersch_ok(int* px,int* py){ //functia primeste pointerii la
                                   //variabilele de interschimbat
  int t=*px;
  *px=*py;
  *py=t;
}

int citire(char * nume){
  int aux;
  printf("%s=",nume);
  scanf("%d",&aux);
  return aux;
}

void main(void){
  int a,b;

  a=citire("a");
  b=citire("b");

  intersch_er(a,b);
  printf("dupa prima functie:a=%d,b=%d\n",a,b);
  intersch_ok(&a,&b);
  printf("dupa a doua functie:a=%d,b=%d\n",a,b);
return 0;
}
