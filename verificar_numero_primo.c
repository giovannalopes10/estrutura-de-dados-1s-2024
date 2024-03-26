#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1) return 0; // 0 e 1 não são primos

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // não é primo se for divisível por algum número entre 2 e a raiz quadrada de num
        }
    }

    return 1; // eh primo se não for divisível por nenhum número entre 2 e a raiz quadrada de num
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int num = atoi(argv[1]);

    if (isPrime(num)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
