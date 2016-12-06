#include <stdio.h>
int potencia (int b, int e) {
    if (e==0) return 1;
    if (e==1) return b;
    return b*potencia(b, e-1);
}
int main () {
    int b, e, i, n;
    printf ("Digite a quantidade de numeros: ");
    scanf ("%d", &n);
    for (i=0; i<n; i++) {
        printf ("\nDigite o valor da base: ");
        scanf ("%d", &b);
        printf ("Digite o valor do expoente: ");
        scanf ("%d", &e);
        printf ("Potencia (%d^%d)= %d\n\n", b, e, potencia(b, e));
    }
    return 0;
}
