/**
* Arquivo: areaTriRet
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
    float xA, yA, xB, yB, xC, yC, areaT, db, dh;
    printf("Digite as coordenadas (x,y) de A: ");
    scanf("%f %f", &xA, &yA);
    printf("Digite as coordenadas (x,y) de B: ");
    scanf("%f %f", &xB, &yB);
    printf("C tem as coordenadas (%g,%g)", xB, yA);

    xC = xB;
    yC = yA;

    db = eucli(xA, yA, xC, yC);
    dh = eucli(xC, yC, xB, yB);

    areaT = (db * dh)/2;

    printf("\n%g", areaT);

    return 0;
}