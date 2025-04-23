#include <stdio.h>

// Propósito: Dirty Code - Apenas para aprendizado

void gerar_impares_compostos(int limite) {
    int m = 1, k = 0;
    
    printf("Numeros impares compostos:\n");
    
    for (int i = 0; i < limite; i++) {
        int N = (2 * m + 1) * (2 * k + 1);
        printf("%d ", N);
        
        k++; 
        if (k > m) { // Quando k alcança m, reinicia e incrementa m
            m++;
            k = 1;
        }
    }
    
    printf("\n");
}

int main() {
    int quantidade;
    
    printf("Digite a quantidade de numeros impares compostos a serem gerados: ");
    scanf("%d", &quantidade);
    
    gerar_impares_compostos(quantidade);
    
    return 0;
}
