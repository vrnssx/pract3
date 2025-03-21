#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], size_t size) {
    if (size == 0) {
        return true;
    }

    for (size_t i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size)) {
        printf("Масив впорядкований.\n");
    } else {
        printf("Масив не впорядкований.\n");
    }

    return 0;
}