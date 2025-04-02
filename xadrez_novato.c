#include <stdio.h>

//     xadrez versão novato

int main()
{
    int B,R = 0,T;
    //INT USADO PARA 

    printf("Movimento da Rainha\n");
     while (R <= 7)
    {
        printf("Esquerda\n");
        R++;
    }

    //MOVIMENTAÇÃO DA TORRE

    printf("Movimento da Torre\n");

    for(T = 0; T <= 4; T++ )
    {
        printf("Reta Horizontal\n");
    }

    //MOVIMENTAÇÃO DO BISPO

    printf("Movimento do Bispo\n");

    do{

        printf("Diagonal Superior Direita \n");
        B++;
    }while( B <= 4);

    return 0;
}

