#include <stdio.h>
int main() {
    //primero declaramos una matriz de dos dimensiones
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    //luego ponemos la matriz con dos bucles e imprimimos las direcciones de memoria
    printf("direcciones de los elementos de la matriz:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("mat[%d][%d] = %d, Dirección: %p\n", i, j, mat[i][j], (void*)&mat[i][j]);
        }
    }

    return 0;
}
