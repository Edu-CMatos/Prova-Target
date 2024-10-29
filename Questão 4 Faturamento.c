#include <stdio.h>

int main() {
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;

    float faturamento_total = sp + rj + mg + es + outros;

    float percentual_sp = (sp / faturamento_total) * 100;
    float percentual_rj = (rj / faturamento_total) * 100;
    float percentual_mg = (mg / faturamento_total) * 100;
    float percentual_es = (es / faturamento_total) * 100;
    float percentual_outros = (outros / faturamento_total) * 100;

    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", percentual_sp);
    printf("RJ: %.2f%%\n", percentual_rj);
    printf("MG: %.2f%%\n", percentual_mg);
    printf("ES: %.2f%%\n", percentual_es);
    printf("Outros: %.2f%%\n", percentual_outros);

    return 0;
}
