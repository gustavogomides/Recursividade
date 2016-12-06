#include <stdio.h>
int multi(int a, int b) {
    if (b==1) return a;
    return a+multi(a, b-1);
}
int main () {
    int a, b;
    printf ("Digite o valor de A: ");
    scanf ("%d", &a);
    printf ("Digite o valor de B: ");
    scanf ("%d", &b);
    printf ("\nO resultado de %d x %d eh: %d\n", a, b, multi(a, b));
    return 0;
}
