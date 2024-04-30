#include <stdio.h>

int main() {
    float numero;
    float mitad;
    float quintaParte;
    float resultado;

    printf("Ingrese un número: ");
    scanf("%f", &numero);

    mitad = numero / 2;
    quintaParte = numero / 5;
    resultado = mitad + quintaParte;

    printf("La mitad de %f más su quinta parte es: %f\n", numero, resultado);

    return 0;
}