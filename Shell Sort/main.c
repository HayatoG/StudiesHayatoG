#include <stdio.h>

void shellSort(int *vetor, int tamanho) {
    int i , j , value;
    int gap = 1;
    while(gap < tamanho) {
        gap = 3*gap+1;
    }
    while ( gap > 1) {
        gap /= 3;
        for(i = gap; i < tamanho; i++) {
            value = vetor[i];
            j = i;
            while (j >= gap && value < vetor[j - gap]) {
                vetor[j] = vetor [j - gap];
                j = j - gap;
            }
            vetor [j] = value;
        }
    }
}

int main(){

    int vetor[10];
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    for(int i=0; i < tamanho; i++){
        printf("Digite o %dº número: ", i);
        scanf("%d", &vetor[i]);
    }

    shellSort(vetor, tamanho);

    for(int i=0; i < tamanho; i++){
    //printf("Vetor: ");
    printf("%d \n", vetor[i]);
    }
}