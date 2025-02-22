#include <stdio.h>

int main() {
    int arr[5] = {1,2 ,3 ,4 ,5 }; 
    
    printf("elemento\tdireccion\t	diferencia\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] \t %p", i, (void*)&arr[i]);
        
        
        if (i > 0) {
            printf(" \t %ld", (char*)&arr[i] - (char*)&arr[i-1]);
        }
        printf("\n");
    }
    
    return 0;
}
