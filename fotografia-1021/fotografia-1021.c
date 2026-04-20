#include <stdio.h>

int main() {
    int altura, largura, n;

    scanf("%d %d", &altura, &largura);
    scanf("%d", &n);

    int melhor_id = -1;
    int menor_desperdicio = -1;

    for (int i = 1; i <= n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        int cabe_normal = (x >= altura && y >= largura);
        int cabe_rotaci = (y >= altura && x >= largura);

        if (!cabe_normal && !cabe_rotaci) {
            continue;
        }

        int desperdicio = x * y - altura * largura;

        if (melhor_id == -1 || desperdicio < menor_desperdicio) {
            melhor_id = i;
            menor_desperdicio = desperdicio;
        }
    }

    printf("%d\n", melhor_id);
    return 0;
}