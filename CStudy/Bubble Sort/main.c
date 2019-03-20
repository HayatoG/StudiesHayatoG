#include <stdio.h>

void bubbleSort(int* vetor, int tamanho) {
	int i, j, temp;

	for (i = 0; i < tamanho - 1; i++){
        for (j = (i+1); j < tamanho; j++){
            if (vetor[j] < vetor[i]){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main(){

    int vetor[10];
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    printf("\n");

    for(int i=0; i < tamanho; i++){
        printf("Digite o 1º número: ");
        scanf("%d", &vetor[i]);
    }

    printf("\n");

    bubbleSort(vetor, tamanho);

    for(int i=0; i < tamanho; i++){
        printf("Posição %d de valor %d\n", i, vetor[i]);
    }

}