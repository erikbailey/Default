#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
 * Partition using Lomuto scheme.
 * Picks the last element as pivot, places it in its correct sorted position,
 * and arranges all smaller elements before it and all greater elements after it.
 * Returns the final index of the pivot.
 */
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

/*
 * Recursively sorts arr[low..high] in place.
 */
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1)
            printf(" ");
    }
    printf("\n");
}

int main(void) {
    int arr[] = {10, 7, 8, 9, 1, 5, 3, 4, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted: ");
    print_array(arr, n);

    quicksort(arr, 0, n - 1);

    printf("Sorted:   ");
    print_array(arr, n);

    return 0;
}
