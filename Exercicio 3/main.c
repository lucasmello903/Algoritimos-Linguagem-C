#include <stdio.h>

main () {
	
int i, v[50], somapar, somaimp, maiorpar, menorimp, par, imp;
float mediapar, mediaimp;
somapar=0;
somaimp=0;
maiorpar=0;
menorimp=0;
par=0;
imp=0;
for (i=0; i<50; i++) {
printf ("Digite os Numeros: \n");
scanf ("%d",&v[i]);
if (v[i]%2==0) {
if (v[i]>maiorpar || i==0){
maiorpar=v[i];
 }
somapar=somapar+v[i];
par++;
 } else {
if (v[i]<menorimp || i==0){
 menorimp=v[i];
 }
somaimp=somaimp+v[i];
imp++;
 }
 } 
if (par != 0){
printf ("maior par: %d \n", maiorpar);
mediapar= somapar/par;
printf ("A media par e: %f \n", mediapar);
for (i=0; i<50; i++){
if (v[i]%2==0 && v[i]>mediapar){
printf ("Valores pares maior que a media: %d\n",v[i]);
 }
 }
 }
if (imp != 0) {
printf ("menor impar: %d \n", menorimp);
mediaimp= somaimp/imp;
printf ("A media impar e: %f \n", mediaimp);
for (i=0; i<50; i++) {
if (v[i]%2==1 && v[i]<mediaimp) {
printf ("Valores impares menores que a media: %d \n",v[i]);
 }
 }
 }
}

