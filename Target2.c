
// Resposta do exercicio 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*declaração de varíáveis
    num é o número informado pelo usuário;
    primeiro, segundo e proximo são variáveis auxiliares utilizadas para o cálculo da sequência de Fibonacci;
    encontrado é uma variável que indica se o número informado foi encontrado na sequência.
*/
    int num, primeiro = 0, segundo = 1, proximo = 0, encontrado = 0;

    // Recebe o valor de entrada do usúario para verificar se o valor pertence a sequencia.
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Sequencia de Fibonacci ate %d:\n", num);
    // while que vai  repetir enquanto o próximo número da sequência for menor ou igual ao número informado pelo usuário.
    /*verifica se o número atual é igual ao número informado pelo usuário  caso seja, marca a variável encontrado como 1.
    Imprime o número atual da sequência de Fibonacci.
    Atualiza os valores das variáveis primeiro, segundo e proximo para os próximos valores da sequência.
    */
    while (proximo <= num)
    {
        if (proximo == num)
        {
            encontrado = 1;
        }

        printf("%d ", proximo);
        primeiro = segundo;
        segundo = proximo;
        proximo = primeiro + segundo;
    }

    // verifica se o número informado pelo usuário foi encontrado na sequência e imprimimos uma mensagem de acordo com o resultado.
    if (encontrado)
    {
        printf("\n%d pertence a sequancia de Fibonacci.", num);
    }
    else
    {
        printf("\n%d nao pertence a sequencia de Fibonacci.", num);
    }

    return 0;
}