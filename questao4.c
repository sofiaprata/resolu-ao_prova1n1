#include <stdio.h>


int main() {
    unsigned char sinal;
    int equipamento;

    printf("Digite o sinaç de 8 bits (0 a 255): ");
    scanf("%hhu", &sinal);

    printf("Digite o número do equipamento (1 a 4): ");
    scanf("%d", &equipamento);

    if (equipamento < 1 || equipamento > 4) {
        printf("Equipamento inválido!\n");
        return;
    }

    int indice = equipamento - 1; 

    int status = (sinal >> (4 + indice)) & 1; //A operação & 1 isola apenas o bit menos significativo (bit 0) após o deslocamento, pra sabermos se esta ligado ou desligado (status)

    int leitura = (sinal >> indice) & 1;

    printf("Equipamento %d - %s - %s\n",
           equipamento,
           status ? "ligado" : "desligado",
           leitura ? "alto" : "baixo");

    return 0;
}
