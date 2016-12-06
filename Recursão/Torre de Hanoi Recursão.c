#include <stdio.h>

void hanoi(int n, char o, char d, char a){
    /// o: origem, a: auxiliar e d:destino
    if (n==1){
        printf("\nMover o disco %d do pino %c para o pino %c", n, o, d);
        return;
    }
    hanoi(n-1,o,a,d);
    printf("\nMover o disco %d do pino %c para o pino %c", n, o, d);
    hanoi(n-1,a,d,o);
    return;
}
int main (void) {
    int n;
    printf ("Digite a quantidade de discos: ");
    scanf ("%d", &n);
    hanoi (n, 'A', 'C', 'B');
    printf ("\n");
    return 0;
}
