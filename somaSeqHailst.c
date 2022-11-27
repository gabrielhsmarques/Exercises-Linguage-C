/**
* Arquivo: somaSeqHailst
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 27/11/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, somaseq;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    somaseq = n;
    
    while (n != 1)
    {
        
        if (n % 2 == 1)
        {
            n = (3 * n) + 1;
            somaseq = somaseq + n;
        }
        
        if (n % 2 == 0)
        {
            n = n / 2;
            somaseq = somaseq + n;
        } 
            
    }
    printf("%d", somaseq);
    return 0;
}
