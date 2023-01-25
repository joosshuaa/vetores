#include <stdio.h>

void contarOcorrencias(int n, int arr[]) {
    int i, j;
    int contador[6] = {0};
    for(i = 0; i < n; i++) {
        contador[arr[i]-1]++;
    }
    for(i = 0; i < 6; i++) {
        printf("Face %d: %d ocorrencias\n", i+1, contador[i]);
    }
}

int main() {
    int n, num, i;
    int arr[100];

    printf("Insira o numero de lancamentos: ");
    scanf("%d", &n);

    printf("Insira o resultado de cada lancamento: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    contarOcorrencias(n, arr);

    return 0;
}
