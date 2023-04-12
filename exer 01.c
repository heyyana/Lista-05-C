#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()

{

int vetor[N], i, maior, menor, soma=0, impar;

srand(time(NULL));

maior = vetor[0];
menor = vetor[0];

for(i=0; i<N; i++){
vetor[i] = rand()%10;
printf("Vetor[%d] = %2d\n", i, vetor[i]);
soma += vetor[i];
if(vetor[i]<menor){
menor= vetor[i];
}
if(vetor[i]>maior){
maior = vetor[i];
}
}

printf("\n----------------------\n");

printf("Maior: %2d \n", maior);
printf("Menor: %2d \n", menor);
printf("Soma: %2d \n", soma);

printf("\n----------------------\n");

for(i=0; i<N; i++){
if(vetor[i]%2==0){
printf("Par: %2d\n", vetor[i]);
} else
printf("Impar ao quadrado: %2d\n", vetor[i]*vetor[i]);
}

printf("\n----------------------\n");

for(i=0; i<N; i++){
vetor[i] = 2*vetor[i];
printf("Valores dobrados: Vetor[%d] = %2d\n", i, vetor[i]);
}

}