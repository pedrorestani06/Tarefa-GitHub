#include <stdio.h>

int main() {
    int N, i, total = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        int netos;
        scanf("%d", &netos);
        total += netos;
    }
    printf("%d\n", total);
    return 0;
}
