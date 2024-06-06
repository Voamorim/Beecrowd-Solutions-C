#include <stdio.h>

int main(){
    int qnt_nao_atendidos = 0;
    int A, B, C, Ad, Bd, Cd;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d %d %d", &Ad, &Bd, &Cd);
    int a = A - Ad;
    int b = B - Bd;
    int c = C - Cd;
    if (a < 0) qnt_nao_atendidos -= a;
    if (b < 0) qnt_nao_atendidos -= b;
    if (c < 0) qnt_nao_atendidos -= c;
    printf("%d\n", qnt_nao_atendidos);
    return 0;
}
