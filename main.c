#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "forca.h"
void exibe()
{
    printf("Desenvolvido por:\nGustavo Felipe Beck 18133");
    printf("\nLucas Miranda 18567\n\n");
}

int main()
{
    exibe();
    NoSecreto * lstSecreta = inicializaListaSecreta();
    NoSecreto * sorteada;
    NoSecreto * usadas = inicializaListaSecreta();
    lstSecreta = carregaListaArquivo(lstSecreta,"palavras.dat");
    imprimeListaSecreta(lstSecreta);

      do{
        system("cls");
        exibe();
        imprimeListaSecreta(lstSecreta);

        sorteada= sorteiaPalavra(lstSecreta);
        if(sorteada!=NULL){
            printf("%s\n", sorteada->palavra);
            lstSecreta = retiraUmElemento(lstSecreta,sorteada->palavra);
        }else{
            printf("Nao existe palavra disponivel!\n\n");
        }
    }while(getchar()!='f');






    return 0;
}
