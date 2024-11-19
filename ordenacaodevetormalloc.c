#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_CHARS 64

int main(){

int tamanho = 3;
int aux=0;
int* p = malloc(tamanho*sizeof(int));

if (p == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; 
    }

    for(int i=0; i < tamanho; i++){
        printf("Digite o elemento %d: ", i); 
    	scanf("%d", (p+i));
    }
    
    
    for (int x = 0; x < tamanho - 1; x++) {
        for (int y = 0; y < tamanho - x - 1; y++) {
            if (p[y] > p[y + 1]) {
                aux = p[y];
                p[y] = p[y + 1];
                p[y + 1] = aux;
            }
        }
    }
    
printf("o vetor ordenado e: \n");
printf(" P[0]: %d\n  ", p[0]);
printf(" P[1]: %d\n  ", p[1]);
printf(" P[2]: %d\n  ", p[2]);
  
free(p);
return 0;
    
}