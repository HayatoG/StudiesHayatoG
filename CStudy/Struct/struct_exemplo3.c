//*** exemplo 3 *** //

/** Neste exercicio vamos acrescentar mais um campo na struct para determinar a nota em termos de uma letra, conforme a media do aluno, de acordo com a tabela dada abaixo:
90<= media <=100 - S
80<= media < 90  - A
70<= media < 80  - B
60<= media < 70  - C
media < 60       - D

vamos modificar o codigo do exercício anterior para acrescentar a nota de letra **/

#include <stdio.h>
#define N 6

struct aluno{
    char nome[20];
    int estatistica;
    int matematica;
    int fisica;
    float media;
    char nota; 
};

static struct aluno dados[]={
    {"Jonas", 82, 72, 58, 0.0},
    {"Luisa", 77, 82, 79, 0.0}, 
    {"Eduardo", 52, 62, 39, 0.0}, 
    {"Marcos", 61, 82, 88, 0.0},
    {"Marta", 85, 74, 82, 0.0},
    {"Paulo", 90, 48, 77, 0.0}
}; 

int main(void)
{
    int i;
    float media;

    for(i=0; i<N; i++){
        media=(dados[i].estatistica+dados[i].matematica+dados[i].fisica)/3.0;
        if (media >= 90){
          dados[i].nota='S';
        }
        else if (media >= 80){
          dados[i].nota='A';
        }
        else if (media >= 70){
          dados[i].nota='B';
        }
        else if (media >= 60){
          dados[i].nota='C';
        }
        else{
          dados[i].nota='D';
        }
        dados[i].media=media;
    }

    for(i=0; i<N; i++){
        printf("%7s: Est = %3d  Mat = %3d   Fis = %3d  -  Media = %4.1f - NOTA = %3c\n", 
        dados[i].nome, dados[i].estatistica, dados[i].matematica, dados[i].fisica, dados[i].media, dados[i].nota);
    }

    return (0);

}