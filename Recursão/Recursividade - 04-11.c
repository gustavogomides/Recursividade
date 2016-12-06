///RECURSIVIDADE
///--------------


/*///MULTIPLICAÇÃO: A * B (A somado B vezes)

/// 6*4 =  6 + (6*3) = 6 + 18 = 24 <-|
/// 6*3 =  6 + (6*2) = 6 + 12 = 18 <-|
/// 6*2 =  6 + (6*1) = 6 + 6 = 12 <--|
/// 6*1 =  6 ----------------------->| (vai voltando ate chegar no problema original)
/// => A * B = A + (A*(B-1)) ==> FORMULA RECURSIVA PARA A*B
///    termina quando B=1

///Algumas desvantagens da recursão: -> gasta um pouco mais de memória e
///                                  -> demora mais para a execução

#include <stdio.h>
int multirec (int a, int b) { ///função recursiva para multiplicação
    if (b==1) return a;
    return a + multirec(a, b-1);
}

///multirec(7,3):
///    a=7, b=3 -> 7+multirec(7,2): 7+14=21  <-------------|
///                  a=7, b=2 -> 7+multirec(7,1): 7+7=14 <-|
///                                  a=7, b=1 ->  7 ------>|

int main () {
    int a, b                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ;
    printf ("Digite o valor de A: ");
    scanf ("%d", &a);
    printf ("Digite o valor de B: ");
    scanf ("%d", &b);
    printf ("\nResultado da Multiplicacao: %d\n", multirec(a, b));
    return 0;
}*/


/*///FATORIAL
#include <stdio.h>
int fatr(int a) { ///função fatorial recursiva
    if (a==0) return 1;
    if (a==1) return 1;
    return a*fatr(a-1);
}

///fatr (6):
/// a=6 -> 6*fatr(5): 6*120=720  <--------------------------------------|
///           a=5 -> 5*fatr(4): 5*24=120  <-----------------------------|
///                      a=4 -> 4*fatr(3): 4*6=24  <--------------------|
///                                a=3 -> 3*fatr(2): 3*2=6  <-----------|
///                                           a=2 -> 2*fatr(1): 2*1=2 <-|
///                                                      a=1 -> 1------>|


int fati(int a) { ///função fatorial interativa
    int i, f=1;
    if (a==0) return 1;
    for (i=1; i<=n; i++)
        f=f*i;
    return a;
}

int main () {
    int a;
    printf ("Digite o valor de A: ");
    scanf ("%d", &a);
    printf ("\nFuncao Recursiva : %d\n", fatr(a));
    printf ("Funcao Interativa: %d\n", fati(a));
    return 0;
}*/


/*///TORRE DE HANOI

  |         |          |
  |         |          |
  |         |          |
  |         |          |
  |         |          |
  |         |          |
-----     -----      -----
  A         B          C

->mover (n-1) discos de A para B usando C;
->mover disco (n) de A para C;
->mover (n-1) discos de B para C usando A.*/


///A LISTA É POR SI SÓ UMA ESTRUTURA RECURSIVA. ELA PODE SER SEMPRE DECOMPOSTA EM (UM ELEMENTO+SUBLISTA).
