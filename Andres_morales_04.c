#include <stdio.h>

int main() {
    int numero1, numero2;
    int suma, resultado;

    printf("Ingresa el primer número: ");
    scanf("%d", &numero1);
    printf("Ingresa el segundo número: ");
    scanf("%d", &numero2);

    suma = numero1 + numero2;
    resultado = suma * suma;

    printf("El cuadrado de la suma de los dos números es: %d", resultado);

    return 0;
}