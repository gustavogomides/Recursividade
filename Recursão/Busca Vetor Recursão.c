#include <stdio.h>
#include <stdlib.h>
int busca (int *v, int tam, int va) {
    if (tam==0) return -1;
    if (va==v[tam-1]) return tam-1;
    return busca(v, tam-1, va);
}
int main () {
    int *v, n, va, i;
    printf ("Digite a quantidade de elementos do vetor: ");
    scanf ("%d", &n);
    v=(int*)malloc(n*sizeof(int));
    if (!v) exit(1);
    printf ("\nDigite os valores dos elementos:\n");
    for (i=0; i<n; i++) {
        printf ("V[%d]: ", i);
        scanf ("%d", &v[i]);
    }
    printf ("\nDigite o valor para ser buscado no vetor: ");
    scanf ("%d", &va);
    if(busca(v, n, va)==-1) printf ("\n-1: Valor nao encontrado no vetor!!!\n");
    else printf ("\nO valor %d esta na posicao %d do vetor\n", va, busca(v, n, va));
    return 0;
}
