#include <stdio.h>

int mdc(int num1, int num2) {
    int resto;
    do {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    } while (resto != 0);
    return num1;
}

int main(){
    int N, F1, F2, mdcc = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d %d", &F1, &F2);
        mdcc = mdc(F1, F2);
        printf("%d\n", mdcc);
    }
    return 0;
}
