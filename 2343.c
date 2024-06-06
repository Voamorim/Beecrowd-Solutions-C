#include <stdio.h>

/*
    -> A cidade é dividida em quadrantes de lado 1m. Se a cidade tiver 300m x 1000m, ela terá 300.000 quadrantes.
    -> Se dois raios cairem no mesmo quadrante, cairam no mesmo lugar
*/

int cidade[501][501];

int main(){
    int N, X, Y;
    scanf("%d", &N);
    for(int caso = 0; caso < N; caso++){
        scanf("%d %d", &X, &Y);
        if(cidade[X][Y]){
            printf("1\n");
            return 0;
        }
        cidade[X][Y] = 1;
    }
    printf("0\n");
    return 0;
}
