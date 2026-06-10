#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char Cidade[50];
    char Estado[50];
    int ano;
    int resp;

    printf("Digite sua Cidade: ");
    fgets(Cidade, 50, stdin);
    
    printf("Digite seu Estado: ");
    fgets(Estado, 50, stdin);
    
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);
    
    resp = 2026 - ano;

    printf("Você nasceu em %s e no Estado do(e) %s e tem %d anos", Cidade, Estado, ano);



    system("pause");
    return 0;
}