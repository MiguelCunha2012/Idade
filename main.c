#include <stdio.h>

int main() {
    int n;
    printf("Digite sua idade: ");
    scanf("%d", &n);
    if (n <= 17) {
        printf("Voce e crianca");
    } else if (n>=18 && n < 60){
        printf("Voce e adulto");
    } else{
        printf("Voce e idoso");
    }
    return 0;
}