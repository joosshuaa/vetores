#include <stdio.h>

void imprimirInversa(int n, int arr[]) {
    int i;
    printf("Sequencia inversa: ");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n, num, i;
    int arr[100];

    printf("Insira o tamanho da sequencia (menor que 100): ");
    scanf("%d", &n);

    printf("Insira os numeros: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    imprimirInversa(n, arr);

    return 0;
}
