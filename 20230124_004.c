#include <stdio.h>

void calcularFatorial(int n, int arr[]) {
    int i, j, fat;
    for(i = 0; i < n; i++) {
        fat = 1;
        for(j = arr[i]; j > 1; j--) {
            fat *= j;
        }
        arr[i] = fat;
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

    calcularFatorial(n, arr);
    printf("Sequencia com fatoriais: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
