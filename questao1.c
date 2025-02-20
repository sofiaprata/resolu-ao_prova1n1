#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    int casas_decimais, sinal = 1, denominador = 1;
    float termo, pi = 0;

    printf("Digite a quantidade de casas decimais:\n");
    scanf("%d", &casas_decimais);

    for (int i = 1; i < casas_decimais; i++){
        termo = sinal/denominador;      // termo = 1   -1/3     1/5
        pi = pi + termo;                //pi = 1    1 - 1/3     1 - 1/3 + 1/5
        sinal = (sinal == 1)? -1 : 1;                 //sinal = -1    1       -1
        denominador = denominador + 2;  //denominador = 3   5   7
    }

    pi = 4 * pi;

    printf("Valor de pi: %.2f\n", pi);

    return 0;
}
