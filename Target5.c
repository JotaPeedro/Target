
//Resposta do exercicio 5


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char temp;

    //Recebe a string
    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    // Remove o caractere '\n' adicionado pelo fgets
    str[strcspn(str, "\n")] = 0;

    // Troca o primeiro caractere pelo ultimo utilizando o tamanho da string como referencia
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    //Imprime a string invertida
    printf("A string invertida é: %s\n", str);

    return 0;
}