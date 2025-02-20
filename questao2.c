#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MX 100

int main (){
    int distX, distY, xa,xb,ya,yb,c,max = 0;

    srand(time(NULL));

    xa = rand() % MX;
    xb = rand() % MX;
    ya = rand() % MX;
    yb = rand() % MX;

    distX = abs(xb) - abs(xa);
    distY = abs(yb) - abs(ya);

    if(distX > distY && distX > max){
        c = max;
        max = distX;
    }else if (distY> distX && distY >max){
        c = max;
        max = distY;
    }
    
    printf("Ponto A: x -> %d   y _> %d\n", xa, ya);
    printf("Ponto B: x -> %d   y _> %d\n", xb, yb);
    printf("Distancia em x: %d\n", distX);
    printf("Distancia em y: %d\n", distY);
    printf("Maior valor das distancias:%d\n", max);

    return 0;
}