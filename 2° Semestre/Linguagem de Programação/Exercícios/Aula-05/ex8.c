#include <stdio.h>
/*
Crie um programa que leia uma matriz 3x3 e imprima a sua matriz transposta 
(a matriz transposta é obtida trocando linhas por colunas).
*/
int main () {
    int matriz[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0;i < 3;i++){
        for(int j = 0; j <3;j++){
            printf("%d ",matriz[j][i]);
        }
        printf("\n");
    }
    return 0;
}