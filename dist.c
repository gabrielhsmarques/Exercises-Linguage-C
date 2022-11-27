/**
* Arquivo: dist
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 27/11/2022
*/

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

float eucli(float x1, float y1, float x2, float y2){
    float De;
    De = sqrt(pow((x1 - x2), 2) + pow((y1 - y2),2));
    return(De);
}

int main(){
    float xA, xB, yA, yB, dist;

    printf("Digite as coordenadas x e y de A: ");
    scanf("%f %f", &xA, &yA);
    printf("Digite as coordenadas x e y de B: ");
    scanf("%f %f", &xB, &yB);

    dist = eucli(xA, yA, xB, yB);
    printf("%g", dist);

    return 0;
}