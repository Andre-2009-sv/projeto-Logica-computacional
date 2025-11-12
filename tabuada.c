#include <stdio.h>

int main() {
    int num1;
    int num2;

    do {
        printf("Digite um número \n(digite 0 para encerrar o programa): ");
        scanf("%d", &num1);

        printf("Tabuada do número escolhido:\n");

        for (num2 = 1; num2 <= 15; num2++) {
            printf("%d X %d = %d\n", num2, num1, num2 * num1);
        }

    } while (num1 != 0);

    return 0;
}
