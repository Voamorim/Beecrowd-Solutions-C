#include <stdio.h>
#include <string.h>

int main(){
    int N, qnt_linhas, tam_string, hash = 0;
    scanf("%d\n", &N);
    char string[55];
    for(int caso = 0; caso < N; caso++){
        scanf("%d\n", &qnt_linhas);
        hash = 0;
        for(int linha = 0; linha < qnt_linhas; linha++){
            fgets(string, 55, stdin);
            tam_string = strlen(string);
            for(int c = 0; c < tam_string; c++){
                if(string[c] >= 'A' && string[c] <= 'Z') hash += string[c] - 'A' + c + linha;
            }
        }
        printf("%d\n", hash);
    }
    return 0;
}
