#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_sorted(int arr[], int size, bool ascending) {
    for (int i = 0; i < size - 1; i++) {
        if (ascending ? arr[i] > arr[i+1] : arr[i] < arr[i+1]) return false;
    }
    return true;
}

int main() {
    int size;
    printf("Розмір вектора: ");
    if (scanf("%d", &size) != 1 || size <= 0) return 1;

    int *arr = malloc(size * sizeof(int));
    if (!arr) return 1;

    printf("Елементи (%d): ", size);
    for (int i = 0; i < size; i++) 
        if (scanf("%d", &arr[i]) != 1) { free(arr); return 1; }

    if (is_sorted(arr, size, true)) printf("За зростанням\n");
    else if (is_sorted(arr, size, false)) printf("За спаданняm\n");
    else printf("Не упорядкований\n");

    free(arr);
    return 0;
}
