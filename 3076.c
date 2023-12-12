#include <stdio.h>
 
int main() {
    int N;
    while (!feof(stdin)){
        scanf("%d", &N);
        printf("%d\n", (N+99)/100);
    }
    return 0;
}