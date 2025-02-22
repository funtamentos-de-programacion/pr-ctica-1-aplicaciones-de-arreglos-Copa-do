#include <stdio.h>

int main() {
    
    int arr[3] = {1, 2, 3}; //primero definimos un arreglo de 3 enteros

    //luego buscamos imprimir las direcciones de arr y &arr[0]
    printf("direccion arr (arr): %p\n", (void*)arr);
    printf("direccion primer arr (&arr[0]): %p\n", (void*)&arr[0]);
    return 0;
}
