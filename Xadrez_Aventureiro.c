#include <stdio.h>

int R,B,T;    // flag de controla de movimentação de Rainha, Bispo, Torre
int opcao;    // controla do menu principal
int rainha;   // menu da movimentação da rainha
int bispo;    // menu de movimentção do bispo
int torre;    // menu de movimentaçã da torre
int cavalo;   // menu de movimentaão do cavalo
int c = 1;    // flag para controla da movimentação em L

int main()
{
        // menu principal

    printf("### Movimentação de peças de Xadrez ###\n");
    printf("1. Rainha\n");
    printf("2. Bispo\n");
    printf("3. Torre\n");
    printf("4. Cavalo\n");
    printf("Escolha qual peça quer movimentar: ");
    scanf("%d", &opcao);

        switch (opcao) // controle do menu
        {
            case 1:

                    // menu da rainha
                printf("\n"); // para pular linha
                printf("Escolha qual direção movimentar a Rainha\n");
                printf("1. Cima\n");
                printf("2. Baixo\n");
                printf("3. Direita\n");
                printf("4. Esquerda\n");
                printf("5. Diaconal Direita acima\n");
                printf("6. Diaconal Esquerda acima\n");
                printf("7. Diaconal Direita abaixo\n");
                printf("8. Diaconal Esquerda abaixo\n");
                printf("Escolha a opção: ");
                scanf("%d", &rainha);
    
                switch (rainha) // controla do menu da rainha
                {
                    case 1:
    
                    while (R <= 7)
                    {
                        printf("Cima\n");
                        R++;
                    }
                    break;
    
                    case 2:
    
                    while (R <= 7)
                    {
                        printf("Baixo\n");
                        R++;
                    }
    
                    break;
    
                    case 3:
    
                    while (R <= 7)
                    {
                        printf("Direita\n");
                        R++;
                    }
    
                    break;
    
                    case 4:
    
                    while (R <= 7)
                    {
                        printf("Esquerda\n");
                        R++;
                    }
    
                    break;
    
                    case 5:
    
                    while (R <= 7)
                    {
                        printf("Diaconal Direita cima\n");
                        R++;
                    }
    
                    break;
    
                    case 6:
    
                    while (R <= 7)
                    {
                        printf("Diaconal Esquerda cima\n");
                        R++;
                    }
    
                    break;
    
                    case 7:
    
                    while (R <= 7)
                    {
                        printf("Diaconal Direita baixo\n");
                        R++;
                    }
    
                    break;
                    
                    case 8:
    
                    while(R <= 7)
                    {
                        printf("Diaconal Esquerda baixo\n");
                        R++;
                    }
    
                    break;//break do segundo menu das direção de movimentação
                }
            break;//break da escoha do menu principal
    
            case 2:

                        // menu do bispo

                printf("\n"); // para pular linha
                printf("Escolha qual direção movimentar o bispo\n");
                printf("1. Diaconal Direita acima\n");
                printf("2. Diaconal Esquerda acima\n");
                printf("3. Diaconal Direita abaixo\n");
                printf("4. Diaconal Esquerda abaixo\n");
                printf("Escolha a Opção: ");
                scanf("%d", &bispo);

                switch (bispo) // controla do menu da torre

                {
                    case 1:
                    
                        do{

                            printf("Diagonal Direita acima\n");
                            B++;
                        }while( B <= 4);

                    break;

                    case 2:

                        do{

                            printf("Diagonal Esquerda acima\n");
                            B++;
                        }while( B <= 4);

                    break;

                    case 3:
                        do{

                            printf("Diagonal Direita abaixo\n");
                            B++;
                        }while( B <= 4);

                    break;

                    case 4:

                        do{

                        printf("Diagonal Direita abaixo\n");
                        B++;
                        }while( B <= 4);

                    break;// break do menu do bispo
                }
    
            break; // break do menu principal
    
            case 3:

                    //menu da torre

                printf("\n"); // para pular linha
                printf("Escolha qual direção movimentar a torre\n");
                printf("1. Horizontal acima\n");
                printf("2. Horizontal abaixo\n");
                printf("3. Vertical Esquerda\n");
                printf("4. Vertical Direita\n");
                printf("Escolha a Opção: ");
                scanf("%d", &torre);

                switch (torre) // controlo do menu da torre
                {
                    case 1:

                        for(T = 0; T <= 4; T++ )
                        {
                            printf("Horizontal acima\n");
                        }

                    break;

                    case 2:

                        for(T = 0; T <= 4; T++ )
                        {
                            printf("Horizontal abaixo\n");
                        }

                    break;

                    case 3:

                        for(T = 0; T <= 4; T++ )
                        {
                            printf("Vertical Esquerda\n");
                        }

                    break;

                    case 4:

                        for(T = 0; T <= 4; T++ )
                        {
                            printf("Vertical Direita\n");
                        }

                    break; // break do menu da torre
                }
    
            break;// break principal
    
            case 4:

                        //menu do cavalo

                printf("\n"); // para pular linha
                printf("Escolha qual direção movimentar a Cavalo\n");
                printf("1. Cima Direita\n");
                printf("2. Cima Esquerda\n");
                printf("3. Baixo Direita\n");
                printf("4. Baixo Esquerda\n");
                printf("5. Direita Cima\n");
                printf("6. Direita Baixo\n");
                printf("7. Esquerda Cima\n");
                printf("8. Esquerda Baixo\n");
                printf("Escolha a opção: ");
                scanf("%d", &cavalo);

                switch (cavalo)
                {
                    case 1:

                            //loops aninhadas para movimentar o cavalo

                        while (c--)
                        {
                            for(int i = 1; i <=2; i++)
                            {
                                printf("Cima\n"); // imprimi 2 
                            }
                            printf("Direita\n"); // imprime 1 
                        }

                    break;

                    case 2:

                        while (c--)
                        {
                            for(int i = 1; i <=2; i++)
                            {
                                printf("Cima\n"); // imprimi 2 
                            }
                            printf("Esquerda\n"); // imprime 1
                        }
                    break;

                    case 3:
                        
                        while (c--)
                        {
                            for(int i = 1; i <=2; i++)
                            {
                                printf("Baixo\n"); // imprimi 2 
                            }
                            printf("Direita\n"); // imprime 1 
                        }
                    break;

                    case 4:
                        
                        while (c--)
                        {
                            for(int i = 1; i <=2; i++)
                            {
                                printf("Baixo\n"); // imprimi 2  
                            }
                            printf("Esquerda\n"); // imprime 1 
                        }
                    break;

                    case 5:
                        
                        while (c--)
                        {
                            for(int i = 1; i <=2; i++)
                            {
                                printf("Direita\n"); // imprimi 2 
                            }
                            printf("Cima\n"); // imprime 1 
                        }
                    break;

                    case 6:
                        
                        while (c--)
                        {
                            for(int i = 1; i <=2; i++)
                            {
                                printf("Direita\n"); // imprimi 2 
                            }
                            printf("Baixo\n"); // imprime 1 
                        }
                    break;

                    case 7:
                        
                        while (c--)
                        {
                            for(int i = 1; i <=2; i++)
                            {
                                printf("Esquerda\n"); // imprimi 2
                            }
                            printf("Cima\n"); // imprime 1 
                        }
                    break;

                    case 8:
                        
                        while (c--)
                        {
                            for(int i = 1; i <=2; i++)
                            {
                                printf("Esquerda\n"); // imprimi 2 
                            }
                            printf("Baixo\n"); // imprime 1 
                        }
                    break;// break do menu do cavalo
                }

            break;// break do menu principal
    
            default:

                printf("opção invalida\n");

            break;
        }

        return 0;
}
