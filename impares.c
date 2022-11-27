/**
* Arquivo: impares
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 27/11/2022
*/

#include <stdio.h> 
#include <stdlib.h>

int main(){
    int menor, maior, i, aux;
    printf("Digite o intervalo do menor para o maior numero: ");
    scanf("%d %d", &menor, &maior);

    if (menor > maior)
    {
        printf("Ordem do intervalo esta incorreta");
    }
    if (menor < maior)
    {
        aux = maior - 2;
        for (i = menor; i <= maior; i++)
        {
            if (i < maior - 2){
                if (i%2 != 0){
                    printf("%d, ", i); 
                }
            }
            if (i > aux){
                if (i%2 != 0){
                    printf("%d. ", i);    
                
                }
            }
            
        }
        
    }
    return 0;
}
