#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
int vetorA[N], vetorB[N], i;

srand(time(NULL));

  for(i=0; i<N; i++){
  vetorA[i] = rand()%10;
  printf(“VetorA[%d] = %2d\n”, i, vetorA[i]);
  }

 printf(“\n----------------------\n”);

 for(i=0; i<N; i++){
    if(vetorA[i]%2==0){
    vetorB[i] = vetorA[i];
    printf(“VetorB[%d] = %2d\n”, i, vetorB[i]);
    }
 }
}