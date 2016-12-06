/*///QUESTÃO 1
#include <stdio.h>
int fat(int n) {
    if (n==1 || n==0) return 1;
    else return n*fat(n-1);
}
int main () {
    int n;
    printf ("Digite o numero para ser calculado o seu fatorial: ");
    scanf ("%d", &n);
    printf ("Fatorial de %d: %d\n", n, fat(n));
    return 0;
}*/
///-----------------------------------------------------------------------------------------
/*///QUESTÃO 2
#include <stdio.h>
int fib(int n) {
    if (n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}
int main () {
    int n;
    printf ("Digite o numero: ");
    scanf ("%d", &n);
    printf ("O numero %d corresponde ao %d da sequencia de Fibonacci.\n", n, fib(n));
    return 0;
}*/
///-----------------------------------------------------------------------------------------
/*///QUESTÃO 3
#include <stdio.h>
int inverte(int n, int res){
    if(n/10==0) return res*10+n%10;
    return inverte(n/10, res*10+n%10);
}

int main(){
    int n;
    printf("Digite o numero: ");
    scanf ("%d", &n);
    printf("%d invertido: %d", n, inverte(n, 0));
    return 0;
}*/
///-----------------------------------------------------------------------------------------
/*///QUESTÃO 4
#include <stdio.h>
#include <stdlib.h>
int soma(int v[], int tam) {
    if (tam==1) return v[0];
    else {
        int s;
        s=soma(v,tam-1);
        if (v[tam-1]>1) s+=v[tam-1];
        return s;
    }
}
int main () {
    int *v, tam, i;
    printf ("Digite a quantidade de elementos do vetor: ");
    scanf ("%d", &tam);
    v=(int*)malloc(tam*sizeof(int));
    if(!tam) exit(1);
    printf ("Digite os elementos:\n");
    for (i=0; i<tam; i++) {
        printf ("V[%d]: ", i);
        scanf ("%d", &v[i]);
    }
    printf ("\nSoma dos elementos do vetor: %d\n", soma(v, tam));
    return 0;
}*/
///-----------------------------------------------------------------------------------------
/*///QUESTÃO 5
#include <stdio.h>
int soma(int n) {
    if (n==1) return 1;
    return n+soma(n-1);
}
int main () {
    int n;
    printf ("Digite o valor de N: ");
    scanf ("%d", &n);
    printf ("\nSoma de 1 ate %d eh: %d\n", n, soma(n));
    return 0;
}*/
///-----------------------------------------------------------------------------------------
/*///QUESTÃO 6
#include <stdio.h>
int potencia(int b, int e) {
    if (e==0) return 1;
    if (e==1) return b;
    return b*(potencia(b,e-1));
}
int main () {
    int b, e;
    printf ("Digite o valor da Base: ");
    scanf ("%d", &b);
    printf ("Digite o valor do Expoente: ");
    scanf ("%d", &e);
    printf ("\n  %d^%d = %d\n", b, e, potencia(b, e));
    return 0;
}*/
///-----------------------------------------------------------------------------------------
/*///QUESTÃO 7

*/
///-----------------------------------------------------------------------------------------
/*///QUESTÃO 8
#include <stdio.h>
int mdc (int x, int y) {
    if (y==0) return x;
    return mdc(y, x%y);
}
int main () {
    int x, y;
    printf ("Digite o valor do primeiro numero: ");
    scanf ("%d", &x);
    printf ("Digite o valor do segundo numero: ");
    scanf ("%d", &y);
    printf ("\nMDC(%d,%d): %d\n", x, y, mdc(x, y));
    return 0;
}*/
///-----------------------------------------------------------------------------------------
/*///QUESTÃO 9
#include <stdio.h>
int soma (int n) {
    if (n==1) return 1;
    return n+soma(n-1);
}
int main () {
    int n;
    printf ("Digite um numero: ");
    scanf ("%d", &n);
    printf ("\nSomatorio dos numeros de 1 a %d : %d\n", n, soma(n));

    return 0;
}*/
///-----------------------------------------------------------------------------------------
/*///QUESTÃO 10
#include <stdio.h>
#include <stdlib.h>
int repete(int n[], int k, int tam) {
    if (tam==1) return 0;
    else {
        int c;
        c=repete(n,k,tam-1);
        if (n[tam-1]>1 && c==repete(n,k,tam-1)) c++;
        return c;
    }
}

int main () {
    int *n, k, tam, i;
    printf ("Digite o tamanho do numero: ");
    scanf ("%d", &tam);
    n=(int*)malloc(tam*sizeof(int));
    if (n==NULL) exit(1);
    printf ("Digite o numero:\n");
    for (i=0; i<tam; i++) {
        printf ("A[%d]: ", i);
        scanf ("%d", &n[i]);
    }
    printf ("\nDigite o numero para a contagem: ");
    scanf ("%d", &k);
    printf ("\n%d\n", repete(n, k, tam));


    return 0;
}*/
///-----------------------------------------------------------------------------------------
/*///QUESTÃO 11
#include <stdio.h>
int multi(int a, int b) {
    if (b==1) return a;
    return a+multi(a,b-1);
}
int main () {
    int a, b;
    printf ("Digite o valor de A: ");
    scanf ("%d", &a);
    printf ("Digite o valor de B: ");
    scanf ("%d", &b);
    printf ("%d * %d = %d\n", a, b, multi(a,b));
    return 0;
}*/
///-----------------------------------------------------------------------------------------
///QUESTÃO 12
/*#include <stdio.h>
int crescente(int n) {
    if (n==0) return 0;
    else printf ("%d - ", crescente(n-1));
}
int main () {
    int n;
    printf ("Digite um numero: ");
    scanf ("%d", &n);
    crescente(n);
    printf ("\n");
    return 0;
}*/
///-----------------------------------------------------------------------------------------
/*///QUESTÃO 16
#include <stdio.h>
int fatduplo (int n) {
    if (n==1) return 1;
    return n*fatduplo(n-2);
}
int main () {
    int n;
    printf ("Digite o numero: ");
    scanf ("%d", &n);
    if (n%2==0) exit(1);
    printf ("\n%d!! = %d\n", n, fatduplo(n));
    return 0;
}*/
///-----------------------------------------------------------------------------------------
///QUESTÃO 21
#include <stdio.h>
int tri(int n) {
    if (n==0 || n==1) return 0;
    if (n==2) return 1;
    return tri(n-1)+tri(n-2)+tri(n-3);
}
