#include <stdio.h>

int main() {
    int i = 1;
    int j = 2;
    while (j < 6){
        i = 1;
        while(i < 11){
            printf("%d x %d = %d\n",j,i,j*i);
            i++;
        }
        j++;
        printf("\n");
    }
    return 0;
}