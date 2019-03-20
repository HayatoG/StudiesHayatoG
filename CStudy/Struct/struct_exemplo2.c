//*** exemplo 2 *** //

/** Neste exercicio vamos acrescentar um campo na struct para determinar a media
 entre as disciplinas cursadas por cada aluno **/

#include <stdio.h>
#define N 6

struct aluno{
    char nome[20];
    int estatistica;
    int matematica;
    int fisica;
    float media;
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

    for(i=0; i<N; i++){
        dados[i].media=(dados[i].estatistica+dados[i].matematica+dados[i].fisica)/3.0;
    }

    for(i=0; i<N; i++){
        printf("%7s: Est = %3d  Mat = %3d   Fis = %3d  -  Media = %4.1f\n", 
        dados[i].nome, dados[i].estatistica, dados[i].matematica, dados[i].fisica, dados[i].media);
    }

    return (0);

}