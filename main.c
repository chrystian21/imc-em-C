#include <stdio.h>
#include <stdlib.h>

int main()
{
float altura = 0;
float peso = 0;

printf("Digite sua altura: ");
scanf("%f", &altura);
printf("Digite seu peso: ");
scanf("%f", &peso);

float imc = peso / (altura * altura) ;
printf("Seu imc eh de: %f .\n", imc);

if(imc < 18.4) {
printf("Voce esta abaixo do peso");
} else if (imc <= 24.9) {
printf("Voce esta no seu peso ideal");
} else if (imc <= 29.9) {
printf("Voce esta acima do seu peso ideal");
} else if (imc <= 34.9) {
printf("Obsidade grau 1");
} else if (imc <= 40) {
printf("Obsidade grau 2");
}
}
