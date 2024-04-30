#include <stdio.h>

int main() {
    int x, y, z;
    int cuadradoX, cuadradoY, cuboZ;
    int resultado;

    printf("Ingresa el valor de x: ");
    scanf("%d", &x);
    printf("Ingresa el valor de y: ");
    scanf("%d", &y);
    printf("Ingresa el valor de z: ");
    scanf("%d", &z);

    cuadradoX = x * x;
    cuadradoY = y * y;
    cuboZ = z * z * z;

    resultado = cuadradoX + cuadradoY + cuboZ;

    printf("El resultado de calcular el cuadrado de x más el cuadrado de y más el cubo de z es: %d", resultado);

    return 0;
}