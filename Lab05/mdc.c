/**
 * Arquivo: mdc.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */
int mdc(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    return mdc(num2, num1 % num2);
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int resultado = mdc(num1, num2);
    printf("O mdc entre %d e %d é %d.\n", num1, num2, resultado);

    return 0;
}