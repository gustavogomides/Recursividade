#include <stdio.h>
int mdc1(int x, int y) {
    if (y==0) return x;
    else return mdc1(y,x%y);
}
int mdc2(int x, int y) {
    if (x==y) return x;
    if (x>y) return mdc2(x-y,y);
    if (x<y) return mdc2(x,y-x);
}

/*
-->	mdc1(20,12):        20%12
   x=20, y=12 -> mdc1(12, 8):            12%8
                     x=12, y=8 -> mdc1(8, 4):            8%4
				                      x=8, y=4 -> mdc1(4,0):
                                                x=4, y=0 -> 4


-->	mdc2(20,12):
         x=20, y=12 -> mdc2(8,12):
                          x=8, y=12 -> mdc2(8,4):
                                         x=8, y=4 -> mdc2(4,4):
					                                    x=4, y=4 -> 4
*/
int main () {
    int x, y, i, n;
    printf ("Digite a quantidade de numeros: ");
    scanf ("%d", &n);
    for (i=0; i<n; i++) {
        printf ("\nDigite o valor do primeiro numero: ");
        scanf ("%d", &x);
        printf ("Digite o valor do segundo numero: ");
        scanf ("%d", &y);
        printf ("MDC(%d,%d) = %d\n", x, y, mdc1(x, y));
        printf ("MDC(%d,%d) = %d\n\n", x, y, mdc2(x, y));
    }
    return 0;
}
