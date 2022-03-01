#include <stdio.h>
#include <math.h>
main() {
int i;
float v[15];

printf("Digite Quinze Numeros \n");
for (i=0; i<15;i++) {
printf("Digite Um Numero: ");
scanf ("%f",&v[i]);

if (v[i]>=0) { 
v[i]=sqrt(v[i]); }
else
v[i]=-1;
}

for (i=0; i<15; i++) {
printf("A raiz do numero e: %f \n",v[i]);
}
}
