#include <stdio.h>
#include <string.h>

int main(){
    char palavra[25];
    scanf("%s", palavra);
    int tam_p = strlen(palavra);
    if(tam_p >= 10) printf("palavrao\n");
    else printf("palavrinha\n");
    return 0;
}
