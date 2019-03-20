#include <stdio.h>
#define N 6

typedef struct{
    char nome[20];
    int estatistica;
    int matematica;
    int fisica;
} aluno;

aluno dados[]={
    {"Jonas", 82, 72, 58},
    {"Luisa", 77, 82, 79}, 
    {"Eduardo", 52, 62, 39}, 
    {"Marcos", 61, 82, 88},
    {"Marta", 85, 74, 82},
    {"Paulo", 90, 48, 77}
}; 

int main(void)
{
    int i;

    for(i=0; i<N; i++){
        printf("%s: Est = %3d  Mat = %3d   Fis = %3d\n", 
        dados[i].nome, dados[i].estatistica, dados[i].matematica, dados[i].fisica);
    }

    return (0);

}