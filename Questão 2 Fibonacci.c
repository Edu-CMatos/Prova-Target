#include <stdio.h>

int pertenceFibonacci(int num) {
    int a = 0, b = 1, fib = 0;
    if (num == 0 || num == 1) {
        return 1;
    }

    while (fib < num) {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib == num;
}

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (pertenceFibonacci(num)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", num);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", num);
    }

    return 0;
}
