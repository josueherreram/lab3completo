#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS  5
#define COLUMNAS 5

// Función para encontrar la secuencia más larga de 1s en una matriz cuadrada binaria
int encontrarSecuenciaMasLarga(int matriz[FILAS][COLUMNAS]) {
    int secuenciaMasLarga = 0;
    int secuenciaActual = 0;

    // Recorrer la matriz
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            // Si el elemento actual es 1
            if (matriz[i][j] == 1) {
                // Incrementar la secuencia actual
                secuenciaActual++;

                // Si la secuencia actual es más larga que la secuencia más larga encontrada hasta ahora
                if (secuenciaActual > secuenciaMasLarga) {
                    // Actualizar la secuencia más larga
                    secuenciaMasLarga = secuenciaActual;
                }
            } else {
                // Si el elemento actual es 0, resetear la secuencia actual
                secuenciaActual = 0;
            }
        }
    }

    // Recorrer la matriz de nuevo para encontrar secuencias que continúen en la siguiente fila
    for (int i = 0; i < FILAS - 1; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            // Si el elemento actual es 1 y el elemento de la siguiente fila es también 1
            if (matriz[i][j] == 1 && matriz[i + 1][j] == 1) {
                // Incrementar la secuencia actual
                secuenciaActual++;

                // Si la secuencia actual es más larga que la secuencia más larga encontrada hasta ahora
                if (secuenciaActual > secuenciaMasLarga) {
                    // Actualizar la secuencia más larga
                    secuenciaMasLarga = secuenciaActual;
                }
            } else {
                // Si el elemento actual es 0 o el elemento de la siguiente fila es 0, resetear la secuencia actual
                secuenciaActual = 0;
            }
        }
    }

    // Devolver la secuencia más larga encontrada
    return secuenciaMasLarga;
}

int main() {
    int matriz[FILAS][COLUMNAS];
    int i, j;

    // Inicializa la semilla para la función rand
    srand(time(NULL));

    // Llena la matriz de manera aleatoria
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            matriz[i][j] = rand() % 2; // 0 o 1
        }
    }

    // Imprime la matriz
    printf("Matriz aleatoria:\n");
    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Encuentra la secuencia más larga de 1s
    int secuenciaMasLarga = encontrarSecuenciaMasLarga(matriz);

    // Imprime el resultado
    printf("La secuencia más larga de 1s es: %d\n", secuenciaMasLarga);

    return 0;
}
