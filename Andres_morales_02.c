#include <stdio.h>

int main() {
    int numero;
    int resultado;

    printf("Ingresa un número: ");
    scanf("%d", &numero);

    resultado = (numero - 25) * (numero - 25);

    printf("El cuadrado del número disminuido en 25 es: %d", resultado);

    return 0;
}