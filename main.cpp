#include <stdio.h>

int calcular_termino(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main() {
    int n;
    int continuar = 1;

    while (continuar == 1) {
        printf("Ingrese un número entero positivo (diferente de cero): ");
        scanf("%d", &n);

        if (n > 0) {
            printf("Sucesión: ");
            for (int i = 1; i <= n; i++) {
                if (i > 1) {
                    printf(", ");
                }
                printf("%d", calcular_termino(i));
            }
            printf("\n");
        } else {
            printf("El número ingresado no es válido. Por favor, intente nuevamente.\n");
        }

        printf("¿Desea continuar? (1 = sí, otro número = no): ");
        scanf("%d", &continuar);
    }

    return 0;
}