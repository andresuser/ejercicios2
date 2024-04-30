#include <stdio.h>
#include <math.h>

int main() {
    int numero1, numero2;
    int diferencia, resultado;

    printf("Ingresa el primer número: ");
    scanf("%d", &numero1);
    printf("Ingresa el segundo número: ");
    scanf("%d", &numero2);

    diferencia = numero1 - numero2;
    resultado = pow(diferencia, 2);

    printf("El cuadrado de la diferencia de los dos números es: %d", resultado);

    return 0;
}