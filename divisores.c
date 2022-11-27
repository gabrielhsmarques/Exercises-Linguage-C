/**
* Arquivo: divisores
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 27/11/2022
*/

#include <stdio.h> 
#include <stdlib.h>

int main(){
    int n, i = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (i < n)
        {
            if (n % i == 0){
                printf("%d,", i);
            }
        }
        if (i == n)
        {
            printf("%d", i);
        }  
        i++;
    }
    return(0);
}