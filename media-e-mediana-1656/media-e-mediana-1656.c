#include <stdio.h>

int verify(int a, int b);

// pensamentos que ajudaram a resolver o problema...
// media = (a + b + c) / 3
// 3 * media = (a + b + c)

// sabendo que a ou b vai ser a mediana, temos:
// 2 * a = b + c
// 2 * a - b = c

int main() {
    int a, b, c;

    scanf("%d %d", &a, &b);

    if (verify(a, b)) {
        return 1;
    }

    c = 2 * a - b;

    printf("%d\n", c);
    return 0;
}

int verify(int a, int b) {
    return
        a < 1 || a > 1000000000 ||
        b < 1 || b > 1000000000;
}