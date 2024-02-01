#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <iomanip>
#include <cmath>

#include "ordenamiento_rec_t.h"
#include "ordenamiento_t.h"

using namespace std;
using namespace std::chrono;

// Función para realizar el algoritmo de inserción
void insertion_sort(int A[], int inicio, int fin) {
    for (int i = inicio + 1; i <= fin; i++) {
        int key = A[i];
        int j = i - 1;

        while (j >= inicio && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = key;
    }
}

// Función merge modificada
void merge(int A[], int inicio, int medio, int fin) {
    int *aux = new int[fin - inicio + 1];
    int i = inicio;
    int j = medio + 1;
    int h = 0;

    while ((i <= medio) && (j <= fin)) {
        if (A[i] <= A[j]) {
            aux[h] = A[i];
            i += 1;
        } else {
            aux[h] = A[j];
            j += 1;
        }
        h += 1;
    }

    if (i > medio) {
        while (j <= fin) {
            aux[h] = A[j];
            j += 1;
            h += 1;
        }
    } else {
        while (i <= medio) {
            aux[h] = A[i];
            i += 1;
            h += 1;
        }
    }

    h = 0;
    for (int k = inicio; k <= fin; k++) {
        A[k] = aux[h];
        h += 1;
    }
    delete[] aux;
}

// Función merge_sort modificada
void merge_sort(int A[], int inicio, int fin) {
    // Si el tamaño del subarreglo es 85 o menor, usar insertion_sort
    if (fin - inicio + 1 <= 85) {
        insertion_sort(A, inicio, fin);
    } else {
        // Si no, aplicar el algoritmo de merge_sort
        int medio = (inicio + fin) / 2;
        merge_sort(A, inicio, medio);
        merge_sort(A, medio + 1, fin);
        merge(A, inicio, medio, fin);
    }
}




void intercambiar_rec(int A[], int x, int y) {
    int aux = A[x];
    A[x] = A[y];
    A[y] = aux;
}

int partition(int A[], int p, int r) {
    // A[r] es el registro elegido cuya llave será el pivote
    int pivote = A[r];
    
    // Indica el índice del último registro cuyo valor
    // es menor a pivote
    int ultimo = p - 1;

    // Se agrupan los elementos menores a pivote en las primeras
    // posiciones de A
    for (int i = p; i < r; i++) {
        if (A[i] < pivote) {
            ultimo += 1;
            intercambiar_rec(A, ultimo, i);
        }
    }

    // Y se mueve al pivote a su posición correcta
    intercambiar_rec(A, ultimo + 1, r);
    return ultimo + 1;
}

void quicksort(int A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}
