/**
* Arquivo: somaPrimos
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 27/11/2022
*/

#include <stdio.h>
#include <stdlib.h>

int primo(int i){
    int defprimo = 0, j;
    for (j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
            defprimo++;
            break;
        }
    }
    if (defprimo == 0){
        return i;
    }
    
}

int main(){
    int menor, maior, nprimo, i, sumprimo = 0;
    printf("Digite o intervalo do menor para o maior numero: ");
    scanf("%d %d", &menor, &maior);

    for (i = menor; i <= maior; i++){
        nprimo = primo(i);
        if (nprimo != 0)
        {
            sumprimo = sumprimo + nprimo;
        }
        
    }
    printf("%d", sumprimo);

    return(0);
}