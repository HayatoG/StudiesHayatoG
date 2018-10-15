#include <stdio.h>
#include <stdlib.h>

typedef struct N{
  int valor;
  struct N *proximo;
} node;

typedef struct{
  node *primeiro;
  node *ultimo;
  int tamanho;
}Lista;

void inicializaLista(Lista *lst){
  lst->primeiro=NULL;
  lst->ultimo=NULL;
  lst->tamanho=0;
}

int vazia(Lista *lst){
  if(lst->tamanho==0){
    return 1;
  }
  return 0;
}

void inserir(Lista *lst, int valor, int posicao){
  node *no, *temp;
  if((posicao>lst->tamanho+1)&&(posicao<999)){
    printf("ERRO: posicao nao existe na lista -> ultima posicao = %d\n", lst->tamanho);
    return;
  }
  no=(node *)malloc(sizeof(node));
  no->valor=valor;
  no->proximo=NULL;
  if(vazia(lst)){
    lst->ultimo=no;
    lst->primeiro=no;
  }
  else{
    if(posicao==1){
      no->proximo=lst->primeiro;
      lst->primeiro=no;
    }
    else{
      lst->ultimo->proximo=no;
      lst->ultimo=no;
    }
  }
  lst->tamanho++;
}

void remover(Lista *lst, int valor){
  if(vazia(lst)==1){
    printf("ERRO: lista vazia\n");
    return;
  }
  int flag=0;
  node *temp;
  temp=lst->primeiro;
  if(temp->valor==valor){
    lst->primeiro=temp->proximo;
    lst->tamanho--;
  }
  else{
    while((temp->proximo!=NULL)&&(flag==0)){
      //printf("%d %d\n", temp->valor, flag);
      if(temp->proximo->valor==valor){
        printf("altera flag\n");
        flag=1;
      }
      else{
        temp=temp->proximo;
      }
    }
    //printf("%d \n", flag);
    if(flag==1){
      printf("remove elemento %d\n", temp->proximo->valor);
      temp->proximo=temp->proximo->proximo;
      if(temp->proximo==NULL){
        lst->ultimo=temp;
      }
      lst->tamanho--;
    }
    else{
      printf("O valor %d nao esta na lista\n", valor);
    }
  }
}

void imprimeLista(Lista *lst){
  node *temp;
  int i;
  temp=lst->primeiro;
  
  while(temp!=NULL){
    printf("%d ", temp->valor);
    temp=temp->proximo;
  }
  printf("\n");
}