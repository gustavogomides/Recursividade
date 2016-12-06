#include <stdio.h>
int fatr(int n) {
    if (n==1) return 1;
    return n*fatr(n-1);
}

int main () {
    int n;
    printf ("Digite o numero: ");
    scanf ("%d", &n);
    printf ("  %d! = %d\n", n, fatr(n));
    return 0;
}
