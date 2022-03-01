#include <stdio.h>
main () {
int dias, i;
float maior, media, soma, menor, vetor[121];
printf("Digite uma temperatura Entre 15 e 40 \n");
for(i=0;i<121;i++) {
printf("Digite a temperatura: ");
scanf("%f",&vetor[i]);
if(vetor[i]<15 || vetor[i]>40) {
printf("Temperatura Errada \n");
}
if((vetor[i] < menor) || (i==1)) {
menor=vetor[i];
}
if(vetor[i] > maior ) {
maior=vetor[i];
}
soma=soma+vetor[i];
}
media=soma/121;
for(i=0; i<121; i++) {
if(vetor[i]<media) {
dias=dias+1;
}
}
printf("Media de Temperatura: %f \n", media);
printf("Menor Temperatura: %f \n",menor);
printf("Maior Temperatura: %f \n",maior);
printf("Dias com Temperaturas abaixo da Media: %d \n",dias);
}

