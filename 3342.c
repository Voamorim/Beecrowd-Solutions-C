#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int area = n*n;
    if(area % 2 == 0){
        printf("%d casas brancas e %d casas pretas\n", area/2, area/2);
    } else {
        printf("%d casas brancas e %d casas pretas\n", area/2 + 1, area/2);
    }
    return 0;
}
