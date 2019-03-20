#include <stdio.h>
#include "lista.h"

int main(){
  Lista minhaLista;
 
  inicializaLista(&minhaLista);

  inserir(&minhaLista, 2, 1);
  imprimeLista(&minhaLista);

  inserir(&minhaLista, 15,1);
  imprimeLista(&minhaLista);

  inserir(&minhaLista, 30,999);
  imprimeLista(&minhaLista);

  //remover(&minhaLista, 30);
  //imprimeLista(&minhaLista);

  remover(&minhaLista, 15);
  imprimeLista(&minhaLista);

  remover(&minhaLista, 2);
  imprimeLista(&minhaLista);

  remover(&minhaLista, 84);

  /*inserir(&minhaLista, 30,999);
  imprimeLista(&minhaLista);
  remover(&minhaLista, 40);

  /*inserir(&minhaLista, 19, 1);
  inserir(&minhaLista, 28, 1);
  inserir(&minhaLista, 30, 999);
  inserir(&minhaLista, 12, 998);
  imprimeLista(&minhaLista);
  remover(&minhaLista, 12);
  remover(&minhaLista, 28);
  imprimeLista(&minhaLista);
  inserir(&minhaLista, 51,1);
  inserir(&minhaLista, 48, 999);
  imprimeLista(&minhaLista);
  remover(&minhaLista, 69);
  inserir(&minhaLista, 69, 999);
  inserir(&minhaLista, 27, 1);
  inserir(&minhaLista, 43, 1);
  imprimeLista(&minhaLista);*/
 
}