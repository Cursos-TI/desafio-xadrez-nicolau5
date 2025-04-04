#include <stdio.h>

int R,B,T;    // flag de controla de movimentação de Rainha, Bispo, Torre

// menus de controle
int opcao;    // controla do menu principal
int rainha;   // menu da movimentação da rainha
int bispo;    // menu de movimentção do bispo
int torre;    // menu de movimentaçã da torre
int cavalo;   // menu de movimentaão do cavalo

// variável para quantas casas mover
int MVR;

// voids de menu principal
void menuprincipal();
void menurainha();
void menubispo();
void menutorre();
void menucavalo();

// void de movimento da rainha
void movimento_rainha1();
void movimento_rainha2();
void movimento_rainha3();
void movimento_rainha4();
void movimento_rainha5();
void movimento_rainha6();
void movimento_rainha7();
void movimento_rainha8();

// void de movimento do bispo

void movimento_bispo1();
void movimento_bispo2();
void movimento_bispo3();
void movimento_bispo4();

// void de movimento da torre

void movimento_torre1();
void movimento_torre2();
void movimento_torre3();
void movimento_torre4();

int main()
{
    // menu principal
    menuprincipal();

        switch (opcao) // controle do menu
        {
            case 1:

                // menu da rainha
                menurainha();
    
                switch (rainha) // controla do menu da rainha
                {
                    case 1:

                        printf("Quantas casa quer movimentar? 1-8\n");
                        scanf("%d", &MVR);
                        movimento_rainha1(MVR);

                    break;
    
                    case 2:

                        printf("Quantas casa quer movimentar? 1-8\n");
                        scanf("%d", &MVR);
                        movimento_rainha2(MVR);
    
                    break;
    
                    case 3:
    
                        printf("Quantas casa quer movimentar? 1-8\n");
                        scanf("%d", &MVR);
                        movimento_rainha3(MVR);
    
                    break;
    
                    case 4:
    
                        printf("Quantas casa quer movimentar? 1-8\n");
                        scanf("%d", &MVR);
                        movimento_rainha4(MVR);
    
                    break;
    
                    case 5:
    
                        printf("Quantas casa quer movimentar? 1-8\n");
                        scanf("%d", &MVR);
                        movimento_rainha5(MVR);
    
                    break;
    
                    case 6:
    
                        printf("Quantas casa quer movimentar? 1-8\n");
                        scanf("%d", &MVR);
                        movimento_rainha6(MVR);
    
                    break;
    
                    case 7:
    
                        printf("Quantas casa quer movimentar? 1-8\n");
                        scanf("%d", &MVR);
                        movimento_rainha7(MVR);
    
                    break;
                    
                    case 8:
    
                        printf("Quantas casa quer movimentar? 1-8\n");
                        scanf("%d", &MVR);
                        movimento_rainha8(MVR);
    
                    break;//break do segundo menu das direção de movimentação

                }// switch da rainha

            break;//break da escoha do menu principal
    
            case 2:

                // menu do bispo
                menubispo();

                    switch (bispo) // controla do menu da torre

                {
                    case 1:
                    
                        printf("Quantas casa quer movimentar? 1 - 8\n");
                        scanf("%d", &MVR);
                        movimento_bispo1(MVR);

                    break;

                    case 2:

                        printf("Quantas casa quer movimentar? 1 - 8\n");
                        scanf("%d", &MVR);
                        movimento_bispo2(MVR);

                    break;

                    case 3:

                        printf("Quantas casa quer movimentar? 1 - 8\n");
                        scanf("%d", &MVR);
                        movimento_bispo3(MVR);

                    break;

                    case 4:

                        printf("Quantas casa quer movimentar? 1 - 8\n");
                        scanf("%d", &MVR);
                        movimento_bispo4(MVR);

                    break;// break do menu do bispo

                }// switch bispo
    
            break; // break do menu principal
    
            case 3:

                //menu da torre
                menutorre();

                    switch (torre) // controle do menu da torre
                {
                    case 1:

                        printf("Quantas casa quer movimentar? 1 - 8\n");
                        scanf("%d", &MVR);
                        movimento_torre1(MVR);

                    break;

                    case 2:

                        printf("Quantas casa quer movimentar? 1 - 8\n");
                        scanf("%d", &MVR);
                        movimento_torre2(MVR);

                    break;

                    case 3:

                        printf("Quantas casa quer movimentar? 1 - 8\n");
                        scanf("%d", &MVR);
                        movimento_torre3(MVR);

                    break;

                    case 4:

                        printf("Quantas casa quer movimentar? 1 - 8\n");
                        scanf("%d", &MVR);
                        movimento_torre4(MVR);

                    break; // break do menu da torre

                }// switch torre
    
            break;// break principal
    
            case 4:

                //menu do cavalo
                menucavalo();

                    switch (cavalo)
                {
                    case 1:

                    //loops complexa para movimentar o cavalo

                        for(int c = 0; c <= 2; c++)
                        {
                            if(c == 2)
                            {
                                printf("Direita\n");
                                break;
                            }
                            printf("Cima\n");
                        }

                    break;

                    case 2:

                        for(int c = 0; c <= 2; c++)
                        {
                            if(c == 2)
                            {
                                printf("Esquerda\n");
                                break;
                            }
                            printf("Cima\n");
                        }

                    break;

                    case 3:
                        for(int c = 0; c <= 2; c++)
                        {
                            if(c == 2)
                            {
                                printf("Direita\n");
                                break;
                            }
                            printf("Baixo\n");
                        }
                    break;

                    case 4:
                        
                        for(int c = 0; c <= 2; c++)
                        {
                            if(c == 2)
                            {
                                printf("Esquerda\n");
                                break;
                            }
                            printf("baixo\n");
                        }

                    break;

                    case 5:
                        
                        for(int c = 0; c <= 2; c++)
                        {
                            if(c == 2)
                            {
                                printf("cima\n");
                                break;
                            }
                            printf("Direita\n");
                        }

                    break;

                    case 6:
                        
                        for(int c = 0; c <= 2; c++)
                        {
                            if(c == 2)
                            {
                                printf("Baixo\n");
                                break;
                            }
                            printf("Direita\n");
                        }

                    break;

                    case 7:
                        
                        for(int c = 0; c <= 2; c++)
                        {
                            if(c == 2)
                            {
                                printf("Cima\n");
                                break;
                            }
                            printf("Esquerda\n");
                        }

                    break;

                    case 8:
                        
                        for(int c = 0; c <= 2; c++)
                        {
                            if(c == 2)
                            {
                                printf("Baixo\n");
                                break;
                            }
                            printf("Esquerda\n");
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

// void de menus

void menuprincipal()
{
    // menu principal

    printf("### Movimentação de peças de Xadrez ###\n");
    printf("1. Rainha\n");
    printf("2. Bispo\n");
    printf("3. Torre\n");
    printf("4. Cavalo\n");
    printf("Escolha qual peça quer movimentar: ");
    scanf("%d", &opcao);
}

void menurainha()
{
    printf("\n"); // para pular linha
    printf("Escolha qual direção movimentar a Rainha\n");
    printf("1. Horizontal para cima\n");
    printf("2. Horizontal para baixo\n");
    printf("3. Vertical para direita\n");
    printf("4. Vertical para esquerda\n");
    printf("5. Diaconal Direita acima\n");
    printf("6. Diaconal Esquerda acima\n");
    printf("7. Diaconal Direita abaixo\n");
    printf("8. Diaconal Esquerda abaixo\n");
    printf("Escolha a opção: ");
    scanf("%d", &rainha);
}

void menubispo()
{
    printf("\n"); // para pular linha
    printf("Escolha qual direção movimentar o bispo\n");
    printf("1. Diaconal Direita acima\n");
    printf("2. Diaconal Esquerda acima\n");
    printf("3. Diaconal Direita abaixo\n");
    printf("4. Diaconal Esquerda abaixo\n");
    printf("Escolha a Opção: ");
    scanf("%d", &bispo);
}

void menutorre()
{
    printf("\n"); // para pular linha
    printf("Escolha qual direção movimentar a torre\n");
    printf("1. Horizontal acima\n");
    printf("2. Horizontal abaixo\n");
    printf("3. Vertical Esquerda\n");
    printf("4. Vertical Direita\n");
    printf("Escolha a Opção: ");
    scanf("%d", &torre);
}

void menucavalo()
{
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
}
/****************************************************************************/

// void de 8 movimento da rainha

void movimento_rainha1(int numero)
{
    if(numero > 0)
    {
        printf("Horizontal para cima\n");
        movimento_rainha1(numero - 1);
    }
}

void movimento_rainha2(int numero)
{
    if(numero > 0)
    {
        printf("Horizontal para baixo\n");
        movimento_rainha2(numero - 1);
    }
}

void movimento_rainha3(int numero)
{
    if(numero > 0)
    {
        printf("Vertical para direita\n");
        movimento_rainha3(numero - 1);
    }
}

void movimento_rainha4(int numero)
{
    if (numero > 0)
    {
        printf("Vertical para esquerda\n");
        movimento_rainha4(numero - 1);
    }
}

void movimento_rainha5(int numero)
{
    if(numero > 0)
    {
        printf("Diaconal Direita acima\n");
        movimento_rainha5(numero - 1);
    }
}

void movimento_rainha6(int numero)
{
    if(numero > 0)
    {
        printf("Diaconal Esquerda acima\n");
        movimento_rainha6(numero - 1);
    }
}

void movimento_rainha7(int numero)
{
    if(numero > 0)
    {
        printf("Diaconal Direita abaixo\n");
        movimento_rainha7(numero - 1);
    }
}

void movimento_rainha8(int numero)
{
    if(numero > 0)
    {
        printf("Diaconal Esquerda abaixo\n");
        movimento_rainha8(numero - 1);
    }
}

/*****************************************************************************/

// void de movimento do bispo

void movimento_bispo1(int bis)
{
    if(bis > 0)
    {
        printf("Diaconal Direita acima\n");
       movimento_bispo1(bis - 1);
    }
}

void movimento_bispo2(int bis)
{
    if( bis > 0 )
    {
        printf("Diaconal Esquerda acima\n");
        movimento_bispo2(bis - 1);
    }
}

void movimento_bispo3(int bis)
{
    if( bis > 0 )
    {
        printf("Diaconal Direita abaixo\n");
        movimento_bispo3(bis - 1);
    }
}

void movimento_bispo4(int bis)
{
    if( bis > 0 )
    {
        printf("Diaconal Esquerda abaixo\n");
        movimento_bispo4(bis - 1);
    }
}

/*****************************************************************************/

// movimento da torre 

void movimento_torre1( int TOR )
{
    if( TOR > 0 )
    {
        printf("Horizontal para cima\n");
        movimento_torre1( TOR - 1 );
    }
}

void movimento_torre2( int TOR )
{
    if( TOR > 0 )
    {
        printf("Horizontal para baixo\n");
        movimento_torre2( TOR - 1 );
    }
}

void movimento_torre3(int TOR)
{
    if(TOR > 0)
    {
        printf("Vertical para direita\n");
        movimento_torre3(TOR - 1);
    }
}

void movimento_torre4(int TOR)
{
    if(TOR > 0)
    {
        printf("Vertical para esquerda\n");
        movimento_torre4(TOR - 1);
    }
}

/*****************************************************************************/
