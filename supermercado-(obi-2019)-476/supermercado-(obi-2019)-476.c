#include <stdio.h>
#include <stdlib.h>

int verify_p(float p);
int verify_g(int g);

int main(){    	
    int supermercados;
    int error = 0;

    scanf("%d", &supermercados);
    
    float *p = (float*) malloc(supermercados * sizeof(float));
    int *g = (int*) malloc(supermercados * sizeof(int));

    for (int i = 0; i < supermercados; i++) {
        scanf("%f %d", &p[i], &g[i]);
        if (verify_p(p[i]) || verify_g(g[i])) {
            error++;
        }
    }

    if (error > 0 || supermercados < 1 || supermercados > 100) {
        return 1;
    }
    
    float *results = (float*) malloc(supermercados * (sizeof(float)));
    for (int i = 0; i < supermercados; i++) {
        results[i] = (1000.0 / g[i]) * p[i];
    }

    float temp;
    for (int i = 0; i < supermercados - 1; i++) {
        for (int j = 0; j < supermercados - i - 1; j++) {
            if (results[j] > results [j + 1]) {
                temp = results[j];
                results[j] = results[j + 1];
                results[j + 1] = temp;
            }
        }
    }

    printf("%.2f\n", results[0]);

    free(p);
    free(g);
    free(results);
    return 0;
}

int verify_p(float p) {
    return
        p <= 0 ||
        p > 1000;
}

int verify_g(int g) {
    return
        g < 1 ||
        g > 1000;
}