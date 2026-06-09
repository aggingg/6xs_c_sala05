//inclui blibioteca studio.h que permite usar entrada e saida de infos (printf e scanf)
#include <stdio.h>
//inclui a blibioteca stdlib.h que permite usar funçoes utilitarias (system())
#include <stdlib.h>
//declara a função principal onde o programa começa a execução
int main(){
    
    //declarar variaveis
    float numero1, numero2, respostaSoma;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    respostaSoma = numero1 / numero2;
    printf("%.2f", respostaSoma);
    
    //Pausa o sitema até o usuario clicar em uma tecla
    system("pause");
    //finaliza o sistema retornando 0 - deu bom

    return 0;

}   
  