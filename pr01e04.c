#include <stdio.h>

int main() {
    //primero declaramos una matriz de dos dimensiones
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    //imprimimos las direcciones de mat, mat[0] y &mat[0][0]
    printf("direccion de mat       : %p\n", (void*)mat);
    printf("direccion de mat[0]    : %p\n", (void*)mat[0]);
    printf("direccion de &mat[0][0]: %p\n", (void*)&mat[0][0]);

    // luego mostramos las direcciones de los elementos que conforman a la matriz
    printf("\nDireccion de los elementos de la matriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("mat[%d][%d] = %d, Dirección: %p\n", i, j, mat[i][j], (void*)&mat[i][j]);
        }
    }

    return 0;
}
