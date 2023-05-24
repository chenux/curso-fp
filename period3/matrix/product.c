#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Filas y columnas de la matriz ma
    const int af = 3; // Filas de ma
    const int ac = 3; // Columnas de ma

    // Filas y columnas de la matriz mb
    const int bf = 3; // Filas de mb
    const int bc = 3; // Columnas de mb


    // Verificar si el número de columnas de ma es igual al número de filas de mb
    if (bf != ac) {
        // Salir del programa si la multiplicación no es posible
        return 0;
    }
  

    // Declarar las matrices ma, mb y mr
    int ma[af][ac];
    int mb[bf][bc];
    // Declarar la matriz resultante mr
    int mr[af][bc];

    for (int i = 0; i < af; i++) 
      for (int j = 0; j < ac; j++) 
        ma[i][j] = rand() % 5;
    
    for (int i = 0; i < bf; i++) 
      for (int j = 0; j < bc; j++) 
        mb[i][j] = rand() % 6;
  
    // Realizar la multiplicación de matrices
    for (int i = 0; i < af; i++) {
        for (int j = 0; j < bc; j++) {
            // Inicializar el elemento mr[i][j] como 0
            mr[i][j] = 0;
            // Realizar la multiplicación y acumulación de los elementos
            for (int k = 0; k < ac; k++) {
                mr[i][j] += ma[i][k] * mb[k][j];
            }
        }
    }

    // Imprimir la matriz resultante mr
    printf("\n");
    for (int i = 0; i < af; i++) {
        for (int j = 0; j < bc; j++) {
            // Imprimir cada elemento con un ancho de 4 caracteres
            printf("%4d", mr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
