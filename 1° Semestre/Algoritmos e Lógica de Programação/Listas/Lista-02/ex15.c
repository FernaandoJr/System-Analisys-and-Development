#include <stdio.h>

/*
Ler três notas, calcular a média e se esta for maior ou igual a 7
imprimir aprovado ou reprovado.
*/

int main () {
    float n1,n2,n3,media;

    printf("Digite 3 numeros :\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;
    if(media >= 7){
        printf("Aprovado!\n\n");
    } else{
        printf("Reprovado!\n\n");
    }
    return 0;
}