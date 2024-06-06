#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// verifica matriz 3x3
int verifica(int linha, int p, int m[9][9]){
    int soma=0,i;
    for(i = p; i < p + 3; i++){
        soma = soma + m[linha][i];
    }
 
    linha++;
    for(i = p; i < p + 3; i++){
        soma = soma + m[linha][i];
    }
 
    linha++;
    for(i = p; i < p + 3; i++){
        soma = soma + m[linha][i];
    }

    if(soma == 45){
        return 0;
    }else{
        return 1;
    }
}
 
int main(){
    int p=1, n, i, j, k, m[9][9];
    int flag ,*vet;
    scanf("%d",&n);
    while(n--){
        // leitura
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                scanf("%d",&m[i][j]);
            }
        }
 
        printf("Instancia %d\n",p);
 
        flag=0;
        // verifica se existe numeros repetidos - linha
        for(i=0;i<9;i++){
            vet = (int*)calloc(10,sizeof(int));
            for(j=0;j<9;j++){
                if( vet[m[i][j]] == 0 ){
                    vet[m[i][j]] = m[i][j];
                }else{
                    flag = 1;
                    i=9;
                    j=9;
                }
            }
        }
        
        // verifica se existe numeros repetidos - coluna
        for(i=0;i<9;i++){
            vet = (int*)calloc(10,sizeof(int));
            for(j=0;j<9;j++){
                if( vet[m[j][i]] == 0 ){
                    vet[m[j][i]] = m[j][i];
                }else{
                    flag = 1;
                    i=9;
                    j=9;
                }
            }
        }
        if(flag == 1){
            puts("NAO");
        }else{
            // verifica as 9 matrizes 3x3
            // retorna 0 caso esteja correto (soma dos elementos for 45)
            flag += verifica(0,0,m);
            flag += verifica(0,3,m);
            flag += verifica(0,6,m);
            flag += verifica(3,0,m);
            flag += verifica(3,3,m);
            flag += verifica(3,6,m);
            flag += verifica(6,0,m);
            flag += verifica(6,3,m);
            flag += verifica(6,6,m);
            if( flag == 0 ){
                puts("SIM");
            }else{
                puts("NAO");
            }
        }
        puts("");
        p++;
    }
    return 0;
}
