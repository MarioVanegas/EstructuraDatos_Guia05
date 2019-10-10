#include <stdio.h>

int mcd(int, int);

int main(){
    /* Declaremos variables */
    int num1, num2;
    int result;

    printf("Ingrese el valor de M: ");
    scanf("%d", &num1);

    printf("Ingrese el valor de N: ");
    scanf("%d", &num2);

    // Obtenemos el resultado.
    if (num2 > num1 ){
        result = mcd(num2,num1);
    } else {
        result = mcd(num1,num2);
    }
    printf("El MCD de %d y %d es: %d", num1, num2, result);
    return 0;
}

int mcd(int m, int n) {
    if (n == 0) return m;
    return mcd(n, m%n);   // Recursividad
}