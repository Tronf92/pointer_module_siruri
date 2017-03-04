#include <stdio.h>
#include <stdlib.h>

void citire(int * tab,int dm,int * dc,char * nume){
 //citeste tabloul de intregi, de dimensiune maxima dm, cu numele nume, si in dc se pasrteaza nr de elemente citite
 int i;
  printf("Tastati elementele tabloului %s (max %d sau terminati cu CTRL/Z):\n",
          nume,dm);
  for(i=0;i<dm;i++)
    if(scanf("%d",&tab[i])==EOF)break;
  *dc=i; // numarul de elemente citite
}
void citire1(int tab[],int dm,int * dc,char * nume){
 //citeste tabloul de intregi, de dimensiune maxima dm, cu numele nume, si in dc se pasrteaza nr de elemente citite
 int i;
  printf("Tastati elementele tabloului %s (max %d sau terminati cu CTRL/Z):\n",
          nume,dm);
  for(i=0;i<dm;i++)
    if(scanf("%d",&tab[i])==EOF)break;
  *dc=i; // numarul de elemente citite
}
void tiparire(int * tab,int dc,char * nume){ // functia primeste adresa tabloului, numarul de
                                        // elemente citite si numele tabloului
  int i;
  printf("Elementele tabloului %s\n",nume);
  for(i=0;i<dc;i++)
    printf("%d ",tab[i]);
  putchar('\n');
}
void Max_min1(int dc, int tab[], int *max, int* min)
{
int i;
*max=tab[0];
*min=tab[0];
for (i=1; i<dc; i++)
  {
    if (tab[i]>*max) *max=tab[i];
    else if (tab[i]< *min) *min=tab[i];
  }
}
void Max_min2(int dc, int *tab, int *max, int *min)
{
int i;
*max=tab[0];
*min=tab[0];
for (i=1; i<dc; i++)
  {
    if (tab[i]>*max) *max=tab[i];
    else if (tab[i]< *min) *min=tab[i];
  }
}
int main()
{
int t1[15],t2[30],t3[40],d1,d2,d3,max,min;
citire(t1,15,&d1,"t1");
//Max_min1(d1,t1, &max,&min);
//printf("minimul sirului este %d \n maximul sirului este %d\n iar initial ",min,max);
tiparire(t1,d1,"t1");
citire(t2,30,&d2,"t2");
tiparire(t2,d2,"t2");
return 0;
}
