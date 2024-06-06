#include <stdio.h>
#include <string.h>

int main(){
    char mensagem[105];
    fgets(mensagem,105, stdin);
    int qnt_bit_1 = 0;
    int tam_msg = strlen(mensagem);
    for(int c = 0; c < tam_msg; c++){
        if(mensagem[c] == '1') qnt_bit_1 += 1;
    }
    if(qnt_bit_1 % 2 == 0){
        for(int i = 0; i < tam_msg; i++){
            if(mensagem[i] == '0' || mensagem[i] == '1'){
                printf("%c", mensagem[i]);
            }
        }
        printf("0\n");
    } else {
        for(int i = 0; i < tam_msg; i++){
            if(mensagem[i] == '0' || mensagem[i] == '1'){
                printf("%c", mensagem[i]);
            }
        }
        printf("1\n");
    }
    return 0;
}
