#include <stdio.h>

void recursivo(int numero){
    if (numero > 0){
        printf("%d\n", numero);
        recursivo(numero -1);
    }

}
int main () {

    int quantidade = 11;
    recursivo (quantidade);


}