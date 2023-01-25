#include <stdio.h>

int produtoEscalar(int n, int x[], int y[]) {
    int i, produto = 0;
    for(i = 0; i < n; i++) {
        produto += x[i] * y[i];
    }
    return produto;
}

int main() {
    int n, i;
    int x[100];
    int y[100];

    printf("Insira o tamanho dos vetores: ");
    scanf("%d", &n);

    printf("Insira os elementos do vetor x: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    printf("Insira os elementos do vetor y: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }

    int resultado = produtoEscalar(n, x, y);
    printf("Produto escalar dos vetores x e y: %d\n", resultado);

    return 0;
}
