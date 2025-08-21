#include <stdio.h>

void bispo(int numero){
    if (numero > 0){
        printf("Direita\n");
        printf("Cima\n");
        bispo(numero - 1);
    }

}

int main () {
printf("Bispo movimenta para:\n");

    int movbispo = 5;
    bispo (movbispo);
    int movL = 1;
    int rainha = 8;

printf("\n");
printf("Cavalo movimenta para:\n");
        while (movL--)
    {
        for (int mov = 0; mov < 2; mov++){
        printf("Cima\n");
    }
        printf("Direita\n");
    }

printf("\n");
printf("Rainha movimenta para:\n");
    do
    {
    printf("Esquerda\n");
    (rainha--);
    } while (rainha > 0);

printf("\n");
printf("Torre movimenta para:\n");

    for (int movTorre = 5; movTorre > 0; movTorre--)
    {
    printf("Direita\n");
    }

    return 0;
}
