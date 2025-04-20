#include <stdio.h>
#include <math.h>

unsigned int gerar_impar_composto(int i) {
    int m = (int)floor((1 + sqrt(1 + 8.0 * i)) / 2.0);
    int k = i - (m * (m - 1)) / 2 + 1;
    return (2 * m + 1) * (2 * k + 1);
}

int main() {
    int quantidade;
    printf("Quantos números ímpares compostos deseja gerar? ");
    scanf("%d", &quantidade);

    printf("Gerando %d números ímpares compostos:\n", quantidade);

    for (int i = 0; i < quantidade; i++) {
        unsigned int n = gerar_impar_composto(i);
        printf("[%02d] %u\n", i, n);
    }

    return 0;
}
