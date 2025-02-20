#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, qmax, rmin = 0,c = 0;

    printf("Digite o numero de processos:\n");
    scanf("%d", &n);            //3

    printf("Digite o numero maximo de recursos necessarios:\n");
    scanf("%d", &qmax);         //4

    for(int i = 1; i < n; i++){  //1    2
        c = qmax - 1;            // 3   2
        qmax --;                 //3    2
        rmin = rmin + c;         //3    5
    }


    printf("Recursos minimos: %d\n", rmin + 1);



    return 0;
}