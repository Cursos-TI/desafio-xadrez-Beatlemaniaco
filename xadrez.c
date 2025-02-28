#include <stdio.h>

//Funcões Recursivas (Torre e Rainha)

void movimento_torre(int torre){
    if (torre > 0)
    {
        printf("Direita\n");
        movimento_torre(torre - 1);
    }
}

void movimento_rainha(int rainha){
    if (rainha > 0)
    {
        printf("Esquerda\n");
        movimento_rainha(rainha - 1);
    }
}

//Funções Sem Recursividade (Bispo e Cavalo)

void movimento_bispo(int bispo ){
    while(bispo <= 5){
        for(int i = 1; i <= 1; i++)
        {
            printf("Direita\n");
        }
        printf("Cima\n");
        bispo++;
    }
}

void movimento_cavalo(int cavalo){
    while (cavalo--){
        for (int i = 1, j = 1; i <= 2 || j <= 2; i++, j++){
            printf("Cima\n");
        }
    }
    printf("Direita\n");
}

int main() {

    //Execução da Função

    printf("*** Movimento do Bispo ***\n");
    movimento_bispo(1);
    printf("\n");
    
    printf("*** Movimento da Torre ***\n");
    movimento_torre(5);
    printf("\n");
    
    printf("*** Movimento da Rainha ***\n");
    movimento_rainha(8);
    printf("\n");
    
    printf("*** Movimento do Cavalo ***\n");
    movimento_cavalo(1);
    printf("\n");

    return 0;
}
