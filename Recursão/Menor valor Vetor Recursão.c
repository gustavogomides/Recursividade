 # include <stdio.h>
 # include <stdlib.h>
int maior (int *v, int tam) {
    int x;
    if (tam==1) return v[0];
    else {
        x=maior(v, tam-1);
        if (x>v[tam-1]) return x;
        else return v[tam-1];
    }
}
int menor (int *v, int tam) {
    int x;
    if (tam==1) return v[0];
    else {
        x=menor(v, tam-1);
        if (x<v[tam-1]) return x;
        else return v[tam-1];
    }
}
int main () {
    int *a, n, i;
    a=(int*)malloc(n*sizeof(int));
    if (!a)exit(1);
    printf ("Digite a quantidade de elementos do vetor: ");
    scanf ("%d", &n);
    printf ("Digite os elementos do vetor:\n");
    for (i=0; i<n; i++){
        printf("A[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf ("\nMaior elemento do vetor: %d\n", maior(a, n));
    printf ("Menor elemento do vetor: %d\n", menor(a, n));
    return 0;
}
