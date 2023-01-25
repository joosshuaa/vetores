#include <stdio.h>

void selectionSort(int n, int arr[]) {
    int i, j, min_index, temp;
    for (i = 0; i < n-1; i++) {
        min_index = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

int main() {
    int n, i;
    int arr[100];

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(n, arr);

    printf("matriz classificada: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
