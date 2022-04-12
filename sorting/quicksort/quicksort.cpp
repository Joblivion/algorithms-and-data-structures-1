#include "quicksort.hpp"

void quickSort(int lista[], int p, int r) {
    if (p < r) {
        int q;
        q = partition(lista, p, r);
        quickSort(lista, p, q-1);
        quickSort(lista, q+1, r);
    }
}

int partition(int lista[], int p, int r) {
    int i, j, x, y, z;

    i = p;
    x = lista[i];
    lista[i] =lista[r];
    i = p;

    while (i < r && lista[i] <= x) {
        i++;
    }
    if (i < r) {
        j = i+1;
        while (j < r) {
            if (lista[j] < x) {
                swap(&lista[i], &lista[j]);
                i++;
            }
            j++;
        }
        lista[r] = lista[i];
        lista[i] = x;

    } else {
        lista[r] = x;
    }

    return i;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
  