#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main()

{
int vetorA[N], vetorB[N], vetorC[N], i;

srand(time(NULL));

for(i=0; i<N; i++){
vetorA[i] = rand()%10;
printf(“VetorA[%d] = %2d\n”, i, vetorA[i]);
}

Printf(“\n----------------------\n”);

For(i=0; i<N; i++){
vetorB[i] = rand()%10;
printf(“VetorB[%d] = %2d\n”, i, vetorB[i]);
}

Printf(“\n----------------------\n”);

For(i=0; i<N; i++){
vetorC[i] = vetorA[i] + vetorB[i];
printf(“VetorC[%d] = %2d\n”, i, vetorC[i]);
}
}