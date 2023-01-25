#include <stdio.h>

void obterNumerosPares(int n, int arr[], int arrPares[], int *tamanhoArrPares) {
    int i, j = 0;
    for(i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arrPares[j] = arr[i];
            j++;
        }
    }
    *tamanhoArrPares = j;
}

int main() {
    int n, num, i;
    int arr[100];
    int arrPares[100];
    int tamanhoArrPares;

    printf("Insira o tamanho da sequencia (menor que 100): ");
    scanf("%d", &n);

    printf("Insira os numeros: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    obterNumerosPares(n, arr, arrPares, &tamanhoArrPares);
    printf("Numeros pares: ");
    for(i = 0; i < tamanhoArrPares; i++) {
        printf("%d ", arrPares[i]);
    }

    return 0;
}
