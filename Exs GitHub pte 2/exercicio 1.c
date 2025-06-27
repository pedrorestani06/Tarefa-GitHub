#include <stdio.h>

int main() {
    int Y;
    int ano_atual = 2025;
    scanf("%d", &Y);
    int idade = ano_atual - Y;
    int nascimento_millennial = ano_atual - (2 * idade);
    printf("%d\n", nascimento_millennial);
    return 0;
}


esse é o 1 mesmo?