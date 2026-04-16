// *Nome do Jogo: Quem Acerta Ganha Mais*
// *Desenvolvido por: Michael Dias da Silva Carlos e João Paulo*
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

#define C 261
#define D 293
#define E 329
#define F 349
#define G 392
#define A 440
#define B 493

void playSound(int frequency, int duration)
{
    Beep(frequency, duration);
    Sleep(duration / 2);
}
void main()
{
    int DA = 0, Opc, FJ, MD, DF, NV = 0, COM, RETORNO = 0, QV = 0, Ajuda = 0, Ajuda2 = 0, Ajuda3 = 0, i, contador, trofeu1 = 0, trofeu2 = 0, trofeu3 = 0;
    char Respo;
    char nome[40], MSS[] = "girassol", MSS2[] = "tigre", MSS3[] = "banco", MSS4[] = "violino", MS1[40], MSS5[] = "telefone", MSS6[] = "computador", MSS7[] = "fotografia",
                   MSS8[] = "criptografia", MSS9[] = "batman", MSS10[] = "telescopio", MSS11[] = "exoplaneta", MSS12[] = "arqueologia";
    SetConsoleOutputCP(65001);

    system("cls");
    system("color 01");

    printf("\t\t*==========*\n");
    printf("\t\t  /XXXXXXXX \n");
    printf("\t\t |__  XX__/ \n");
    printf("\t\t    | XX    \n");
    printf("\t\t    | XX    \n");
    printf("\t\t    | XX    \n");
    printf("\t\t    | XX    \n");
    printf("\t\t    | XX    \n");
    printf("\t\t    |__/    \n");
    printf("\t\t*==========*\n");
    Beep(470, 150);
    Sleep(500);
    system("cls");

    printf("\t\t\t*=========*\n");
    printf("\t\t\t /XXXXXX   \n");
    printf("\t\t\t/XX__  XX  \n");
    printf("\t\t\t XX    XX  \n");
    printf("\t\t\t XXXXXXXX  \n");
    printf("\t\t\t XX__  XX  \n");
    printf("\t\t\t XX  | XX  \n");
    printf("\t\t\t XX  | XX  \n");
    printf("\t\t\t _/  |__/  \n");
    printf("\t\t\t*=========*\n");
    Beep(550, 150);
    Sleep(500);
    system("cls");

    printf("\t\t\t\t*=========*\n");
    printf("\t\t\t\t /XXXXXXX  \n");
    printf("\t\t\t\t| XX__  XX \n");
    printf("\t\t\t\t| XX    XX \n");
    printf("\t\t\t\t| XX  | XX \n");
    printf("\t\t\t\t| XX  | XX \n");
    printf("\t\t\t\t| XX  | XX \n");
    printf("\t\t\t\t| XXXXXXX/ \n");
    printf("\t\t\t\t|_______/  \n");
    printf("\t\t\t\t*=========*\n");
    Beep(650, 150);
    Sleep(500);
    system("cls");

    printf("\t\t\t\t\t*==========*\n");
    printf("\t\t\t\t\t /XXXXXX    \n");
    printf("\t\t\t\t\t/XX__  XX   \n");
    printf("\t\t\t\t\t XX   __/   \n");
    printf("\t\t\t\t\t  XXXXXX    \n");
    printf("\t\t\t\t\t ____  XX   \n");
    printf("\t\t\t\t\t/XX    XX   \n");
    printf("\t\t\t\t\t  XXXXXX/   \n");
    printf("\t\t\t\t\t ______/    \n");
    printf("\t\t\t\t\t*==========*\n");
    Beep(650, 150);
    Sleep(500);
    system("cls");

    printf("\t*===========================================*\n");
    printf("\t|  /XXXXXXXX /XXXXXX  /XXXXXXX   /XXXXXX    |\n");
    printf("\t| |__  XX__//XX__  XX| XX__  XX /XX__  XX   |\n");
    printf("\t|    | XX  | XX    XX| XX    XX| XX   __/   |\n");
    printf("\t|    | XX  | XXXXXXXX| XX  | XX|  XXXXXX    |\n");
    printf("\t|    | XX  | XX__  XX| XX  | XX  ____  XX   |\n");
    printf("\t|    | XX  | XX  | XX| XX  | XX /XX    XX   |\n");
    printf("\t|    | XX  | XX  | XX| XXXXXXX/|  XXXXXX/   |\n");
    printf("\t|    |__/  |__/  |__/|_______/   ______/    |\n");
    printf("\t*===========================================*\n");
    Beep(800, 150);
    Sleep(500);

    printf("\n\nInforme Seu Nome Para Começar e Aperte \"enter\".\n\n");
    printf("\nNOME DO PARTICIPANTE: ");
    scanf("%s", &nome);
    system("cls");
    printf("\nSeja Bem Vindo: %s\n", nome);
    printf("\nEsse foi Desenvolvido por: Michael D.S Carlos/ João Paulo\n\n");
    printf("\t\t|==============================|\t\n");
    printf("\t\t|   QUEM ACERTA GANHA MAIS     |\t\n");
    printf("\t\t|==============================|\t\n");

    printf("\t*==============================================================================*\n");
    printf("\t|Objetivo : O jogo contem perguntas preliminares para conseguir 'Dinheiro'.    |\n");
    printf("\t|A cada cinco perguntas tera uma rodada bônus de jogo de palavras estilo       |\n");
    printf("\t|Mega senha,para conseguir, um tipo de ajuda nas perguntas reais, depois que   |\n");
    printf("\t|Começar as perguntas reais, cada uma delas vai valer Uma pequena parte do que |\n");
    printf("\t|Você conseguiu ganhar nas preliminares, e também a cada cinco perguntas       |\n");
    printf("\t|voltara para o estilo Mega senha,onde se você acertar, ganhará um bônus de    |\n");
    printf("\t|R$10.000, e no final do jogo, aparecera o quanto de dinheiro você conseguiu   |\n");
    printf("\t|Ganhar.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX |\n");
    printf("\t|OBS: algumas observações a ser feita , o jogo possui 3 niveis de dificuldades |\n");
    printf("\t|Onde, quanto maior a dificuldade, maior serão as recompensas a serem ganhas   |\n");
    printf("\t|outro ponto é o jogo de palavras estilo mega senha, que simplificando é um    |\n");
    printf("\t|Jogo de palavras no qual dois participantes (No caso o jogador e a maquina).  |\n");
    printf("\t|Na primeira fase, são passadas cinco palavras por jogada chamadas de 'senhas' |\n");
    printf("\t|Para as quais uma pessoa(A maquina), da dicas de uma única palavra, para a    |\n");
    printf("\t|Outra pessoa(Jogador) tentar adivinhar.Exemplo a dica é cima,então a resposta |\n");
    printf("\t|É baixo, e assim se joga. Então se você quiser jogar e se divertir aperte: 1  |\n");
    printf("\t|P/Iniciar, ou 0 P/Sair, então aproveite o jogo.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX |\n");
    printf("\t*==============================================================================*\n");

    printf("\t*====================================================*\n");
    printf("\t|Então se você quiser jogar e se divertir Aperte(1)  |\n");
    printf("\t|P/Iniciar, ou 0 P/Sair, então aproveite o jogo.XXXXX|\n");
    printf("\t*====================================================*\n");

    printf("\n\t|Continua ou Sair? : ");
    scanf("%d", &Opc);
    system("cls");

    if (Opc == 0)
    {
        printf("\t*========================================================================*\n");
        printf("\t|Que pena:(Queria que você jogasse, Fico agradecido por ter aberto, tchau|\n");
        printf("\t*========================================================================*\n");
        system("pause");
    }
    else
    {
    dificuldade:
        system("cls");
        system("color 01");
        if ((RETORNO == 1) || (FJ == 1))
        {
            QV = QV + 1;
            printf("QUANTIDADE DE VEZES JOGADA: %d\n\n", QV);
            printf("TROFÉUS ACUMULADOS: BRONZE: %d| PRATA: %d| OURO: %d|\n ", trofeu1, trofeu2, trofeu3);
        }

        printf("*=====================================\n");
        printf("|Ótimo, então selecione a dificuldade|\n");
        printf("*=====================================\n");

        printf("*==========================================\n");
        printf("|OBS:Lembre-se, quanto maior a dificuldade|\n");
        printf("|Maior serão as recompensas.Boa sorte:) |\n");
        printf("*==========================================\n");

        printf("|-----------------------|\n");
        printf("| Nivel 1: Iniciante    |\n");
        printf("| Nivel 2: Intermediario|\n");
        printf("| Nivel 3: Avançado     |\n");
        printf("|-----------------------|\n");

        printf("\nQual nivel voce quer? : ");
        scanf("%d", &NV);
        system("cls");
        switch (NV)
        {
        case 1:
            printf("\t\t*======================================================*\n");
            printf("\t\t|   /XX   /XX /XXXXXX /XX    /XX /XXXXXXXX /XX         |\n");
            printf("\t\t|  | XXX | XX|_  XX_/| XX   | XX| XX_____/| XX         |\n");
            printf("\t\t|  | XXXX| XX  | XX  | XX   | XX| XX      | XX         |\n");
            printf("\t\t|  | XX XX XX  | XX  |  XX / XX/| XXXXX   | XX         |\n");
            printf("\t\t|  | XX  XXXX  | XX      XX XX/ | XX__/   | XX         |\n");
            printf("\t\t|  | XX   XXX  | XX       XXX/  | XX      | XX         |\n");
            printf("\t\t|  | XX    XX /XXXXXX      X/   | XXXXXXXX| XXXXXXXX   |\n");
            printf("\t\t|  |__/   __/|______/     _/    |________/|________/   |\n");
            printf("\t\t|                                                      |\n");
            printf("\t\t|                                /XX                   |\n");
            printf("\t\t|                               /XXXX                  |\n");
            printf("\t\t|                              |_  XX                  |\n");
            printf("\t\t|                                | XX                  |\n");
            printf("\t\t|                                | XX                  |\n");
            printf("\t\t|                                | XX                  |\n");
            printf("\t\t|                               /XXXXXX                |\n");
            printf("\t\t|                              |______/                |\n");
            printf("\t\t*======================================================*\n");
            printf("\t\t|##################||RODADA PERLIMINAR||###############|\n");
            printf("\t\t*======================================================*\n");
            system("pause");

            system("cls");
            system("color 4f");

            printf("\t\t\t  /XXXXXXXX /XX      /XX        /XXXXXX  /XX   /XX  /XXXXXX   /XXXXXX    \n");
            printf("\t\t\t | XX_____/| XXX    /XXX       /XX__  XX| XX  | XX /XX__  XX /XX__  XX   \n");
            printf("\t\t\t | XX      | XXXX  /XXXX      | XX   __/| XX  | XX| XX    XX| XX   __/   \n");
            printf("\t\t\t | XXXXX   | XX XX/XX XX      |  XXXXXX | XX  | XX| XXXXXXXX|  XXXXXX    \n");
            printf("\t\t\t | XX__/   | XX  XXX| XX        ____  XX| XX  | XX| XX__  XX  ____  XX   \n");
            printf("\t\t\t | XX      | XX   X | XX       /XX    XX| XX  | XX| XX  | XX /XX    XX   \n");
            printf("\t\t\t | XXXXXXXX| XX     | XX      |  XXXXXX/|  XXXXXX/| XX  | XX|  XXXXXX    \n");
            printf("\t\t\t |________/|__/     |__/        ______/   ______/ |__/  |__/  ______/    \n");

            printf("\t\t   /XX      /XX  /XXXXXX  /XXXXXXX   /XXXXXX   /XXXXXX   /XXXXXX        \n");
            printf("\t\t  | XXX    /XXX /XX__  XX| XX__  XX /XX__  XX /XX__  XX /XX__  XX       \n");
            printf("\t\t  | XXXX  /XXXX| XX    XX| XX    XX| XX   __/| XX    XX| XX   __/       \n");
            printf("\t\t  | XX XX/XX XX| XXXXXXXX| XXXXXXX/| XX      | XXXXXXXX|  XXXXXX        \n");
            printf("\t\t  | XX  XXX| XX| XX__  XX| XX__  XX| XX      | XX__  XX  ____  XX       \n");
            printf("\t\t  | XX   X | XX| XX  | XX| XX    XX| XX    XX| XX  | XX /XX    XX       \n");
            printf("\t\t  | XX     | XX| XX  | XX| XX  | XX|  XXXXXX/| XX  | XX|  XXXXXX/       \n");
            printf("\t\t  |__/     |__/|__/  |__/|__/  |__/  ______/ |__/  |__/  ______/        \n");
            Beep(270, 250);
            Sleep(650);

            system("cls");
            system("color 60");

            printf("\t\t /XXXXXXX                                                                     \n");
            printf("\t\t| XX__  XX                                                                    \n");
            printf("\t\t| XX    XX /XXXXXX   /XXXXXX   /XXXXXX   /XXXXXX   /XXXXXX  /XXXXXX   /XXXXXX \n");
            printf("\t\t| XXXXXXX//XX__  XX /XX__  XX /XX__  XX |____  XX /XX__  XX|____  XX /XX__  XX\n");
            printf("\t\t| XX____/| XX   __/| XXXXXXXX| XX    XX  /XXXXXXX| XX   __/ /XXXXXXX| XX   __/\n");
            printf("\t\t| XX     | XX      | XX_____/| XX  | XX /XX__  XX| XX      /XX__  XX| XX      \n");
            printf("\t\t| XX     | XX      |  XXXXXXX| XXXXXXX/|  XXXXXXX| XX     |  XXXXXXX| XX      \n");
            printf("\t\t|__/     |__/        _______/| XX____/   _______/|__/       _______/|__/      \n");
            printf("\t\t                             | XX                                             \n");
            printf("\t\t                             | XX                                             \n");
            printf("\t\t                             |__/                                             \n");
            Beep(305, 315);
            Sleep(650);

            system("cls");
            system("color a0");

            printf("\t\t\t  /XX    /XX   /XXXXXX  /XXXXXX \n");
            printf("\t\t\t   XX   | XX  /XX__  XX|_  XX_/ \n");
            printf("\t\t\t   XX   | XX | XX    XX  | XX   \n");
            printf("\t\t\t    XX / XX/ | XXXXXXXX  | XX   \n");
            printf("\t\t\t     XX XX/  | XX__  XX  | XX   \n");
            printf("\t\t\t      XXX/   | XX  | XX  | XX   \n");
            printf("\t\t\t       X/    | XX  | XX /XXXXXX \n");
            printf("\t\t\t       _/    |__/  |__/|______/ \n");
            Beep(550, 700);
            Sleep(700);

            system("cls");
            system("color 0e");

            printf("\n\nPERGUNTA N°1):QUAL A CAPITAL DO BRASIL?\n\n");
            printf("*===================*\n");
            printf("|A)Brasilia         |\n");
            printf("|B)Rio de Janeiro   |\n");
            printf("|C)São Paulo        |\n");
            printf("|D)Salvador         |\n");
            printf("|E)Belo Horizonte   |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 2500;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$2.500|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");

            printf("\n\nPERGUNTA N°2): QUAL É O MAIOR PLANETA DO SISTEMA SOLAR?\n\n");

            printf("*===================*\n");
            printf("|A)Terra            |\n");
            printf("|B)Marte            |\n");
            printf("|C)Saturno          |\n");
            printf("|D)Urano            |\n");
            printf("|E)Júpiter          |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'E') || (Respo == 'e'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 2500;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$2.500|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°3): QUANTOS MESES TÊM UM ANO?\n\n");

            printf("*===================*\n");
            printf("|A)10 Meses         |\n");
            printf("|B)11 Meses         |\n");
            printf("|C)12 Meses         |\n");
            printf("|D)13 Meses         |\n");
            printf("|E)9 Meses          |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'C') || (Respo == 'c'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 5000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$5.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°4): QUAL A COR PRIMÁRIA, QUE RESULTA DA MISTURA\nDAS CORES AMARELO E AZUL?\n\n");

            printf("*===================*\n");
            printf("|A)Verde            |\n");
            printf("|B)Vermelho         |\n");
            printf("|C)Laranja          |\n");
            printf("|D)Roxo             |\n");
            printf("|E)Preto            |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 10000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$10.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°5): QUAL A CAPITAL DA FRANÇA?\n\n");

            printf("*===================*\n");
            printf("|A)Londres          |\n");
            printf("|B)Roma             |\n");
            printf("|C)Berlim           |\n");
            printf("|D)Paris            |\n");
            printf("|E)Madri            |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'D') || (Respo == 'd'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 10000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$10.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            system("color 05");
            printf("\t\t*============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX               |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX               |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX               |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX               |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX               |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX               |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/               |\n");
            printf("\t\t|                                                            |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX   |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX  |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX  |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX  |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX  |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/  |\n");
            printf("\t\t*============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL FACIL]XXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*============================================================*\n");
            system("pause");

            system("cls");
            system("color 02");
            printf("\t*==============================================================*\n");
            printf("\t|Lembre-se: O jogo ' Mega Senha'. É um jogo de palavras em que |\n");
            printf("\t|Os participantes precisam acertar uma palavra-chave com base  |\n");
            printf("\t|Em dicas fornecidas pelo apresentador(Maquina). O objetivo    |\n");
            printf("\t|É adivinhar a palavra correta para ganhar um tipo de ajuda    |\n");
            printf("\t|Nas perguntas 'reais', É um jogo divertido e desafiador que   |\n");
            printf("\t|Testa o conhecimento e a agilidade mental dos jogadores.XXXXXX|\n");
            printf("\t*==============================================================*\n\n");
            printf("\n\nPRESSIONE ENTER PARA CONTINUAR...");
            getch();
            system("color 0e");
            system("cls");

            printf("*===================*\n");
            printf("|PRIMEIRA DICA: FLOR|\n");
            printf("*===================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*===================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS);
                printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]         |\n");
                printf("*===================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                Ajuda = Ajuda + 1;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*=====================*\n");
                printf("|SEGUNDA DICA: AMARELO|\n");
                printf("*=====================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*===================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS);
                    printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]         |\n");
                    printf("*===================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    Ajuda = Ajuda + 1;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*======================*\n");
                    printf("|TERCEIRA DICA: SEMENTE|\n");
                    printf("*======================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*===================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS);
                        printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]         |\n");
                        printf("*===================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        Ajuda = Ajuda + 1;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*==========================*\n");
                        printf("|QUARTA DICA: HELIOTROPISMO|\n");
                        printf("*==========================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS, MS1);
                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*==================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS);
                            printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]         |\n");
                            printf("*==================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            Ajuda = Ajuda + 1;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*================*\n");
                            printf("|QUINTA DICA: SOL|\n");
                            printf("*================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*==================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS);
                                printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]         |\n");
                                printf("*==================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                Ajuda = Ajuda + 1;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*===========================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:(  E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s  |\n", MSS);
                                printf("*===========================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");

            printf("\n\nPERGUNTA N°6):QUAL É A CAPITAL DA ESPANHA??\n\n");
            printf("*===================*\n");
            printf("|A)Bilbão           |\n");
            printf("|B)Valência         |\n");
            printf("|C)Sevilha          |\n");
            printf("|D)Barcelona        |\n");
            printf("|E)Madri            |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'E') || (Respo == 'e'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 10000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$10.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");

            printf("\n\nPERGUNTA N°7): QUAL É O MAIOR ANIMAL TERRESTRE, EM ALTURA?\n\n");

            printf("*===================*\n");
            printf("|A)Elefante         |\n");
            printf("|B)Girafa           |\n");
            printf("|C)Rinoceronte      |\n");
            printf("|D)Hipopótamo       |\n");
            printf("|E)Gorila           |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'B') || (Respo == 'b'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 10000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$10.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°8): QUANTOS CONTINENTES EXISTEM NO MUNDO?\n\n");

            printf("*===================*\n");
            printf("|A)4                |\n");
            printf("|B)5                |\n");
            printf("|C)6                |\n");
            printf("|D)7                |\n");
            printf("|E)8                |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'D') || (Respo == 'd'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 10000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$10.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°9): QUAL É O ELEMENTO QUÍMICO MAIS ABUNDANTE NO UNIVERSO?\n\n");

            printf("*===================*\n");
            printf("|A)Hidrogênio       |\n");
            printf("|B)Oxigênio         |\n");
            printf("|C)Carbono          |\n");
            printf("|D)Ferro            |\n");
            printf("|E)Hélio            |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 10000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$10.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°10): QUEM FOI O PRIMEIRO PRESIDENTE DOS ESTADOS UNIDOS?\n\n");

            printf("*===================*\n");
            printf("|A)George Washington|\n");
            printf("|B)John Adams       |\n");
            printf("|C)Thomas Jefferson |\n");
            printf("|D)Abraham Lincoln  |\n");
            printf("|E)Benjamin Franklin|\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 10000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$10.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }

            getch();
            system("cls");
            system("color 05");
            printf("\t\t*============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX               |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX               |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX               |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX               |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX               |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX               |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/               |\n");
            printf("\t\t|                                                            |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX   |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX  |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX  |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX  |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX  |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/  |\n");
            printf("\t\t*============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL FACIL]XXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*============================================================*\n");
            system("pause");
            system("color 0e");
            system("cls");

            printf("*==========================*\n");
            printf("|PRIMEIRA DICA: COMUNICAÇÃO|\n");
            printf("*==========================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS5, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*==================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s |\n", MSS5);
                printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]          |\n");
                printf("*==================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                Ajuda2 = Ajuda2 + 1;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*======================*\n");
                printf("|SEGUNDA DICA: CHAMADAS|\n");
                printf("*======================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS5, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*==================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS5);
                    printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]           |\n");
                    printf("*==================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    Ajuda2 = Ajuda2 + 1;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*==========================*\n");
                    printf("|TERCEIRA DICA: DISPOSITIVO|\n");
                    printf("*==========================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS5, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*==================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS5);
                        printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]           |\n");
                        printf("*==================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        Ajuda2 = Ajuda2 + 1;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*====================*\n");
                        printf("|QUARTA DICA: NÚMEROS|\n");
                        printf("*====================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS5, MS1);
                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*==================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS5);
                            printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]           |\n");
                            printf("*==================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            Ajuda2 = Ajuda2 + 1;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*====================*\n");
                            printf("|QUINTA DICA: CELULAR|\n");
                            printf("*====================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS5, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*==================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS5);
                                printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]           |\n");
                                printf("*==================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                Ajuda2 = Ajuda2 + 1;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*===========================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:(  E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s  |\n", MSS5);
                                printf("*===========================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }

            getch();
            system("cls");
            system("color 03");

            printf("\t\t*==========================================================================*\n");
            printf("\t\t|  /XX   /XX  /XXXXXX  /XXXXXXX   /XXXXXX        /XXXXXXX   /XXXXXX        |\n");
            printf("\t\t| | XX  | XX /XX__  XX| XX__  XX /XX__  XX      | XX__  XX /XX__  XX       |\n");
            printf("\t\t| | XX  | XX| XX    XX| XX    XX| XX    XX      | XX    XX| XX    XX       |\n");
            printf("\t\t| | XXXXXXXX| XX  | XX| XXXXXXX/| XXXXXXXX      | XX  | XX| XXXXXXXX       |\n");
            printf("\t\t| | XX__  XX| XX  | XX| XX__  XX| XX__  XX      | XX  | XX| XX__  XX       |\n");
            printf("\t\t| | XX  | XX| XX  | XX| XX    XX| XX  | XX      | XX  | XX| XX  | XX       |\n");
            printf("\t\t| | XX  | XX|  XXXXXX/| XX  | XX| XX  | XX      | XXXXXXX/| XX  | XX       |\n");
            printf("\t\t| |__/  |__/  ______/ |__/  |__/|__/  |__/      |_______/ |__/  |__/       |\n");
            printf("\t\t|                                                                          |\n");
            printf("\t\t|                                                                          |\n");
            printf("\t\t|                                                                          |\n");
            printf("\t\t|  /XX    /XX /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX  /XXXXXXXX  |\n");
            printf("\t\t| | XX   | XX| XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX| XX_____/  |\n");
            printf("\t\t| | XX   | XX| XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX        |\n");
            printf("\t\t| |  XX / XX/| XXXXX   | XXXXXXX/| XX  | XX| XXXXXXXX| XX  | XX| XXXXX     |\n");
            printf("\t\t|     XX XX/ | XX__/   | XX__  XX| XX  | XX| XX__  XX| XX  | XX| XX__/     |\n");
            printf("\t\t|      XXX/  | XX      | XX    XX| XX  | XX| XX  | XX| XX  | XX| XX        |\n");
            printf("\t\t|       X/   | XXXXXXXX| XX  | XX| XXXXXXX/| XX  | XX| XXXXXXX/| XXXXXXXX  |\n");
            printf("\t\t|      _/    |________/|__/  |__/|_______/ |__/  |__/|_______/ |________/  |\n");
            printf("\t\t*==========================================================================*\n");
            printf("\t\t|Agora Começa as Perguntas Reais, Cada Uma Valera Um Determinado Valor     |\n");
            printf("\t\t*==========================================================================*\n");

            printf("\nPRESSIONE ENTER PARA CONTINUAR...");
            getch();

            system("cls");
            system("color 0e");
            printf("*============================*\n");
            printf("|ESSA PERGUNTA VALE: R$2.500 |\n");
            printf("*============================*\n");
            printf("\n\nPERGUNTA N°1): QUAl É O MAIOR OCEANO DO MUNDO?\n\n");
            printf("*===================*\n");
            printf("|A)Oceano Atlântico |\n");
            printf("|B)Oceano Pacífico  |\n");
            printf("|C)Oceano Índico    |\n");
            printf("|D)Oceano Ártico    |\n");
            printf("|E)Oceano Antártico |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$2.500 |\n");
                    printf("*============================*\n");
                    printf("\n\nPERGUNTA N°1): QUAl É O MAIOR OCEANO DO MUNDO?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Oceano Pacífico  |\n");
                    printf("|C)Oceano Índico    |\n");
                    printf("|D)Oceano Ártico    |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°1): QUAl É O MAIOR OCEANO DO MUNDO?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Oceano Pacífico  |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$2.500 |\n");
                    printf("*============================*\n");
                    printf("\n\nPERGUNTA N°1): QUAl É O MAIOR OCEANO DO MUNDO?\n\n");
                    printf("*===================*\n");
                    printf("|A)Oceano Atlântico |\n");
                    printf("|B)Oceano Pacífico  |\n");
                    printf("|C)Oceano Índico    |\n");
                    printf("|D)Oceano Ártico    |\n");
                    printf("|E)Oceano Antártico |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'B') || (Respo == 'b'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$2.500|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==============================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (B): [Oceano Pacífico] |\n");
                printf("|Você Perdeu R$2.500                                           |\n");
                printf("*==============================================================*\n");
                DA = DA - 2500;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*============================*\n");
            printf("|ESSA PERGUNTA VALE: R$2.500 |\n");
            printf("*============================*\n");
            printf("\n\nPERGUNTA N°2): QUAL É O PAÍS COM A MAIOR POPULAÇÃO DO MUNDO?\n\n");
            printf("*===================*\n");
            printf("|A)China            |\n");
            printf("|B)Estados Unidos   |\n");
            printf("|C)Brasil           |\n");
            printf("|D)Rússia           |\n");
            printf("|E)Índia            |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$2.500 |\n");
                    printf("*============================*\n");
                    printf("\n\nPERGUNTA N°2): QUAL É O PAÍS COM A MAIOR POPULAÇÃO DO MUNDO?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Estados Unidos   |\n");
                    printf("|                   |\n");
                    printf("|D)Rússia           |\n");
                    printf("|E)Índia            |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°2): QUAl É O PAÍS COM A MAIOR POPULÇÃO DO MUNDO?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|E)Índia            |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$2.500 |\n");
                    printf("*============================*\n");
                    printf("\n\nPERGUNTA N°2): QUAL É O PAÍS COM A MAIOR POPULAÇÃO DO MUNDO?\n\n");
                    printf("*===================*\n");
                    printf("|A)China            |\n");
                    printf("|B)Estados Unidos   |\n");
                    printf("|C)Brasil           |\n");
                    printf("|D)Rússia           |\n");
                    printf("|E)Índia            |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'E') || (Respo == 'e'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$2.500|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*====================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (E): [Índia] |\n");
                printf("|Você Perdeu R$2.500                                 |\n");
                printf("*====================================================*\n");
                DA = DA - 2500;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*============================*\n");
            printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
            printf("*============================*\n");
            printf("\n\nPERGUNTA N°3): QUAL É O ANIMAL QUE SIMBOLIZA A PAZ?\n\n");
            printf("*===================*\n");
            printf("|A)Tigre            |\n");
            printf("|B)Leão             |\n");
            printf("|C)Elefante         |\n");
            printf("|D)Canguru          |\n");
            printf("|E)Pomba            |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
                    printf("*============================*\n");
                    printf("\n\nPERGUNTA N°3): QUAL É O ANIMAL QUE SIMBOLIZA A PAZ?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Leão             |\n");
                    printf("|                   |\n");
                    printf("|D)Canguru          |\n");
                    printf("|E)Pomba            |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°3): QUAL É O ANIMAL QUE SIMBOLIZA A PAZ?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|E)Pomba            |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
                    printf("*============================*\n");
                    printf("\n\nPERGUNTA N°3): QUAL É O ANIMAL QUE SIMBOLIZA A PAZ?\n\n");
                    printf("*===================*\n");
                    printf("|A)Tigre            |\n");
                    printf("|B)Leão             |\n");
                    printf("|C)Elefante         |\n");
                    printf("|D)Canguru          |\n");
                    printf("|E)Pomba            |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'E') || (Respo == 'e'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$5.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*====================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (E): [Pomba] |\n");
                printf("|Você Perdeu R$5.000                                 |\n");
                printf("*====================================================*\n");
                DA = DA - 5000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°4): QUAL É O MAIOR ESTADO BRASILEIRO EM ÁREA TERRITORIAL?\n\n");

            printf("*===================*\n");
            printf("|A)Amazonas         |\n");
            printf("|B)São Paulo        |\n");
            printf("|C)Minas Gerais     |\n");
            printf("|D)Rio Grande do Sul|\n");
            printf("|E)Bahia            |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS  ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°4): QUAL É O MAIOR ESTADO BRASILEIRO EM ÁREA TERRITORIAL?\n\n");
                    printf("*===================*\n");
                    printf("|A)Amazonas         |\n");
                    printf("|                   |\n");
                    printf("|C)Minas Gerais     |\n");
                    printf("|                   |\n");
                    printf("|E)Bahia            |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°4): QUAL É O MAIOR ESTADO BRASILEIRO EM ÁREA TERRITORIAL?\n\n");
                    printf("*===================*\n");
                    printf("|A)Amazonas         |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°4): QUAL É O MAIOR ESTADO BRASILEIRO EM ÁREA TERRITORIAL?\n\n");
                    printf("*===================*\n");
                    printf("|A)Amazonas         |\n");
                    printf("|B)São Paulo        |\n");
                    printf("|C)Minas Gerais     |\n");
                    printf("|D)Rio Grande do Sul|\n");
                    printf("|E)Bahia            |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*================================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$10.000|\n");
                printf("*================================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*=======================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (A): [Amazonas] |\n");
                printf("|Você Perdeu: R$10.000                                  |\n");
                printf("*=======================================================*\n");
                DA = DA - 10000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°5): QUAL A É O INSTRUMENTO MUSICAL DE SOPRO MAIS COMUM EM UMA BANDA DE ROCK?\n\n");

            printf("*===================*\n");
            printf("|A)Guitarra         |\n");
            printf("|B)Bateria          |\n");
            printf("|C)Baixo            |\n");
            printf("|D)Saxofone         |\n");
            printf("|E)Teclado          |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS  ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°5): QUAL A É O INSTRUMENTO MUSICAL DE SOPRO MAIS COMUM EM UMA BANDA DE ROCK?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Bateria          |\n");
                    printf("|C)Baixo            |\n");
                    printf("|D)Saxofone         |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°5): QUAL A É O INSTRUMENTO MUSICAL DE SOPRO MAIS COMUM EM UMA BANDA DE ROCK?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|D)Saxofone         |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°5): QUAL A É O INSTRUMENTO MUSICAL DE SOPRO MAIS COMUM EM UMA BANDA DE ROCK?\n\n");
                    printf("*===================*\n");
                    printf("|A)Guitarra         |\n");
                    printf("|B)Bateria          |\n");
                    printf("|C)Baixo            |\n");
                    printf("|D)Saxofone         |\n");
                    printf("|E)Teclado          |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'D') || (Respo == 'd'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*==============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu: R$10.000|\n");
                printf("*==============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*=======================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (D): [Saxofone]  |\n");
                printf("|Você Perdeu: R$10.000                                  |\n");
                printf("*=======================================================*\n");
                DA = DA - 10000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 05");
            printf("\t\t*============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX               |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX               |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX               |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX               |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX               |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX               |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/               |\n");
            printf("\t\t|                                                            |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX   |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX  |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX  |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX  |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX  |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/  |\n");
            printf("\t\t*============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL FACIL]XXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*============================================================*\n");
            system("pause");
            system("color 0e");
            system("cls");

            printf("*=========================*\n");
            printf("|PRIMEIRA DICA: TECNOLOGIA|\n");
            printf("*=========================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS6, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*====================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS6);
                printf("|VOCÊ GANHOU A AJUDA: [AULAR PERGUNTA]               |\n");
                printf("*====================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                Ajuda3 = Ajuda3 + 1;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*======================*\n");
                printf("|SEGUNDA DICA: INTERNET|\n");
                printf("*======================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS6, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*====================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS6);
                    printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]              |\n");
                    printf("*==================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    Ajuda3 = Ajuda3 + 1;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*======================*\n");
                    printf("|TERCEIRA DICA: DIGITAL|\n");
                    printf("*======================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS6, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*====================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS6);
                        printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]              |\n");
                        printf("*====================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        Ajuda3 = Ajuda3 + 1;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*====================*\n");
                        printf("|QUARTA DICA: TECLADO|\n");
                        printf("*====================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS6, MS1);
                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*====================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS6);
                            printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]              |\n");
                            printf("*====================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            Ajuda3 = Ajuda3 + 1;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*======================*\n");
                            printf("|QUINTA DICA: PROGRAMAS|\n");
                            printf("*======================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS6, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*====================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS6);
                                printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]              |\n");
                                printf("*==================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                Ajuda3 = Ajuda3 + 1;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*============================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:(  E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s |\n", MSS6);
                                printf("*============================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°6): QUAL É O ANIMAL CONSIDERADO O REI DA SELVA?\n\n");
            printf("*===================*\n");
            printf("|A)Tigre            |\n");
            printf("|B)Elefante         |\n");
            printf("|C)Leão             |\n");
            printf("|D)Urso             |\n");
            printf("|E)Gorila           |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°6): QUAL É O ANIMAL CONSIDERADO O REI DA SELVA?\n\n");
                    printf("*===================*\n");
                    printf("|A)Tigre            |\n");
                    printf("|                   |\n");
                    printf("|C)Leão             |\n");
                    printf("|                   |\n");
                    printf("|E)Gorila           |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°6): QUAL É O ANIMAL CONSIDERADO O REI DA SELVA?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|C)Leão             |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'C';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°6): QUAL É O ANIMAL CONSIDERADO O REI DA SELVA?\n\n");
                    printf("*===================*\n");
                    printf("|A)Tigre            |\n");
                    printf("|B)Elefante         |\n");
                    printf("|C)Leão             |\n");
                    printf("|D)Urso             |\n");
                    printf("|E)Gorila           |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'C') || (Respo == 'c'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$10.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*====================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (C): [Leão]  |\n");
                printf("|Você Perdeu: R$10.000                               |\n");
                printf("*====================================================*\n");
                DA = DA - 10000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°7): QUAL É O PLANETA MAIS PRÓXIMO DO SOL?\n\n");
            printf("*===================*\n");
            printf("|A)Vênus            |\n");
            printf("|B)Marte            |\n");
            printf("|C)Júpiter          |\n");
            printf("|D)Mercúrio         |\n");
            printf("|E)Saturno          |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°7): QUAL É O PLANETA MAIS PRÓXIMO DO SOL?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Marte            |\n");
                    printf("|                   |\n");
                    printf("|D)Mercúrio         |\n");
                    printf("|E)Saturno          |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°7): QUAL É O PLANETA MAIS PRÓXIMO DO SOL?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|D)Mercúrio         |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'D';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°7): QUAL É O PLANETA MAIS PRÓXIMO DO SOL?\n\n");
                    printf("*===================*\n");
                    printf("|A)Vênus            |\n");
                    printf("|B)Marte            |\n");
                    printf("|C)Júpiter          |\n");
                    printf("|D)Mercúrio         |\n");
                    printf("|E)Saturno          |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'D') || (Respo == 'd'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$10.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*======================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (D): [Mercúrio] |\n");
                printf("|Você Perdeu: R$10.000                                 |\n");
                printf("*======================================================*\n");
                DA = DA - 10000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°8): QUAL É A UNIDADE DE MEDIDA DE TEMPO NO SISTEMA INTERNACIONAL?\n\n");
            printf("*===================*\n");
            printf("|A)Segundo          |\n");
            printf("|B)Litro            |\n");
            printf("|C)Quilograma       |\n");
            printf("|D)Ampère           |\n");
            printf("|E)Metro            |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°8): QUAL É A UNIDADE DE MEDIDA DE TEMPO NO SISTEMA INTERNACIONAL?\n\n");
                    printf("*===================*\n");
                    printf("|A)Segundo          |\n");
                    printf("|                   |\n");
                    printf("|C)Quilograma       |\n");
                    printf("|D)Ampère           |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°8): QUAL É A UNIDADE DE MEDIDA DE TEMPO NO SISTEMA INTERNACIONAL?\n\n");
                    printf("*===================*\n");
                    printf("|A)Segundo          |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'A';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°8): QUAL É A UNIDADE DE MEDIDA DE TEMPO NO SISTEMA INTERNACIONAL?\n\n");
                    printf("*===================*\n");
                    printf("|A)Segundo          |\n");
                    printf("|B)Litro            |\n");
                    printf("|C)Quilograma       |\n");
                    printf("|D)Ampère           |\n");
                    printf("|E)Metro            |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) e Não Perdeu: R$10.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*=====================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (A): [Segundo] |\n");
                printf("|Você Perdeu: R$10.000                                |\n");
                printf("*=====================================================*\n");
                DA = DA - 10000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°9): QUAL É A MONTANHA MAIS ALTA DO MUNDO?\n\n");
            printf("*=========================*\n");
            printf("|A)Monte Kilimanjaro      |\n");
            printf("|B)Monte Everest          |\n");
            printf("|C)Monte McKinley (Denali)|\n");
            printf("|D)Montanha Vinson        |\n");
            printf("|E)Monte Aconcágua        |\n");
            printf("*=========================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°9): QUAL É A MONTANHA MAIS ALTA DO MUNDO?\n\n");
                    printf("*=========================*\n");
                    printf("|                         |\n");
                    printf("|B)Monte Everest          |\n");
                    printf("|C)Monte McKinley (Denali)|\n");
                    printf("|                         |\n");
                    printf("|E)Monte Aconcágua        |\n");
                    printf("*=========================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°9): QUAL É A MONTANHA MAIS ALTA DO MUNDO?\n\n");
                    printf("*================*\n");
                    printf("|                |\n");
                    printf("|B)Monte Everest |\n");
                    printf("|                |\n");
                    printf("|                |\n");
                    printf("|                |\n");
                    printf("*================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'B';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°9): QUAL É A MONTANHA MAIS ALTA DO MUNDO?\n\n");
                    printf("*=========================*\n");
                    printf("|A)Monte Kilimanjaro      |\n");
                    printf("|B)Monte Everest          |\n");
                    printf("|C)Monte McKinley (Denali)|\n");
                    printf("|D)Montanha Vinson        |\n");
                    printf("|E)Monte Aconcágua        |\n");
                    printf("*=========================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'B') || (Respo == 'b'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*================================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$10.000|\n");
                printf("*================================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*===========================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (B): [Monte Everest] |\n");
                printf("|Você Perdeu: R$10.000                                      |\n");
                printf("*===========================================================*\n");
                DA = DA - 10000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°10): QUAL É A MAIOR PRODUTORA DE CAFÉ DO MUNDO?\n\n");
            printf("*===================*\n");
            printf("|A)Brasil           |\n");
            printf("|B)Itália           |\n");
            printf("|C)Vietnã           |\n");
            printf("|D)Estados Unidos   |\n");
            printf("|E)Colômbia         |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°10): QUAL É A MAIOR PRODUTORA DE CAFÉ DO MUNDO?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Itália           |\n");
                    printf("|C)Vietnã           |\n");
                    printf("|                   |\n");
                    printf("|E)Colômbia         |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°10): QUAL É A MAIOR PRODUTORA DE CAFÉ DO MUNDO?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|E)Colômbia         |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'E';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°10): QUAL É A MAIOR PRODUTORA DE CAFÉ DO MUNDO?\n\n");
                    printf("*===================*\n");
                    printf("|A)Brasil           |\n");
                    printf("|B)Itália           |\n");
                    printf("|C)Vietnã           |\n");
                    printf("|D)Estados Unidos   |\n");
                    printf("|E)Colômbia         |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'E') || (Respo == 'e'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu: R$10.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*======================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (E): [Colômbia] |\n");
                printf("|Você Perdeu: R$10.000                                 |\n");
                printf("*======================================================*\n");
                DA = DA - 10000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 05");
            printf("\t\t*============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX               |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX               |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX               |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX               |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX               |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX               |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/               |\n");
            printf("\t\t|                                                            |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX   |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX  |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX  |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX  |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX  |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/  |\n");
            printf("\t\t*============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL FACIL]XXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*============================================================*\n");
            system("pause");
            system("color 0e");
            system("cls");

            printf("*=====================*\n");
            printf("|PRIMEIRA DICA: FELINO|\n");
            printf("*=====================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS2, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS2);
                printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]             |\n");
                printf("*================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                DA = DA + 10000;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*======================*\n");
                printf("|SEGUNDA DICA: SELVAGEM|\n");
                printf("*======================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS2, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s   |\n", MSS2);
                    printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]             |\n");
                    printf("*================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    DA = DA + 10000;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:( [APERTE ENTER PARA A PRÓXIMA DICA...] |\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*=======================*\n");
                    printf("|TERCEIRA DICA: LISTRADO|\n");
                    printf("*=======================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS2, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s   |\n", MSS2);
                        printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]             |\n");
                        printf("*================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        DA = DA + 10000;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:( [APERTE ENTER PARA A PRÓXIMA DICA...] |\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*=====================*\n");
                        printf("|QUARTA DICA: PODEROSO|\n");
                        printf("*=====================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS2, MS1);

                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s   |\n", MSS2);
                            printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]             |\n");
                            printf("*================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            DA = DA + 10000;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*======================*\n");
                            printf("|QUINTA DICA: CARNÍVORO|\n");
                            printf("*======================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS2, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS2);
                                printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]             |\n");
                                printf("*================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                DA = DA + 10000;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*========================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:(  E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s  |\n", MSS2);
                                printf("*========================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");

            printf("\t\t\n────────────────█████████───────────────");
            printf("\t\t\n──────────────█████████████─────────────");
            printf("\t\t\n───────────███████████████████──────────");
            printf("\t\t\n────────────────────────────────────────");
            printf("\t\t\n────────████████████████████████────────");
            printf("\t\t\n────────████████████████████████────────");
            printf("\t\t\n────────────────────────────────────────");
            printf("\t\t\n█████████─████████████████████─█████████");
            printf("\t\t\n█████████─████████████████████─█████████");
            printf("\t\t\n███───────████████────████████───────███");
            printf("\t\t\n███───────██████───██───██████───────███");
            printf("\t\t\n─███──────█████──████────█████──────███─");
            printf("\t\t\n──███─────████─────██─────████─────███──");
            printf("\t\t\n───███────████─────██─────████────███───");
            printf("\t\t\n────███───█████────██────█████───███────");
            printf("\t\t\n─────███──█████────██────█████──███─────");
            printf("\t\t\n──────███─███████──────███████─███──────");
            printf("\t\t\n───────██─████████████████████─██───────");
            printf("\t\t\n────────█─████████████████████─█────────");
            printf("\t\t\n────────────────────────────────────────");
            printf("\t\t\n──────────████████████████████──────────");
            printf("\t\t\n───────────██████████████████───────────");
            printf("\t\t\n─────────────██████████████─────────────");
            printf("\t\t\n───────────────███████████──────────────");
            printf("\t\t\n────────────────────────────────────────");
            printf("\t\t\n────────────────█████████───────────────");
            printf("\t\t\n──────────────█████████████─────────────");

            playSound(G, 500);
            playSound(G, 500);
            playSound(G, 500);
            playSound(E, 250);
            playSound(C, 250);
            playSound(D, 500);
            playSound(E, 500);
            playSound(F, 250);
            playSound(F, 250);
            playSound(F, 250);
            playSound(F, 250);
            playSound(E, 250);
            playSound(E, 250);
            playSound(E, 250);
            playSound(E, 250);
            playSound(D, 500);
            playSound(G, 500);
            playSound(G, 250);
            playSound(F, 250);
            playSound(E, 250);
            playSound(D, 250);
            playSound(C, 500);

            system("pause");
            system("cls");
            system("color 0e");

            printf("*=====================================================*\n");
            printf("|PARABÉNS, POR JOGAR E TER CHEGADO TÃO LONGE, POR ISSO|\n");
            printf("|VAMOS VER QUANTO VOCÊ VAI LEVAR PARA CASA.XXXXXXXXXXX|\n");
            printf("*=====================================================*\n");
            system("pause");
            system("cls");

            printf("\t\t*\n");
            Beep(550, 300);
            Sleep(800);
            printf("\t\t*\n");
            Beep(550, 300);
            Sleep(800);
            printf("\t\t*\n");
            Beep(550, 300);
            Sleep(800);

            printf("*=================*\n");
            printf("|VOCÊ LEVOU %d |\n", DA);
            printf("*=================*\n");

            printf("*=======================================================================*\n");
            printf("|SE VOCÊ QUISER SE ARRISCAR, E GANHAR MAIS PRÊMIOS EM OUTROS NÍVEIS.XXXX|\n");
            printf("|APERTE: [1 P/VOLTAR] AO MENU DE SELEÇÃO, MAS SE VOCÊ ESTIVER SATISFEITO|\n");
            printf("|APERTE: [9 P/SAIR].XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("*=======================================================================*\n");
            scanf("%d", &RETORNO);

            if (RETORNO == 9)
            {
                break;
            }
            else
            {
                Ajuda = 0;
                Ajuda2 = 0;
                Ajuda3 = 0;
                DA = 0;
                trofeu1 = trofeu1 + 1;
                system("pause");
                system("cls");
                goto dificuldade;
            }

        case 2:
            printf("\t\t*======================================================*\n");
            printf("\t\t|   /XX   /XX /XXXXXX /XX    /XX /XXXXXXXX /XX         |\n");
            printf("\t\t|  | XXX | XX|_  XX_/| XX   | XX| XX_____/| XX         |\n");
            printf("\t\t|  | XXXX| XX  | XX  | XX   | XX| XX      | XX         |\n");
            printf("\t\t|  | XX XX XX  | XX  |  XX / XX/| XXXXX   | XX         |\n");
            printf("\t\t|  | XX  XXXX  | XX      XX XX/ | XX__/   | XX         |\n");
            printf("\t\t|  | XX   XXX  | XX       XXX/  | XX      | XX         |\n");
            printf("\t\t|  | XX    XX /XXXXXX      X/   | XXXXXXXX| XXXXXXXX   |\n");
            printf("\t\t|  |__/   __/|______/     _/    |________/|________/   |\n");
            printf("\t\t|                                                      |\n");
            printf("\t\t|                            /XXXXXX                   |\n");
            printf("\t\t|                           /XX__  XX                  |\n");
            printf("\t\t|                          |__/     XX                 |\n");
            printf("\t\t|                             /XXXXXX/                 |\n");
            printf("\t\t|                            /XX____/                  |\n");
            printf("\t\t|                           | XX                       |\n");
            printf("\t\t|                           | XXXXXXXX                 |\n");
            printf("\t\t|                           |________/                 |\n");
            printf("\t\t*======================================================*\n");
            printf("\t\t|##################||RODADA PERLIMINAR||###############|\n");
            printf("\t\t*======================================================*\n");
            system("pause");

            system("cls");
            system("color 4f");

            printf("\t\t\t  /XXXXXXXX /XX      /XX        /XXXXXX  /XX   /XX  /XXXXXX   /XXXXXX    \n");
            printf("\t\t\t | XX_____/| XXX    /XXX       /XX__  XX| XX  | XX /XX__  XX /XX__  XX   \n");
            printf("\t\t\t | XX      | XXXX  /XXXX      | XX   __/| XX  | XX| XX    XX| XX   __/   \n");
            printf("\t\t\t | XXXXX   | XX XX/XX XX      |  XXXXXX | XX  | XX| XXXXXXXX|  XXXXXX    \n");
            printf("\t\t\t | XX__/   | XX  XXX| XX        ____  XX| XX  | XX| XX__  XX  ____  XX   \n");
            printf("\t\t\t | XX      | XX   X | XX       /XX    XX| XX  | XX| XX  | XX /XX    XX   \n");
            printf("\t\t\t | XXXXXXXX| XX     | XX      |  XXXXXX/|  XXXXXX/| XX  | XX|  XXXXXX    \n");
            printf("\t\t\t |________/|__/     |__/        ______/   ______/ |__/  |__/  ______/    \n");

            printf("\t\t   /XX      /XX  /XXXXXX  /XXXXXXX   /XXXXXX   /XXXXXX   /XXXXXX        \n");
            printf("\t\t  | XXX    /XXX /XX__  XX| XX__  XX /XX__  XX /XX__  XX /XX__  XX       \n");
            printf("\t\t  | XXXX  /XXXX| XX    XX| XX    XX| XX   __/| XX    XX| XX   __/       \n");
            printf("\t\t  | XX XX/XX XX| XXXXXXXX| XXXXXXX/| XX      | XXXXXXXX|  XXXXXX        \n");
            printf("\t\t  | XX  XXX| XX| XX__  XX| XX__  XX| XX      | XX__  XX  ____  XX       \n");
            printf("\t\t  | XX   X | XX| XX  | XX| XX    XX| XX    XX| XX  | XX /XX    XX       \n");
            printf("\t\t  | XX     | XX| XX  | XX| XX  | XX|  XXXXXX/| XX  | XX|  XXXXXX/       \n");
            printf("\t\t  |__/     |__/|__/  |__/|__/  |__/  ______/ |__/  |__/  ______/        \n");
            Beep(270, 250);
            Sleep(650);

            system("cls");
            system("color 60");

            printf("\t\t /XXXXXXX                                                                     \n");
            printf("\t\t| XX__  XX                                                                    \n");
            printf("\t\t| XX    XX /XXXXXX   /XXXXXX   /XXXXXX   /XXXXXX   /XXXXXX  /XXXXXX   /XXXXXX \n");
            printf("\t\t| XXXXXXX//XX__  XX /XX__  XX /XX__  XX |____  XX /XX__  XX|____  XX /XX__  XX\n");
            printf("\t\t| XX____/| XX   __/| XXXXXXXX| XX    XX  /XXXXXXX| XX   __/ /XXXXXXX| XX   __/\n");
            printf("\t\t| XX     | XX      | XX_____/| XX  | XX /XX__  XX| XX      /XX__  XX| XX      \n");
            printf("\t\t| XX     | XX      |  XXXXXXX| XXXXXXX/|  XXXXXXX| XX     |  XXXXXXX| XX      \n");
            printf("\t\t|__/     |__/        _______/| XX____/   _______/|__/       _______/|__/      \n");
            printf("\t\t                             | XX                                             \n");
            printf("\t\t                             | XX                                             \n");
            printf("\t\t                             |__/                                             \n");
            Beep(305, 315);
            Sleep(650);

            system("cls");
            system("color a0");

            printf("\t\t\t  /XX    /XX   /XXXXXX  /XXXXXX \n");
            printf("\t\t\t   XX   | XX  /XX__  XX|_  XX_/ \n");
            printf("\t\t\t   XX   | XX | XX    XX  | XX   \n");
            printf("\t\t\t    XX / XX/ | XXXXXXXX  | XX   \n");
            printf("\t\t\t     XX XX/  | XX__  XX  | XX   \n");
            printf("\t\t\t      XXX/   | XX  | XX  | XX   \n");
            printf("\t\t\t       X/    | XX  | XX /XXXXXX \n");
            printf("\t\t\t       _/    |__/  |__/|______/ \n");
            Beep(550, 700);
            Sleep(700);
            system("cls");
            system("color 0e");

            printf("\n\nPERGUNTA N°1):O QUE A PALAVRA LEGEND SIGNIFICA EM PORTUGUÊS?\n\n");
            printf("*===================*\n");
            printf("|A)Legenda          |\n");
            printf("|B)Conto            |\n");
            printf("|C)Legendario       |\n");
            printf("|D)Lenda            |\n");
            printf("|E)Mitologia        |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'D') || (Respo == 'd'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 5000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$5.000 |\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");

            printf("\n\nPERGUNTA N°2): QUAL O NÚMERO MINIMO DE JOGADORES EM CADA TIME, EM UMA PARTIDA DE FUTEBOL?\n\n");

            printf("*===================*\n");
            printf("|A)7 Jogadores      |\n");
            printf("|B)10 Jogadores     |\n");
            printf("|C)9 Jogadores      |\n");
            printf("|D)8 Jogadores      |\n");
            printf("|E)13 Jogadores     |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 5000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$5.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°3): QUAIS AS DUAS DATAS QUE SÃO COMEMORADAS EM NOVEMBRO?\n\n");

            printf("*===============================================================*\n");
            printf("|A)Independência do Brasil e Dia da Bandeira                    |\n");
            printf("|B)Black Friday e Dia da Árvore                                 |\n");
            printf("|C)Proclamação da República e Dia Nacional da Consciência Negra |\n");
            printf("|D)Dia de Finados e Dia Nacional do Livro                       |\n");
            printf("|E)Dia Mundial do Abraço e Dia Internacional da Felicidade      |\n");
            printf("*===============================================================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'C') || (Respo == 'c'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 5750;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$5.750|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°4): EM QUE PERÍODO DA PRÉ-HISTÓRIA, O FOGO FOI DESCOBERTO?\n\n");

            printf("*===================*\n");
            printf("|A)Neolítico        |\n");
            printf("|B)Paleolítico      |\n");
            printf("|C)Idade dos Metais |\n");
            printf("|D)Idade Média      |\n");
            printf("|E)Mesolítico       |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'B') || (Respo == 'b'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$12.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°5): QUAL FOI O RECURSO UTILIZADO INICIALMENTE PELO HOMEM\nPARA EXPLICAR A ORIGEM DAS COISAS?\n\n");

            printf("*=======================*\n");
            printf("|A)A Filosofia          |\n");
            printf("|B)Intuição ou instinto |\n");
            printf("|C)A Biologia           |\n");
            printf("|D)A Astronomia         |\n");
            printf("|E)A Mitologia          |\n");
            printf("*=======================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'E') || (Respo == 'e'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$12.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            system("color 05");
            printf("\t\t*============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX               |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX               |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX               |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX               |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX               |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX               |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/               |\n");
            printf("\t\t|                                                            |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX   |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX  |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX  |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX  |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX  |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/  |\n");
            printf("\t\t*============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL MÉDIO]XXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*============================================================*\n");
            system("pause");
            system("cls");
            system("color 02");
            printf("\t*==============================================================*\n");
            printf("\t|Lembre-se: O jogo ' Mega Senha'. É um jogo de palavras em que |\n");
            printf("\t|Os participantes precisam acertar uma palavra-chave com base  |\n");
            printf("\t|Em dicas fornecidas pelo apresentador(Maquina). O objetivo    |\n");
            printf("\t|É adivinhar a palavra correta para ganhar um tipo de ajuda    |\n");
            printf("\t|Nas perguntas 'reais', É um jogo divertido e desafiador que   |\n");
            printf("\t|Testa o conhecimento e a agilidade mental dos jogadores.XXXXXX|\n");
            printf("\t*==============================================================*\n\n");
            printf("\n\nPRESSIONE ENTER PARA CONTINUAR...");
            getch();
            system("color 0e");
            system("cls");

            printf("*==========================*\n");
            printf("|PRIMEIRA DICA: INSTITUIÇÃO|\n");
            printf("*==========================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS3, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*===================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s     |\n", MSS3);
                printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]          |\n");
                printf("*===================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                Ajuda = Ajuda + 1;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*======================*\n");
                printf("|SEGUNDA DICA: FINANÇAS|\n");
                printf("*======================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS3, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*===================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s     |\n", MSS3);
                    printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]          |\n");
                    printf("*===================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    Ajuda = Ajuda + 1;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*==========================*\n");
                    printf("|TERCEIRA DICA: EMPRÉSTIMOS|\n");
                    printf("*==========================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS3, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*===================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s     |\n", MSS3);
                        printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]          |\n");
                        printf("*===================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        Ajuda = Ajuda + 1;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*=====================*\n");
                        printf("|QUARTA DICA: AGÊNCIA |\n");
                        printf("*=====================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS3, MS1);

                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*==================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s    |\n", MSS3);
                            printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]         |\n");
                            printf("*==================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            Ajuda = Ajuda + 1;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*=============================*\n");
                            printf("|QUINTA DICA: CAIXA ELETRÔNICO|\n");
                            printf("*=============================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS3, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*===================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s     |\n", MSS3);
                                printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]          |\n");
                                printf("*===================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                Ajuda = Ajuda + 1;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*===========================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:(  E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s     |\n", MSS3);
                                printf("*===========================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");

            printf("\n\nPERGUNTA N°6):DE ONDE É A INVENÇÃO DO CHUVEIRO ELÉTRICO?\n\n");
            printf("*===================*\n");
            printf("|A)França           |\n");
            printf("|B)Inglaterra       |\n");
            printf("|C)Brasil           |\n");
            printf("|D)Austrália        |\n");
            printf("|E)Itália           |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'C') || (Respo == 'c'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*=============================================*\n");
                printf("|Parabéns Você Acertou:) e Ganhou: R$12.000 |\n");
                printf("*=============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");

            printf("\n\nPERGUNTA N°7): QUAIS O MENOR E O MAIOR PAÍS DO MUNDO?\n\n");

            printf("*========================*\n");
            printf("|A)Vaticano e Rússia     |\n");
            printf("|B)Nauru e China         |\n");
            printf("|C)Mônaco e Canadá       |\n");
            printf("|D)Malta e Estados Unidos|\n");
            printf("|E)São Marino e Índia    |\n");
            printf("*========================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*============================================*\n");
                printf("|Parabéns Você Acertou:) e Ganhou: R$12.000 |\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena Você Errou:(  Não Ganhou Nada    |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°8): QUAL O GRUPO EM QUE TODAS AS PALAVRAS FORAM ESCRITAS CORRETAMENTE?\n\n");

            printf("*====================================================*\n");
            printf("|A)Asterístico, beneficiente, meteorologia, entertido|\n");
            printf("|B)Asterisco, beneficente, meteorologia, entretido   |\n");
            printf("|C)Asterisco, beneficente, metereologia, entretido   |\n");
            printf("|D)Asterístico, beneficiente, metereologia, entretido|\n");
            printf("|E)Asterisco, beneficiente, metereologia, entretido  |\n");
            printf("*====================================================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'B') || (Respo == 'b'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*============================================*\n");
                printf("|Parabéns Você Acertou:) e Ganhou: R$12.000 |\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena Você Errou:(  Não Ganhou Nada    |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°9): EM QUAL LOCAL DA ÁSIA O PORTUGUÊS É LÍNGUA OFICIAL?\n\n");

            printf("*================*\n");
            printf("|A)Índia         |\n");
            printf("|B)Filipinas     |\n");
            printf("|C)Moçambique    |\n");
            printf("|D)Macau         |\n");
            printf("|E)Portugal      |\n");
            printf("*================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'D') || (Respo == 'd'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*============================================*\n");
                printf("|Parabéns Você Acertou:) e Ganhou: R$12.000 |\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena Você Errou:(  Não Ganhou Nada    |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°10): COMO É A CONJUGAÇÃO DO VERBO CABER NA 1.ª PESSOA DO SINGULAR DO PRESENTE DO INDICATIVO?\n\n");

            printf("*==========================*\n");
            printf("|A)Eu caibo                |\n");
            printf("|B)Ele cabe                |\n");
            printf("|C)Que eu caiba            |\n");
            printf("|D)Eu cabo                 |\n");
            printf("|E)Nenhuma das alternativas|\n");
            printf("*==========================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*============================================*\n");
                printf("|Parabéns Você Acertou:) e Ganhou: R$12.000 |\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena Você Errou:(  Não Ganhou Nada    |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            system("color 05");
            printf("\t\t*============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX               |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX               |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX               |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX               |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX               |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX               |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/               |\n");
            printf("\t\t|                                                            |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX   |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX  |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX  |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX  |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX  |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/  |\n");
            printf("\t\t*============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL MÉDIO]XXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*============================================================*\n");
            system("pause");
            system("color 0e");
            system("cls");

            printf("*=======================*\n");
            printf("|PRIMEIRA DICA: REGISTRO|\n");
            printf("*=======================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS7, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*====================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS7);
                printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]             |\n");
                printf("*====================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                Ajuda2 = Ajuda2 + 1;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*====================*\n");
                printf("|SEGUNDA DICA: IMAGEM|\n");
                printf("*====================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS7, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*====================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS7);
                    printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]             |\n");
                    printf("*====================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    Ajuda2 = Ajuda2 + 1;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*=====================*\n");
                    printf("|TERCEIRA DICA: CÂMERA|\n");
                    printf("*=====================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS7, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*====================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS7);
                        printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]             |\n");
                        printf("*====================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        Ajuda2 = Ajuda2 + 1;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*====================*\n");
                        printf("|QUARTA DICA: MEMÓRIA|\n");
                        printf("*====================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS7, MS1);
                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*====================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS7);
                            printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]             |\n");
                            printf("*====================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            Ajuda2 = Ajuda2 + 1;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*====================*\n");
                            printf("|QUINTA DICA: MOMENTO|\n");
                            printf("*====================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS7, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*====================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS7);
                                printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]             |\n");
                                printf("*====================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                Ajuda2 = Ajuda2 + 1;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*============================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:( E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s  |\n", MSS7);
                                printf("*============================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }

            getch();
            system("cls");
            system("color 03");

            printf("\t\t*==========================================================================*\n");
            printf("\t\t|  /XX   /XX  /XXXXXX  /XXXXXXX   /XXXXXX        /XXXXXXX   /XXXXXX        |\n");
            printf("\t\t| | XX  | XX /XX__  XX| XX__  XX /XX__  XX      | XX__  XX /XX__  XX       |\n");
            printf("\t\t| | XX  | XX| XX    XX| XX    XX| XX    XX      | XX    XX| XX    XX       |\n");
            printf("\t\t| | XXXXXXXX| XX  | XX| XXXXXXX/| XXXXXXXX      | XX  | XX| XXXXXXXX       |\n");
            printf("\t\t| | XX__  XX| XX  | XX| XX__  XX| XX__  XX      | XX  | XX| XX__  XX       |\n");
            printf("\t\t| | XX  | XX| XX  | XX| XX    XX| XX  | XX      | XX  | XX| XX  | XX       |\n");
            printf("\t\t| | XX  | XX|  XXXXXX/| XX  | XX| XX  | XX      | XXXXXXX/| XX  | XX       |\n");
            printf("\t\t| |__/  |__/  ______/ |__/  |__/|__/  |__/      |_______/ |__/  |__/       |\n");
            printf("\t\t|                                                                          |\n");
            printf("\t\t|                                                                          |\n");
            printf("\t\t|                                                                          |\n");
            printf("\t\t|  /XX    /XX /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX  /XXXXXXXX  |\n");
            printf("\t\t| | XX   | XX| XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX| XX_____/  |\n");
            printf("\t\t| | XX   | XX| XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX        |\n");
            printf("\t\t| |  XX / XX/| XXXXX   | XXXXXXX/| XX  | XX| XXXXXXXX| XX  | XX| XXXXX     |\n");
            printf("\t\t|     XX XX/ | XX__/   | XX__  XX| XX  | XX| XX__  XX| XX  | XX| XX__/     |\n");
            printf("\t\t|      XXX/  | XX      | XX    XX| XX  | XX| XX  | XX| XX  | XX| XX        |\n");
            printf("\t\t|       X/   | XXXXXXXX| XX  | XX| XXXXXXX/| XX  | XX| XXXXXXX/| XXXXXXXX  |\n");
            printf("\t\t|      _/    |________/|__/  |__/|_______/ |__/  |__/|_______/ |________/  |\n");
            printf("\t\t*==========================================================================*\n");
            printf("\t\t|Agora Começa as Perguntas Reais, Cada Uma Valera Um Determinado Valor     |\n");
            printf("\t\t*==========================================================================*\n");

            printf("\nPRESSIONE ENTER PARA CONTINUAR...");
            getch();

            system("cls");
            system("color 0e");
            printf("*============================*\n");
            printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
            printf("*============================*\n");

            printf("\n\nPERGUNTA N°1): QUAL É O NOME DA FAMOSA PINTORA MEXICANA CONHECIDA POR SUAS OBRAS DE ARTE SURREAIS?\n\n");
            printf("*===================*\n");
            printf("|A)Frida Kahlo      |\n");
            printf("|B)Georgia O'Keeffe |\n");
            printf("|C)Salvador Dalí    |\n");
            printf("|D)Pablo Picasso    |\n");
            printf("|E)Vincent van Gogh |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
                    printf("*============================*\n");

                    printf("\n\nPERGUNTA N°1): QUAL É O NOME DA FAMOSA PINTORA MEXICANA CONHECIDA POR SUAS OBRAS DE ARTE SURREAIS?\n\n");
                    printf("*===================*\n");
                    printf("|A)Frida Kahlo      |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|D)Pablo Picasso    |\n");
                    printf("|E)Vincent van Gogh |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°1): QUAL É O NOME DA FAMOSA PINTORA MEXICANA CONHECIDA POR SUAS OBRAS DE ARTE SURREAIS?\n\n");
                    printf("*===================*\n");
                    printf("|A)Frida Kahlo      |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
                    printf("*============================*\n");

                    printf("\n\nPERGUNTA N°1): QUAL É O NOME DA FAMOSA PINTORA MEXICANA CONHECIDA POR SUAS OBRAS DE ARTE SURREAIS?\n\n");
                    printf("*===================*\n");
                    printf("|A)Frida Kahlo      |\n");
                    printf("|B)Georgia O'Keeffe |\n");
                    printf("|C)Salvador Dalí    |\n");
                    printf("|D)Pablo Picasso    |\n");
                    printf("|E)Vincent van Gogh |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$5.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (A): [Frida Kahlo] |\n");
                printf("|Você Perdeu: R$5.000                                      |\n");
                printf("*==========================================================*\n");
                DA = DA - 5000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*============================*\n");
            printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
            printf("*============================*\n");

            printf("\n\nPERGUNTA N°2): QUAL É O ELEMENTO QUÍMICO REPRESENTADO PELO SÍMBOLO 'Fe'?\n\n");
            printf("*===================*\n");
            printf("|A)Cálcio           |\n");
            printf("|B)Mercúrio         |\n");
            printf("|C)Fósforo          |\n");
            printf("|D)Ferro            |\n");
            printf("|E)Flúor            |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
                    printf("*============================*\n");
                    printf("\n\nPERGUNTA N°2): QUAL É O ELEMENTO QUÍMICO REPRESENTADO PELO SÍMBOLO 'Fe'?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Mercúrio         |\n");
                    printf("|                   |\n");
                    printf("|D)Ferro            |\n");
                    printf("|E)Flúor            |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°2): QUAL É O ELEMENTO QUÍMICO REPRESENTADO PELO SÍMBOLO 'Fe'?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|D)Ferro            |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
                    printf("*============================*\n");
                    printf("\n\nPERGUNTA N°2): QUAL É O ELEMENTO QUÍMICO REPRESENTADO PELO SÍMBOLO 'Fe'?\n\n");
                    printf("*===================*\n");
                    printf("|A)Cálcio           |\n");
                    printf("|B)Mercúrio         |\n");
                    printf("|C)Fósforo          |\n");
                    printf("|D)Ferro            |\n");
                    printf("|E)Flúor            |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'D') || (Respo == 'd'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$5.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*====================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (D): [Ferro] |\n");
                printf("|Você Perdeu: R$5.000                                |\n");
                printf("*====================================================*\n");
                DA = DA - 5000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*============================*\n");
            printf("|ESSA PERGUNTA VALE: R$5.750 |\n");
            printf("*============================*\n");

            printf("\n\nPERGUNTA N°3): QUAL É A CAPITAL DA ALEMANHA?\n\n");
            printf("*===================*\n");
            printf("|A)Munique          |\n");
            printf("|B)Frankfurt        |\n");
            printf("|C)Berlim           |\n");
            printf("|D)Hamburgo         |\n");
            printf("|E)Colônia          |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.750 |\n");
                    printf("*============================*\n");

                    printf("\n\nPERGUNTA N°3): QUAL É A CAPITAL DA ALEMANHA?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Frankfurt        |\n");
                    printf("|C)Berlim           |\n");
                    printf("|                   |\n");
                    printf("|E)Colônia          |\n");
                    printf("*===================*\n");

                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°3): QUAL É A CAPITAL DA ALEMANHA?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|C)Berlim           |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");

                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.750 |\n");
                    printf("*============================*\n");

                    printf("\n\nPERGUNTA N°3): QUAL É A CAPITAL DA ALEMANHA?\n\n");
                    printf("*===================*\n");
                    printf("|A)Munique          |\n");
                    printf("|B)Frankfurt        |\n");
                    printf("|C)Berlim           |\n");
                    printf("|D)Hamburgo         |\n");
                    printf("|E)Colônia          |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'C') || (Respo == 'c'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$5.750|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*=====================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (C): [Berlim] |\n");
                printf("|Você Perdeu: R$5.750                                 |\n");
                printf("*=====================================================*\n");
                DA = DA - 5750;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°4): QUAL FOI O PRIMEIRO HOMEM A PISAR NA LUA??\n\n");

            printf("*==================*\n");
            printf("|A) Neil Armstrong |\n");
            printf("|B) Buzz Aldrin    |\n");
            printf("|C) Alan Shepard   |\n");
            printf("|D) Yuri Gagarin   |\n");
            printf("|E) John Glenn     |\n");
            printf("*==================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS  ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°4): QUAL FOI O PRIMEIRO HOMEM A PISAR NA LUA??\n\n");

                    printf("*==================*\n");
                    printf("|A) Neil Armstrong |\n");
                    printf("|                  |\n");
                    printf("|                  |\n");
                    printf("|D) Yuri Gagarin   |\n");
                    printf("|E) John Glenn     |\n");
                    printf("*==================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°4): QUAL FOI O PRIMEIRO HOMEM A PISAR NA LUA??\n\n");

                    printf("*==================*\n");
                    printf("|A) Neil Armstrong |\n");
                    printf("|                  |\n");
                    printf("|                  |\n");
                    printf("|                  |\n");
                    printf("|                  |\n");
                    printf("*==================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°4): QUAL FOI O PRIMEIRO HOMEM A PISAR NA LUA??\n\n");

                    printf("*==================*\n");
                    printf("|A) Neil Armstrong |\n");
                    printf("|B) Buzz Aldrin    |\n");
                    printf("|C) Alan Shepard   |\n");
                    printf("|D) Yuri Gagarin   |\n");
                    printf("|E) John Glenn     |\n");
                    printf("*==================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*================================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$12.000|\n");
                printf("*================================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*=============================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (A): [Neil Armstrong] |\n");
                printf("|Você Perdeu: R$12.000                                        |\n");
                printf("*=============================================================*\n");
                DA = DA - 12000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°5): QUAL É O MAIOR RIO DO MUNDO?\n\n");

            printf("*=================*\n");
            printf("|A)Rio Volga      |\n");
            printf("|B)Rio Yangtzé    |\n");
            printf("|C)Rio Mississipi |\n");
            printf("|D)Rio Nilo       |\n");
            printf("|E)Rio Amazonas   |\n");
            printf("*=================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS  ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°5): QUAL É O MAIOR RIO DO MUNDO?\n\n");

                    printf("*=================*\n");
                    printf("|A)Rio Volga      |\n");
                    printf("|B)Rio Yangtzé    |\n");
                    printf("|                 |\n");
                    printf("|                 |\n");
                    printf("|E)Rio Amazonas   |\n");
                    printf("*=================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°5): QUAL É O MAIOR RIO DO MUNDO?\n\n");

                    printf("*=================*\n");
                    printf("|                 |\n");
                    printf("|                 |\n");
                    printf("|                 |\n");
                    printf("|                 |\n");
                    printf("|E)Rio Amazonas   |\n");
                    printf("*=================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°5): QUAL É O MAIOR RIO DO MUNDO?\n\n");

                    printf("*=================*\n");
                    printf("|A)Rio Volga      |\n");
                    printf("|B)Rio Yangtzé    |\n");
                    printf("|C)Rio Mississipi |\n");
                    printf("|D)Rio Nilo       |\n");
                    printf("|E)Rio Amazonas   |\n");
                    printf("*=================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'E') || (Respo == 'e'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*==============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu: R$12.000|\n");
                printf("*==============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*===========================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (E): [Rio Amazonas]  |\n");
                printf("|Você Perdeu: R$12.000                                      |\n");
                printf("*===========================================================*\n");
                DA = DA - 12000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            getch();
            system("cls");
            system("color 05");
            printf("\t\t*============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX               |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX               |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX               |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX               |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX               |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX               |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/               |\n");
            printf("\t\t|                                                            |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX   |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX  |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX  |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX  |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX  |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/  |\n");
            printf("\t\t*============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL MÉDIO]XXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*============================================================*\n");
            printf("\n\nPRESSIONE ENTER PARA CONTINUAR...");
            getch();
            system("color 0e");
            system("cls");

            printf("*============================================*\n");
            printf("|PRIMEIRA DICA: INSTRUMENTO MUSICAL DE CORDAS|\n");
            printf("*============================================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS4, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*=================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS4);
                printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]           |\n");
                printf("*=================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                Ajuda3 = Ajuda3 + 1;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*==================================*\n");
                printf("|SEGUNDA DICA: POSSUI QUATRO CORDAS|\n");
                printf("*==================================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS4, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*=================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS4);
                    printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]           |\n");
                    printf("*=================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    Ajuda3 = Ajuda3 + 1;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*=================================*\n");
                    printf("|TERCEIRA DICA: TOCADO COM UM ARCO|\n");
                    printf("*=================================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS4, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*=================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS4);
                        printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]           |\n");
                        printf("*=================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        Ajuda3 = Ajuda3 + 1;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*===============================================================*\n");
                        printf("|QUARTA DICA: É UM DOS INSTRUMENTOS PRINCIPAIS DE UMA ORQUESTRA |\n");
                        printf("*===============================================================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS4, MS1);

                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*=================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS4);
                            printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]           |\n");
                            printf("*=================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            Ajuda3 = Ajuda3 + 1;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*======================================================*\n");
                            printf("|QUINTA DICA: PRODUZ SOM ATRAVÉS DA VIBRAÇÃO DAS CORDAS|\n");
                            printf("*======================================================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS4, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*=================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS4);
                                printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]           |\n");
                                printf("*=================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                Ajuda3 = Ajuda3 + 1;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*=========================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:(  E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s |\n", MSS4);
                                printf("*=========================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°6):  QUEM FOI O FILÓSOFO GREGO DISCÍPULO DE SÓCRATES, CONHECIDO POR SUAS CONTRIBUIÇÕES À FILOSOFIA\n E POR SER O TUTOR DE ALEXANDRE, O GRANDE?\n\n");
            printf("*===================*\n");
            printf("|A)Platão           |\n");
            printf("|B)Aristóteles      |\n");
            printf("|C)Diógenes         |\n");
            printf("|D)Epicuro          |\n");
            printf("|E)Heráclito        |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°6):  QUEM FOI O FILÓSOFO GREGO DISCÍPULO DE SÓCRATES, CONHECIDO POR SUAS CONTRIBUIÇÕES À FILOSOFIA\n E POR SER O TUTOR DE ALEXANDRE, O GRANDE?\n\n");
                    printf("*===================*\n");
                    printf("|A)Platão           |\n");
                    printf("|                   |\n");
                    printf("|C)Diógenes         |\n");
                    printf("|D)Epicuro          |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°6):  QUEM FOI O FILÓSOFO GREGO DISCÍPULO DE SÓCRATES, CONHECIDO POR SUAS CONTRIBUIÇÕES À FILOSOFIA\n E POR SER O TUTOR DE ALEXANDRE, O GRANDE?\n\n");
                    printf("*===================*\n");
                    printf("|A)Platão           |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'A';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°6):  QUEM FOI O FILÓSOFO GREGO DISCÍPULO DE SÓCRATES, CONHECIDO POR SUAS CONTRIBUIÇÕES À FILOSOFIA\n E POR SER O TUTOR DE ALEXANDRE, O GRANDE?\n\n");
                    printf("*===================*\n");
                    printf("|A)Platão           |\n");
                    printf("|B)Aristóteles      |\n");
                    printf("|C)Diógenes         |\n");
                    printf("|D)Epicuro          |\n");
                    printf("|E)Heráclito        |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$12.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*====================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (A): [Platão] |\n");
                printf("|Você Perdeu: R$12.000                               |\n");
                printf("*====================================================*\n");
                DA = DA - 12000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°7): QUAL É O PROCESSO PELO QUAL UM SÓLIDO PASSA DIRETAMENTE PARA O ESTADO GASOSO\n SEM PASSAR PELO ESTADO LÍQUIDO INTERMEDIÁRIO??\n\n");
            printf("*===================*\n");
            printf("|A)Evaporação       |\n");
            printf("|B)Fusão            |\n");
            printf("|C)Condensação      |\n");
            printf("|D)Sublimação       |\n");
            printf("|E)Solidificação    |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°7): QUAL É O PROCESSO PELO QUAL UM SÓLIDO PASSA DIRETAMENTE PARA O ESTADO GASOSO\n SEM PASSAR PELO ESTADO LÍQUIDO INTERMEDIÁRIO??\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Fusão            |\n");
                    printf("|                   |\n");
                    printf("|D)Sublimação       |\n");
                    printf("|E)Solidificação    |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|D)Sublimação       |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'D';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°7): QUAL É O PROCESSO PELO QUAL UM SÓLIDO PASSA DIRETAMENTE PARA O ESTADO GASOSO\n SEM PASSAR PELO ESTADO LÍQUIDO INTERMEDIÁRIO??\n\n");
                    printf("*===================*\n");
                    printf("|A)Evaporação       |\n");
                    printf("|B)Fusão            |\n");
                    printf("|C)Condensação      |\n");
                    printf("|D)Sublimação       |\n");
                    printf("|E)Solidificação    |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'D') || (Respo == 'd'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$12.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*========================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (D): [Sublimação] |\n");
                printf("|Você Perdeu: R$12.000                                   |\n");
                printf("*========================================================*\n");
                DA = DA - 12000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°8): QUE FAMOSO CIENTISTA FORMULOU A TEORIA DA RELATIVIDADE?\n\n");
            printf("*===================*\n");
            printf("|A)Isaac Newton     |\n");
            printf("|B)Galileu Galilei  |\n");
            printf("|C)Albert Einstein  |\n");
            printf("|D)AJohannes Kepler |\n");
            printf("|E)Niels Bohr       |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°8): QUE FAMOSO CIENTISTA FORMULOU A TEORIA DA RELATIVIDADE?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Galileu Galilei  |\n");
                    printf("|C)Albert Einstein  |\n");
                    printf("|D)AJohannes Kepler |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°8): QUE FAMOSO CIENTISTA FORMULOU A TEORIA DA RELATIVIDADE?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|C)Albert Einstein  |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'C';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°8): QUE FAMOSO CIENTISTA FORMULOU A TEORIA DA RELATIVIDADE?\n\n");
                    printf("*===================*\n");
                    printf("|A)Isaac Newton     |\n");
                    printf("|B)Galileu Galilei  |\n");
                    printf("|C)Albert Einstein  |\n");
                    printf("|D)AJohannes Kepler |\n");
                    printf("|E)Niels Bohr       |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'C') || (Respo == 'c'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) e Não Perdeu: R$12.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*=============================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (C): [Albert Einstein] |\n");
                printf("|Você Perdeu: R$12.000                                        |\n");
                printf("*==============================================================*\n");
                DA = DA - 12000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°9): QUAL É O AUTOR DO FAMOSO ROMANCE 'DOM QUIXOTE'?\n\n");
            printf("*======================*\n");
            printf("|A)Victor Hugo         |\n");
            printf("|B)Franz Kafka         |\n");
            printf("|C)Fyodor Dostoevsky   |\n");
            printf("|D)Jane Austen         |\n");
            printf("|E)Miguel de Cervantes |\n");
            printf("*======================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°9): QUAL É O AUTOR DO FAMOSO ROMANCE 'DOM QUIXOTE'?\n\n");
                    printf("*======================*\n");
                    printf("|                      |\n");
                    printf("|B)Franz Kafka         |\n");
                    printf("|                      |\n");
                    printf("|D)Jane Austen         |\n");
                    printf("|E)Miguel de Cervantes |\n");
                    printf("*======================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°9): QUAL É O AUTOR DO FAMOSO ROMANCE 'DOM QUIXOTE'?\n\n");
                    printf("*======================*\n");
                    printf("|A)Victor Hugo         |\n");
                    printf("|B)Franz Kafka         |\n");
                    printf("|C)Fyodor Dostoevsky   |\n");
                    printf("|D)Jane Austen         |\n");
                    printf("|E)Miguel de Cervantes |\n");
                    printf("*======================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'E';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°9): QUAL É O AUTOR DO FAMOSO ROMANCE 'DOM QUIXOTE'?\n\n");
                    printf("*======================*\n");
                    printf("|A)Victor Hugo         |\n");
                    printf("|B)Franz Kafka         |\n");
                    printf("|C)Fyodor Dostoevsky   |\n");
                    printf("|D)Jane Austen         |\n");
                    printf("|E)Miguel de Cervantes |\n");
                    printf("*======================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'E') || (Respo == 'e'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*================================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$12.000|\n");
                printf("*================================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*=================================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (E): [Miguel de Cervantes] |\n");
                printf("|Você Perdeu: R$12.000                                            |\n");
                printf("*=================================================================*\n");
                DA = DA - 12000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°10): QUAL É O PROCESSO PELO QUAL O OXIGÊNIO E A GLICOSE SÃO CONVERTIDOS EM\n ENERGIA NAS CÉLULAS?\n\n");
            printf("*=====================*\n");
            printf("|A)Fotossíntese       |\n");
            printf("|B)Fermentação        |\n");
            printf("|C)Digestão           |\n");
            printf("|D)Respiração celular |\n");
            printf("|E)Transpiração       |\n");
            printf("*=====================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°10): QUAL É O PROCESSO PELO QUAL O OXIGÊNIO E A GLICOSE SÃO CONVERTIDOS EM\n ENERGIA NAS CÉLULAS?\n\n");
                    printf("*=====================*\n");
                    printf("|A)Fotossíntese       |\n");
                    printf("|                     |\n");
                    printf("|                     |\n");
                    printf("|D)Respiração celular |\n");
                    printf("|E)Transpiração       |\n");
                    printf("*=====================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°10): QUAL É O PROCESSO PELO QUAL O OXIGÊNIO E A GLICOSE SÃO CONVERTIDOS EM\n ENERGIA NAS CÉLULAS?\n\n");
                    printf("*=====================*\n");
                    printf("|                     |\n");
                    printf("|                     |\n");
                    printf("|                     |\n");
                    printf("|D)Respiração celular |\n");
                    printf("|                     |\n");
                    printf("*=====================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'D';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$12.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°10): QUAL É O PROCESSO PELO QUAL O OXIGÊNIO E A GLICOSE SÃO CONVERTIDOS EM\n ENERGIA NAS CÉLULAS?\n\n");
                    printf("*=====================*\n");
                    printf("|A)Fotossíntese       |\n");
                    printf("|B)Fermentação        |\n");
                    printf("|C)Digestão           |\n");
                    printf("|D)Respiração celular |\n");
                    printf("|E)Transpiração       |\n");
                    printf("*=====================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'D') || (Respo == 'd'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu: R$12.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*================================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (D): [Respiração celular] |\n");
                printf("|Você Perdeu: R$12.000                                           |\n");
                printf("*================================================================*\n");
                DA = DA - 12000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            getch();
            system("cls");
            system("color 05");
            printf("\t\t*============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX               |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX               |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX               |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX               |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX               |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX               |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/               |\n");
            printf("\t\t|                                                            |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX   |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX  |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX  |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX  |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX  |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/  |\n");
            printf("\t\t*============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL MÉDIO]XXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*============================================================*\n");
            system("pause");
            system("color 0e");
            system("cls");

            printf("*=========================*\n");
            printf("|PRIMEIRA DICA: OBSERVAÇÃO|\n");
            printf("*=========================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS10, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*===================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s |\n", MSS10);
                printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]                |\n");
                printf("*===================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                DA = DA + 10000;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*========================*\n");
                printf("|SEGUNDA DICA: ASTRONOMIA|\n");
                printf("*========================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS10, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*===================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s |\n", MSS10);
                    printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]                |\n");
                    printf("*===================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    DA = DA + 10000;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:( [APERTE ENTER PARA A PRÓXIMA DICA...] |\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*=====================*\n");
                    printf("|TERCEIRA DICA: LENTES|\n");
                    printf("*=====================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS10, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*===================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s |\n", MSS10);
                        printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]                |\n");
                        printf("*===================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        DA = DA + 10000;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:( [APERTE ENTER PARA A PRÓXIMA DICA...] |\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*===================*\n");
                        printf("|QUARTA DICA: HUBBLE|\n");
                        printf("*===================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS10, MS1);

                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*===================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s |\n", MSS10);
                            printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]                |\n");
                            printf("*===================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            DA = DA + 10000;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*=====================*\n");
                            printf("|QUINTA DICA: GALÁXIAS|\n");
                            printf("*=====================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS10, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*===================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s |\n", MSS10);
                                printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]                |\n");
                                printf("*===================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                DA = DA + 10000;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*========================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:(  E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s  |\n", MSS10);
                                printf("*========================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }
            getch();
            system("cls");
            system("color 08");
            printf("\t\t\n────────────────██████████████───────────────");
            printf("\t\t\n──────────────██████████████████──────────────");
            printf("\t\t\n───────────████████████████████████───────────");
            printf("\t\t\n──────────────────────────────────────────────");
            printf("\t\t\n────────██████████████████████████████────────");
            printf("\t\t\n────────██████████████████████████████────────");
            printf("\t\t\n──────────────────────────────────────────────");
            printf("\t\t\n█████████─██████████████████████████─█████████");
            printf("\t\t\n█████████─██████████████████████████─█████████");
            printf("\t\t\n███───────████████──────────████████───────███");
            printf("\t\t\n███───────██████────██████────██████───────███");
            printf("\t\t\n─███──────█████───███────███───█████──────███─");
            printf("\t\t\n──███─────████──────────███─────████─────███──");
            printf("\t\t\n───███────████────────███───────████────███───");
            printf("\t\t\n────███───█████────███─────────█████───███────");
            printf("\t\t\n─────███──█████────████████────█████──███─────");
            printf("\t\t\n──────███─███████────────────███████─███──────");
            printf("\t\t\n───────██─██████████████████████████─██───────");
            printf("\t\t\n────────█─██████████████████████████─█────────");
            printf("\t\t\n──────────────────────────────────────────────");
            printf("\t\t\n──────────██████████████████████████──────────");
            printf("\t\t\n───────────████████████████████████───────────");
            printf("\t\t\n─────────────████████████████████─────────────");
            printf("\t\t\n───────────────████████████████───────────────");
            printf("\t\t\n──────────────────────────────────────────────");
            printf("\t\t\n────────────────██████████████────────────────");
            printf("\t\t\n──────────────██████████████████──────────────");

            playSound(G, 500);
            playSound(G, 500);
            playSound(G, 500);
            playSound(E, 250);
            playSound(C, 250);
            playSound(D, 500);
            playSound(E, 500);
            playSound(F, 250);
            playSound(F, 250);
            playSound(F, 250);
            playSound(F, 250);
            playSound(E, 250);
            playSound(E, 250);
            playSound(E, 250);
            playSound(E, 250);
            playSound(D, 500);
            playSound(G, 500);
            playSound(G, 250);
            playSound(F, 250);
            playSound(E, 250);
            playSound(D, 250);
            playSound(C, 500);

            system("pause");
            system("cls");
            system("color 0e");

            printf("*=====================================================*\n");
            printf("|PARABÉNS, POR JOGAR E TER CHEGADO TÃO LONGE, POR ISSO|\n");
            printf("|VAMOS VER QUANTO VOCÊ VAI LEVAR PARA CASA.XXXXXXXXXXX|\n");
            printf("*=====================================================*\n");
            system("pause");
            system("cls");

            printf("\t\t*\n");
            Beep(550, 300);
            Sleep(800);
            printf("\t\t*\n");
            Beep(550, 300);
            Sleep(800);
            printf("\t\t*\n");
            Beep(550, 300);
            Sleep(800);

            printf("*=================*\n");
            printf("|VOCÊ LEVOU %d |\n", DA);
            printf("*=================*\n");

            printf("*=======================================================================*\n");
            printf("|SE VOCÊ QUISER SE ARRISCAR, E GANHAR MAIS PRÊMIOS EM OUTROS NÍVEIS.XXXX|\n");
            printf("|APERTE: [1 P/VOLTAR] AO MENU DE SELEÇÃO, MAS SE VOCÊ ESTIVER SATISFEITO|\n");
            printf("|APERTE: [9 P/SAIR].XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("*=======================================================================*\n");
            scanf("%d", &RETORNO);

            if (RETORNO == 9)
            {
                break;
            }
            else
            {
                Ajuda = 0;
                Ajuda2 = 0;
                Ajuda3 = 0;
                DA = 0;
                trofeu2 = trofeu2 + 1;
                system("pause");
                system("cls");
                goto dificuldade;
            }
        case 3:
        {
            printf("\t\t*======================================================*\n");
            printf("\t\t|   /XX   /XX /XXXXXX /XX    /XX /XXXXXXXX /XX         |\n");
            printf("\t\t|  | XXX | XX|_  XX_/| XX   | XX| XX_____/| XX         |\n");
            printf("\t\t|  | XXXX| XX  | XX  | XX   | XX| XX      | XX         |\n");
            printf("\t\t|  | XX XX XX  | XX  |  XX / XX/| XXXXX   | XX         |\n");
            printf("\t\t|  | XX  XXXX  | XX      XX XX/ | XX__/   | XX         |\n");
            printf("\t\t|  | XX   XXX  | XX       XXX/  | XX      | XX         |\n");
            printf("\t\t|  | XX    XX /XXXXXX      X/   | XXXXXXXX| XXXXXXXX   |\n");
            printf("\t\t|  |__/   __/|______/     _/    |________/|________/   |\n");
            printf("\t\t|                                                      |\n");
            printf("\t\t|                                   /XXXXXX            |\n");
            printf("\t\t|                                  /XX__  XX           |\n");
            printf("\t\t|                                 |__/    XX           |\n");
            printf("\t\t|                                    /XXXXX            |\n");
            printf("\t\t|                                   |___  XX           |\n");
            printf("\t\t|                                  /XX /  XX           |\n");
            printf("\t\t|                                 |  XXXXXX            |\n");
            printf("\t\t|                                 |________/           |\n");
            printf("\t\t|                                                      |\n");
            printf("\t\t*======================================================*\n");
            printf("\t\t|##################||RODADA PERLIMINAR||###############|\n");
            printf("\t\t*======================================================*\n");
            system("pause");

            system("cls");
            system("color 4f");

            printf("\t\t\t  /XXXXXXXX /XX      /XX        /XXXXXX  /XX   /XX  /XXXXXX   /XXXXXX    \n");
            printf("\t\t\t | XX_____/| XXX    /XXX       /XX__  XX| XX  | XX /XX__  XX /XX__  XX   \n");
            printf("\t\t\t | XX      | XXXX  /XXXX      | XX   __/| XX  | XX| XX    XX| XX   __/   \n");
            printf("\t\t\t | XXXXX   | XX XX/XX XX      |  XXXXXX | XX  | XX| XXXXXXXX|  XXXXXX    \n");
            printf("\t\t\t | XX__/   | XX  XXX| XX        ____  XX| XX  | XX| XX__  XX  ____  XX   \n");
            printf("\t\t\t | XX      | XX   X | XX       /XX    XX| XX  | XX| XX  | XX /XX    XX   \n");
            printf("\t\t\t | XXXXXXXX| XX     | XX      |  XXXXXX/|  XXXXXX/| XX  | XX|  XXXXXX    \n");
            printf("\t\t\t |________/|__/     |__/        ______/   ______/ |__/  |__/  ______/    \n");

            printf("\t\t   /XX      /XX  /XXXXXX  /XXXXXXX   /XXXXXX   /XXXXXX   /XXXXXX        \n");
            printf("\t\t  | XXX    /XXX /XX__  XX| XX__  XX /XX__  XX /XX__  XX /XX__  XX       \n");
            printf("\t\t  | XXXX  /XXXX| XX    XX| XX    XX| XX   __/| XX    XX| XX   __/       \n");
            printf("\t\t  | XX XX/XX XX| XXXXXXXX| XXXXXXX/| XX      | XXXXXXXX|  XXXXXX        \n");
            printf("\t\t  | XX  XXX| XX| XX__  XX| XX__  XX| XX      | XX__  XX  ____  XX       \n");
            printf("\t\t  | XX   X | XX| XX  | XX| XX    XX| XX    XX| XX  | XX /XX    XX       \n");
            printf("\t\t  | XX     | XX| XX  | XX| XX  | XX|  XXXXXX/| XX  | XX|  XXXXXX/       \n");
            printf("\t\t  |__/     |__/|__/  |__/|__/  |__/  ______/ |__/  |__/  ______/        \n");
            Beep(270, 250);
            Sleep(650);

            system("cls");
            system("color 60");

            printf("\t\t /XXXXXXX                                                                     \n");
            printf("\t\t| XX__  XX                                                                    \n");
            printf("\t\t| XX    XX /XXXXXX   /XXXXXX   /XXXXXX   /XXXXXX   /XXXXXX  /XXXXXX   /XXXXXX \n");
            printf("\t\t| XXXXXXX//XX__  XX /XX__  XX /XX__  XX |____  XX /XX__  XX|____  XX /XX__  XX\n");
            printf("\t\t| XX____/| XX   __/| XXXXXXXX| XX    XX  /XXXXXXX| XX   __/ /XXXXXXX| XX   __/\n");
            printf("\t\t| XX     | XX      | XX_____/| XX  | XX /XX__  XX| XX      /XX__  XX| XX      \n");
            printf("\t\t| XX     | XX      |  XXXXXXX| XXXXXXX/|  XXXXXXX| XX     |  XXXXXXX| XX      \n");
            printf("\t\t|__/     |__/        _______/| XX____/   _______/|__/       _______/|__/      \n");
            printf("\t\t                             | XX                                             \n");
            printf("\t\t                             | XX                                             \n");
            printf("\t\t                             |__/                                             \n");
            Beep(305, 315);
            Sleep(650);

            system("cls");
            system("color a0");

            printf("\t\t\t  /XX    /XX   /XXXXXX  /XXXXXX \n");
            printf("\t\t\t   XX   | XX  /XX__  XX|_  XX_/ \n");
            printf("\t\t\t   XX   | XX | XX    XX  | XX   \n");
            printf("\t\t\t    XX / XX/ | XXXXXXXX  | XX   \n");
            printf("\t\t\t     XX XX/  | XX__  XX  | XX   \n");
            printf("\t\t\t      XXX/   | XX  | XX  | XX   \n");
            printf("\t\t\t       X/    | XX  | XX /XXXXXX \n");
            printf("\t\t\t       _/    |__/  |__/|______/ \n");
            Beep(550, 700);
            Sleep(700);

            system("cls");
            system("color 0e");

            printf("\n\nPERGUNTA N°1):QUAL A OBRA DE ARTE MAIS CARA ARREMETADA EM UM LEILÃO? \n\n");
            printf("*======================================================*\n");
            printf("|A)O Grito, de Edvard Munch                            |\n");
            printf("|B)Intercâmbio, de Willem de Kooning                   |\n");
            printf("|C)O Sonho, de Pablo Picasso                           |\n");
            printf("|D)A Persistência da Memória, de Salvador Dali         |\n");
            printf("|E)Salvator Mundi, de Leonardo da Vinci                |\n");
            printf("*======================================================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'e') || (Respo == 'E'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 2500;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$2.500|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d|\n", DA); // MOSTRAR QUANTIA
                printf("*================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d|\n", DA); // MOSTRAR QUANTIA
                printf("*================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");

            printf("\n\nPERGUNTA N°2): QUAL É O PAÍS MAIS NOVO DO MUNDO?\n\n");

            printf("*=========================*\n");
            printf("|A)Timor Leste            |\n");
            printf("|B)Kosovo                 |\n");
            printf("|C)Montenegro             |\n");
            printf("|D)Sudão do Sul           |\n");
            printf("|E)Palau                  |\n");
            printf("*=========================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'd') || (Respo == 'D'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 2500;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$2.500|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d|\n", DA); // MOSTRAR QUANTIA
                printf("*================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d|\n", DA); // MOSTRAR QUANTIA
                printf("*================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°3): QUAL O NOME DO PRIMEIRO MACACO A IR PARA O ESPAÇO?\n\n");

            printf("*===================*\n");
            printf("|A)George          |\n");
            printf("|B)Bublles         |\n");
            printf("|C)Albert          |\n");
            printf("|D)Ham             |\n");
            printf("|E)Murice          |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'D') || (Respo == 'd'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 5000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$5.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d|\n", DA); // MOSTRAR QUANTIA
                printf("*================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d|\n", DA); // MOSTRAR QUANTIA
                printf("*================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°4): QUAL FOI A INVENÇÃO FEITA POR ROBERT KHAN E VINT CERF?\n\n");

            printf("*===================*\n");
            printf("|A)Televisão        |\n");
            printf("|B)Internet         |\n");
            printf("|C)celular          |\n");
            printf("|D)Rádio-gravador   |\n");
            printf("|E)Fones de ouvido  |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'B') || (Respo == 'b'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 10000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$10.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d|\n", DA); // MOSTRAR QUANTIA
                printf("*================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d|\n", DA); // MOSTRAR QUANTIA
                printf("*================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°5): QUAL O NOME DO CHIMPANZÉ DO MICHAEL JACKSON?\n\n");

            printf("*===================*\n");
            printf("|A)Semos            |\n");
            printf("|B)Johnny           |\n");
            printf("|C)César            |\n");
            printf("|D)Stuart           |\n");
            printf("|E)Bubbles          |\n");
            printf("*===================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'e') || (Respo == 'E'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 10000;
                printf("*============================================*\n");
                printf("|Parabéns, Você Acertou:) e Ganhou: R$10.000|\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d|\n", DA); // MOSTRAR QUANTIA
                printf("*================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena, Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d|\n", DA); // MOSTRAR QUANTIA
                printf("*================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            system("color 05");
            printf("\t\t*============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX               |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX               |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX               |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX               |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX               |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX               |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/               |\n");
            printf("\t\t|                                                            |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX   |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX  |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX  |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX  |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX  |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/  |\n");
            printf("\t\t*============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL DIFÍCIL]XXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*============================================================*\n");
            system("pause");

            system("cls");
            system("color 02");
            printf("\t*==============================================================*\n");
            printf("\t|Lembre-se: O jogo ' Mega Senha'. É um jogo de palavras em que |\n");
            printf("\t|Os participantes precisam acertar uma palavra-chave com base  |\n");
            printf("\t|Em dicas fornecidas pelo apresentador(Maquina). O objetivo    |\n");
            printf("\t|É adivinhar a palavra correta para ganhar um tipo de ajuda    |\n");
            printf("\t|Nas perguntas 'reais', É um jogo divertido e desafiador que   |\n");
            printf("\t|Testa o conhecimento e a agilidade mental dos jogadores.XXXXXX|\n");
            printf("\t*==============================================================*\n\n");

            system("color 02");
            printf("\n\nPRESSIONE ENTER PARA CONTINUAR...");
            getch();
            system("color 0e");
            system("cls");

            printf("*====================*\n");
            printf("|PRIMEIRA DICA: PRETO|\n");
            printf("*====================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS9, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*===================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS9);
                printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]         |\n");
                printf("*===================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                Ajuda = Ajuda + 1;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*=====================*\n");
                printf("|SEGUNDA DICA: NOITE  |\n");
                printf("*=====================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS9, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*===================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS9);
                    printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]         |\n");
                    printf("*===================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    Ajuda = Ajuda + 1;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*======================*\n");
                    printf("|TERCEIRA DICA:DINHEIRO|\n");
                    printf("*======================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS9, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*===================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS9);
                        printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]         |\n");
                        printf("*===================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        Ajuda = Ajuda + 1;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*=======================*\n");
                        printf("|QUARTA DICA: VINGANÇA |\n");
                        printf("*=======================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS9, MS1);
                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*==================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS9);
                            printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]         |\n");
                            printf("*==================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            Ajuda = Ajuda + 1;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*====================*\n");
                            printf("|QUINTA DICA: MORCEGO|\n");
                            printf("*====================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS9, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*===================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS9);
                                printf("|VOCÊ GANHOU A AJUDA: [ELIMINAR 2 ERRADAS]         |\n");
                                printf("*===================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                Ajuda = Ajuda + 1;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*===========================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:(  E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s |\n", MSS9);
                                printf("*===========================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");

            printf("\n\nPERGUNTA N°6):QUAL É O ELEMENTO QUÍMICO MAIS DENSO?\n\n");
            printf("*===============*\n");
            printf("|A)Osmio        |\n");
            printf("|B)Irídio       |\n");
            printf("|C)Platina      |\n");
            printf("|D)Rênio        |\n");
            printf("|E)Tungstênio   |\n");
            printf("*===============*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*=============================================*\n");
                printf("|Parabéns Você Acertou:) e Ganhou: R$12.000 |\n");
                printf("*=============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena Você Errou:(  Não Ganhou Nada   |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");

            printf("\n\nPERGUNTA N°7): QUAL FOI O PRIMEIRO SATÉLITE ARTIFICIAL COLOCADO EM ÓRBITA?\n\n");

            printf("*===============*\n");
            printf("|A)Explorer 1   |\n");
            printf("|B)Sputnik 1    |\n");
            printf("|C)Vanguard 1   |\n");
            printf("|D)Telstar 1    |\n");
            printf("|E)Echo 1       |\n");
            printf("*===============*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'B') || (Respo == 'b'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*============================================*\n");
                printf("|Parabéns Você Acertou:) e Ganhou: R$12.000 |\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena Você Errou:(  Não Ganhou Nada    |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°8): QUAL FOI O PRIMEIRO MICROPROCESSADOR COMERCIALMENTE DISPONÍVEL?\n\n");

            printf("*=============================*\n");
            printf("|A)Motorola 6800              |\n");
            printf("|B)Zilog Z80                  |\n");
            printf("|C)MOS Technology 6502        |\n");
            printf("|D)Texas Instruments TMS1000  |\n");
            printf("|E)Intel 4004                 |\n");
            printf("*=============================*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'E') || (Respo == 'e'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*============================================*\n");
                printf("|Parabéns Você Acertou:) e Ganhou: R$12.000 |\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena Você Errou:(  Não Ganhou Nada    |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°9): QUAL FOI A PRIMEIRA NAVE ESPACIAL A LEVAR HUMANOS À LUA?\n\n");

            printf("*==============*\n");
            printf("|A)Apollo 8    |\n");
            printf("|B)Apollo 10   |\n");
            printf("|C)Apollo 11   |\n");
            printf("|D)Apollo 12   |\n");
            printf("|E)Apollo 13   |\n");
            printf("*==============*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'C') || (Respo == 'c'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*============================================*\n");
                printf("|Parabéns Você Acertou:) e Ganhou: R$12.000 |\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena Você Errou:(  Não Ganhou Nada    |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            printf("\n\nPERGUNTA N°10): QUAL É O ELEMENTO QUÍMICO COM O MENOR NÚMERO ATÔMICO?\n\n");

            printf("*==============*\n");
            printf("|A)Hidrogênio  |\n");
            printf("|B)Hélio       |\n");
            printf("|C)Lítio       |\n");
            printf("|D)Berílio     |\n");
            printf("|E)Carbono     |\n");
            printf("*==============*\n");
            printf("Resposta: ");
            scanf("%s", &Respo);

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                DA = DA + 12000;
                printf("*============================================*\n");
                printf("|Parabéns Você Acertou:) e Ganhou: R$12.000 |\n");
                printf("*============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================*\n");
                printf("|Que Pena Você Errou:(  Não Ganhou Nada    |\n");
                printf("*==========================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            getch();
            system("cls");
            system("color 05");
            printf("\t\t*==============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                  |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX                 |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX                 |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX                 |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX                 |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX                 |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX                 |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/                 |\n");
            printf("\t\t|                                                              |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX     |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX    |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX    |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX    |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX    |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX    |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX    |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/    |\n");
            printf("\t\t*==============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL DIFÍCIL]XXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*==============================================================*\n");
            system("pause");
            system("color 0e");
            system("cls");

            printf("*====================*\n");
            printf("|PRIMEIRA DICA: CIFRA|\n");
            printf("*====================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS8, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*====================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s|\n", MSS8);
                printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]             |\n");
                printf("*====================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                Ajuda2 = Ajuda2 + 1;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*=======================*\n");
                printf("|SEGUNDA DICA: SEGURANÇA|\n");
                printf("*=======================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS8, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*====================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s|\n", MSS8);
                    printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]             |\n");
                    printf("*====================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    Ajuda2 = Ajuda2 + 1;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*========================*\n");
                    printf("|TERCEIRA DICA: ALGORITMO|\n");
                    printf("*========================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS8, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*====================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s|\n", MSS8);
                        printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]             |\n");
                        printf("*====================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        Ajuda2 = Ajuda2 + 1;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*==================*\n");
                        printf("|QUARTA DICA: CHAVE|\n");
                        printf("*==================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS8, MS1);

                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*====================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s|\n", MSS8);
                            printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]             |\n");
                            printf("*====================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            Ajuda2 = Ajuda2 + 1;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*================================*\n");
                            printf("|QUINTA DICA: MENSAGEM CODIFICADA|\n");
                            printf("*================================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS8, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*====================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s|\n", MSS8);
                                printf("|VOCÊ GANHOU A AJUDA: [REVELAR RESPOSTA]             |\n");
                                printf("*====================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                Ajuda2 = Ajuda2 + 1;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*============================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:( E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s|\n", MSS8);
                                printf("*============================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }

            getch();
            system("cls");
            system("color 03");

            printf("\t\t*==========================================================================*\n");
            printf("\t\t|  /XX   /XX  /XXXXXX  /XXXXXXX   /XXXXXX        /XXXXXXX   /XXXXXX        |\n");
            printf("\t\t| | XX  | XX /XX__  XX| XX__  XX /XX__  XX      | XX__  XX /XX__  XX       |\n");
            printf("\t\t| | XX  | XX| XX    XX| XX    XX| XX    XX      | XX    XX| XX    XX       |\n");
            printf("\t\t| | XXXXXXXX| XX  | XX| XXXXXXX/| XXXXXXXX      | XX  | XX| XXXXXXXX       |\n");
            printf("\t\t| | XX__  XX| XX  | XX| XX__  XX| XX__  XX      | XX  | XX| XX__  XX       |\n");
            printf("\t\t| | XX  | XX| XX  | XX| XX    XX| XX  | XX      | XX  | XX| XX  | XX       |\n");
            printf("\t\t| | XX  | XX|  XXXXXX/| XX  | XX| XX  | XX      | XXXXXXX/| XX  | XX       |\n");
            printf("\t\t| |__/  |__/  ______/ |__/  |__/|__/  |__/      |_______/ |__/  |__/       |\n");
            printf("\t\t|                                                                          |\n");
            printf("\t\t|                                                                          |\n");
            printf("\t\t|                                                                          |\n");
            printf("\t\t|  /XX    /XX /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX  /XXXXXXXX  |\n");
            printf("\t\t| | XX   | XX| XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX| XX_____/  |\n");
            printf("\t\t| | XX   | XX| XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX        |\n");
            printf("\t\t| |  XX / XX/| XXXXX   | XXXXXXX/| XX  | XX| XXXXXXXX| XX  | XX| XXXXX     |\n");
            printf("\t\t|     XX XX/ | XX__/   | XX__  XX| XX  | XX| XX__  XX| XX  | XX| XX__/     |\n");
            printf("\t\t|      XXX/  | XX      | XX    XX| XX  | XX| XX  | XX| XX  | XX| XX        |\n");
            printf("\t\t|       X/   | XXXXXXXX| XX  | XX| XXXXXXX/| XX  | XX| XXXXXXX/| XXXXXXXX  |\n");
            printf("\t\t|      _/    |________/|__/  |__/|_______/ |__/  |__/|_______/ |________/  |\n");
            printf("\t\t*==========================================================================*\n");
            printf("\t\t|Agora Começa as Perguntas Reais, Cada Uma Valera Um Determinado Valor     |\n");
            printf("\t\t*==========================================================================*\n");

            printf("\nPRESSIONE ENTER PARA CONTINUAR...");
            getch();

            system("cls");
            system("color 0e");
            printf("*============================*\n");
            printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
            printf("*============================*\n");

            printf("\n\nPERGUNTA N°1): QUAL É O ELEMENTO QUÍMICO COM O MENOR PONTO DE FUSÃO?\n\n");
            printf("*===================*\n");
            printf("|A)Hélio            |\n");
            printf("|B)Oxigênio         |\n");
            printf("|C)Mercúrio         |\n");
            printf("|D)Nitrogênio       |\n");
            printf("|E)Hidrogênio       |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
                    printf("*============================*\n");
                    printf("\n\nPERGUNTA N°1): QUAL É O ELEMENTO QUÍMICO COM O MENOR PONTO DE FUSÃO?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|B)Oxigênio         |\n");
                    printf("|C)Mercúrio         |\n");
                    printf("|D)Nitrogênio       |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°1): QUAL É O ELEMENTO QUÍMICO COM O MENOR PONTO DE FUSÃO?\n\n");
                    printf("*===================*\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|C)Mercúrio         |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
                    printf("*============================*\n");

                    printf("\n\nPERGUNTA N°1): QUAL É O ELEMENTO QUÍMICO COM O MENOR PONTO DE FUSÃO?\n\n");
                    printf("*===================*\n");
                    printf("|A)Hélio            |\n");
                    printf("|B)Oxigênio         |\n");
                    printf("|C)Mercúrio         |\n");
                    printf("|D)Nitrogênio       |\n");
                    printf("|E)Hidrogênio       |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'C') || (Respo == 'c'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$5.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*========================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (C): [Mercúrio]   |\n");
                printf("|Você Perdeu: R$5.000                                    |\n");
                printf("*========================================================*\n");
                DA = DA - 5000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*============================*\n");
            printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
            printf("*============================*\n");

            printf("\n\nPERGUNTA N°2): QUAL FOI O PRIMEIRO SER VIVO A SER ENVIADO PARA O ESPAÇO?\n\n");

            printf("*===================*\n");
            printf("|A)Cadela laika     |\n");
            printf("|B)Macaco Albert    |\n");
            printf("|C)Tartaruga Sam    |\n");
            printf("|D)Rato Abel        |\n");
            printf("|E)Mosca da fruta   |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
                    printf("*============================*\n");
                    printf("\n\nPERGUNTA N°2): QUAL FOI O PRIMEIRO SER VIVO A SER ENVIADO PARA O ESPAÇO?\n\n");

                    printf("*===================*\n");
                    printf("|A)Cadela laika     |\n");
                    printf("|                   |\n");
                    printf("|C)Tartaruga Sam    |\n");
                    printf("|D)Rato Abel        |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°2): QUAL FOI O PRIMEIRO SER VIVO A SER ENVIADO PARA O ESPAÇO?\n\n");

                    printf("*===================*\n");
                    printf("|A)Cadela laika     |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$5.000 |\n");
                    printf("*============================*\n");
                    printf("\n\nPERGUNTA N°2): QUAL FOI O PRIMEIRO SER VIVO A SER ENVIADO PARA O ESPAÇO?\n\n");

                    printf("*===================*\n");
                    printf("|A)Cadela laika     |\n");
                    printf("|B)Macaco Albert    |\n");
                    printf("|C)Tartaruga Sam    |\n");
                    printf("|D)Rato Abel        |\n");
                    printf("|E)Mosca da fruta   |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$5.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==========================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (A): [Cadela laika] |\n");
                printf("|Você Perdeu: R$5.000                                      |\n");
                printf("*==========================================================*\n");
                DA = DA - 5000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
            printf("*=============================*\n");

            printf("\n\nPERGUNTA N°3): QUAL É O VALOR DO NÚMERO 'PI' ARREDONDADO PARA AS PRIMEIRAS CINCO CASAS DECIMAIS?\n\n");

            printf("*===================*\n");
            printf("|A)3,14159          |\n");
            printf("|B)3,14285          |\n");
            printf("|C)3,14126          |\n");
            printf("|D)3,14236          |\n");
            printf("|E)3,14009          |\n");
            printf("*===================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°3): QUAL É O VALOR DO NÚMERO 'PI' ARREDONDADO PARA AS PRIMEIRAS CINCO CASAS DECIMAIS?\n\n");

                    printf("*===================*\n");
                    printf("|A)3,14159          |\n");
                    printf("|B)3,14285          |\n");
                    printf("|C)3,14126          |\n");
                    printf("|D)3,14236          |\n");
                    printf("|E)3,14009          |\n");
                    printf("*===================*\n");

                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°3): QUAL É O VALOR DO NÚMERO 'PI' ARREDONDADO PARA AS PRIMEIRAS CINCO CASAS DECIMAIS?\n\n");

                    printf("*===================*\n");
                    printf("|A)3,14159          |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("|                   |\n");
                    printf("*===================*\n");

                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$10.000 |\n");
                    printf("*=============================*\n");

                    printf("\n\nPERGUNTA N°3): QUAL É O VALOR DO NÚMERO 'PI' ARREDONDADO PARA AS PRIMEIRAS CINCO CASAS DECIMAIS?\n\n");

                    printf("*===================*\n");
                    printf("|A)3,14159          |\n");
                    printf("|B)3,14285          |\n");
                    printf("|C)3,14126          |\n");
                    printf("|D)3,14236          |\n");
                    printf("|E)3,14009          |\n");
                    printf("*===================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*==============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu: R$10.000|\n");
                printf("*==============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*=====================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (A): [3,14159] |\n");
                printf("|Você Perdeu: R$10.000                                |\n");
                printf("*=====================================================*\n");
                DA = DA - 10000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$20.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°4): QUAL É O COMPOSITOR DA FAMOSA SINFONIA 'A QUINTA SINFONIA'?\n\n");

            printf("*=============================*\n");
            printf("|A)Ludwig van Beethoven       |\n");
            printf("|B)Wolfgang Amadeus Mozart    |\n");
            printf("|C)Johann Sebastian Bach      |\n");
            printf("|D)Franz Schubert             |\n");
            printf("|E)Gustav Mahler              |\n");
            printf("*=============================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS  ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$20.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°4): QUAL É O COMPOSITOR DA FAMOSA SINFONIA 'A QUINTA SINFONIA'?\n\n");

                    printf("*=============================*\n");
                    printf("|A)Ludwig van Beethoven       |\n");
                    printf("|B)Wolfgang Amadeus Mozart    |\n");
                    printf("|                             |\n");
                    printf("|                             |\n");
                    printf("|E)Gustav Mahler              |\n");
                    printf("*=============================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°4): QUAL É O COMPOSITOR DA FAMOSA SINFONIA 'A QUINTA SINFONIA'?\n\n");

                    printf("*=============================*\n");
                    printf("|A)Ludwig van Beethoven       |\n");
                    printf("|                             |\n");
                    printf("|                             |\n");
                    printf("|                             |\n");
                    printf("|                             |\n");
                    printf("*=============================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$20.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°4): QUAL É O COMPOSITOR DA FAMOSA SINFONIA 'A QUINTA SINFONIA'?\n\n");

                    printf("*=============================*\n");
                    printf("|A)Ludwig van Beethoven       |\n");
                    printf("|B)Wolfgang Amadeus Mozart    |\n");
                    printf("|C)Johann Sebastian Bach      |\n");
                    printf("|D)Franz Schubert             |\n");
                    printf("|E)Gustav Mahler              |\n");
                    printf("*=============================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*================================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$20.000|\n");
                printf("*================================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==================================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (A): [Ludwig van Beethoven] |\n");
                printf("|Você Perdeu: R$20.000                                             |\n");
                printf("*==================================================================*\n");
                DA = DA - 20000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$20.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°5): QUAL É O MAIOR DESERTO DO MUNDO?\n\n");

            printf("*=======================*\n");
            printf("|A)Deserto do Saara     |\n");
            printf("|B)Deserto da Arábia    |\n");
            printf("|C)Deserto de Gobi      |\n");
            printf("|D)Deserto do Atacama   |\n");
            printf("|E) Deserto da Antártida|\n");
            printf("*=======================*\n");

            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS  ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$20.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°5): QUAL É O MAIOR DESERTO DO MUNDO?\n\n");

                    printf("*=======================*\n");
                    printf("|A)Deserto do Saara     |\n");
                    printf("|                       |\n");
                    printf("|                       |\n");
                    printf("|D)Deserto do Atacama   |\n");
                    printf("|E) Deserto da Antártida|\n");
                    printf("*=======================*\n");

                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR] ", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°5): QUAL É O MAIOR DESERTO DO MUNDO?\n\n");

                    printf("*=======================*\n");
                    printf("|                       |\n");
                    printf("|                       |\n");
                    printf("|                       |\n");
                    printf("|                       |\n");
                    printf("|E) Deserto da Antártida|\n");
                    printf("*=======================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR] ", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$20.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°5): QUAL É O MAIOR DESERTO DO MUNDO?\n\n");

                    printf("*=======================*\n");
                    printf("|A)Deserto do Saara     |\n");
                    printf("|B)Deserto da Arábia    |\n");
                    printf("|C)Deserto de Gobi      |\n");
                    printf("|D)Deserto do Atacama   |\n");
                    printf("|E) Deserto da Antártida|\n");
                    printf("*=======================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'E') || (Respo == 'e'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*==============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu: R$20.000|\n");
                printf("*==============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==================================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (E): [Deserto da Antártida] |\n");
                printf("|Você Perdeu: R$20.000                                             |\n");
                printf("*==================================================================*\n");
                DA = DA - 20000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }

            getch();
            system("cls");
            system("color 05");
            printf("\t\t*==============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                  |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX                 |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX                 |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX                 |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX                 |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX                 |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX                 |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/                 |\n");
            printf("\t\t|                                                              |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX     |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX    |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX    |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX    |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX    |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX    |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX    |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/    |\n");
            printf("\t\t*==============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL Difícil]XXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*==============================================================*\n");
            system("pause");
            system("color 0e");
            system("cls");

            printf("*=========================*\n");
            printf("|PRIMEIRA DICA: ASTRONOMIA|\n");
            printf("*=========================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS11, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*===================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s |\n", MSS11);
                printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]             |\n");
                printf("*===================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                Ajuda3 = Ajuda3 + 1;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*=====================*\n");
                printf("|SEGUNDA DICA: ESTRELA|\n");
                printf("*=====================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS11, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*===================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s |\n", MSS11);
                    printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]             |\n");
                    printf("*===================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    Ajuda3 = Ajuda3 + 1;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*====================================*\n");
                    printf("|TERCEIRA DICA: FORA DO SISTEMA SOLAR|\n");
                    printf("*====================================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS11, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*===================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s |\n", MSS11);
                        printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]             |\n");
                        printf("*===================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        Ajuda3 = Ajuda3 + 1;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*====================*\n");
                        printf("|QUARTA DICA: KEPLER |\n");
                        printf("*====================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS11, MS1);

                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*===================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s |\n", MSS11);
                            printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]             |\n");
                            printf("*===================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            Ajuda3 = Ajuda3 + 1;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*=============================================*\n");
                            printf("|QUINTA DICA: AS TRÊS PRIMEIRAS LETRAS É: EXO |\n");
                            printf("*=============================================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS11, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*===================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s |\n", MSS11);
                                printf("|VOCÊ GANHOU A AJUDA: [ANULAR PERGUNTA]             |\n");
                                printf("*===================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                Ajuda3 = Ajuda3 + 1;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*============================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:(  E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s |\n", MSS4);
                                printf("*============================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°6):QUAL ELEMENTO QUÍMICO POSSUI O NÚMERO ATÔMICO 79?\n\n");
            printf("*================*\n");
            printf("|A)Ouro          |\n");
            printf("|B)Mercúrio      |\n");
            printf("|C)Chumbo        |\n");
            printf("|D)Platina       |\n");
            printf("|E)Tungstênio    |\n");
            printf("*================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*===============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*===============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°6):QUAL ELEMENTO QUÍMICO POSSUI O NÚMERO ATÔMICO 79?\n\n");
                    printf("*================*\n");
                    printf("|A)Ouro          |\n");
                    printf("|B)Mercúrio      |\n");
                    printf("|                |\n");
                    printf("|D)Platina       |\n");
                    printf("|                |\n");
                    printf("*================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°6):QUAL ELEMENTO QUÍMICO POSSUI O NÚMERO ATÔMICO 79?\n\n");
                    printf("*============*\n");
                    printf("|A)Ouro      |\n");
                    printf("|            |\n");
                    printf("|            |\n");
                    printf("|            |\n");
                    printf("|            |\n");
                    printf("*============*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'A';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°6):QUAL ELEMENTO QUÍMICO POSSUI O NÚMERO ATÔMICO 79?\n\n");
                    printf("*================*\n");
                    printf("|A)Ouro          |\n");
                    printf("|B)Mercúrio      |\n");
                    printf("|C)Chumbo        |\n");
                    printf("|D)Platina       |\n");
                    printf("|E)Tungstênio    |\n");
                    printf("*================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$24.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*==================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (A): [Ouro] |\n");
                printf("|Você Perdeu: R$24.000                             |\n");
                printf("*==================================================*\n");
                DA = DA - 24000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°7):  QUAL É O ELEMENTO QUÍMICO CONHECIDO COMO 'O GAS NOBRE RADIOATIVO'?\n\n");
            printf("*==============*\n");
            printf("|A)Kriptônio   |\n");
            printf("|B)Xenônio     |\n");
            printf("|C)Radônio     |\n");
            printf("|D)Argônio     |\n");
            printf("|E)Neônio      |\n");
            printf("*==============*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°7):  QUAL É O ELEMENTO QUÍMICO CONHECIDO COMO 'O GAS NOBRE RADIOATIVO'?\n\n");
                    printf("*==============*\n");
                    printf("|A)Kriptônio   |\n");
                    printf("|B)Xenônio     |\n");
                    printf("|C)Radônio     |\n");
                    printf("|              |\n");
                    printf("|              |\n");
                    printf("*==============*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°7):  QUAL É O ELEMENTO QUÍMICO CONHECIDO COMO 'O GAS NOBRE RADIOATIVO'?\n\n");
                    printf("*==============*\n");
                    printf("|              |\n");
                    printf("|              |\n");
                    printf("|C)Radônio     |\n");
                    printf("|              |\n");
                    printf("|              |\n");
                    printf("*==============*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'C';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°7):  QUAL É O ELEMENTO QUÍMICO CONHECIDO COMO 'O GAS NOBRE RADIOATIVO'?\n\n");
                    printf("*==============*\n");
                    printf("|A)Kriptônio   |\n");
                    printf("|B)Xenônio     |\n");
                    printf("|C)Radônio     |\n");
                    printf("|D)Argônio     |\n");
                    printf("|E)Neônio      |\n");
                    printf("*==============*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'C') || (Respo == 'c'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$24.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*=====================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (C): [Radônio] |\n");
                printf("|Você Perdeu: R$24.000                                |\n");
                printf("*=====================================================*\n");
                DA = DA - 24000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°8): QUAL É O ELEMENTO QUÍMICO COM O MENOR PONTO DE EBULIÇÃO À PRESSÃO ATMOSFÉRICA PADRÃO (1 ATM)?\n\n");
            printf("*==============*\n");
            printf("|A)Hélio       |\n");
            printf("|B)Hidrogênio  |\n");
            printf("|C)Nitrogênio  |\n");
            printf("|D)Oxigênio    |\n");
            printf("|E)Flúor       |\n");
            printf("*==============*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°8): QUAL É O ELEMENTO QUÍMICO COM O MENOR PONTO DE EBULIÇÃO À PRESSÃO ATMOSFÉRICA PADRÃO (1 ATM)?\n\n");
                    printf("*==============*\n");
                    printf("|A)Hélio       |\n");
                    printf("|              |\n");
                    printf("|C)Nitrogênio  |\n");
                    printf("|              |\n");
                    printf("|E)Flúor       |\n");
                    printf("*==============*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°8): QUAL É O ELEMENTO QUÍMICO COM O MENOR PONTO DE EBULIÇÃO À PRESSÃO ATMOSFÉRICA PADRÃO (1 ATM)?\n\n");
                    printf("*==============*\n");
                    printf("|A)Hélio       |\n");
                    printf("|              |\n");
                    printf("|              |\n");
                    printf("|              |\n");
                    printf("|              |\n");
                    printf("*==============*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'A';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°8): QUAL É O ELEMENTO QUÍMICO COM O MENOR PONTO DE EBULIÇÃO À PRESSÃO ATMOSFÉRICA PADRÃO (1 ATM)?\n\n");
                    printf("*==============*\n");
                    printf("|A)Hélio       |\n");
                    printf("|B)Hidrogênio  |\n");
                    printf("|C)Nitrogênio  |\n");
                    printf("|D)Oxigênio    |\n");
                    printf("|E)Flúor       |\n");
                    printf("*==============*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }

            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'A') || (Respo == 'a'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) e Não Perdeu: R$24.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*===================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (A): [Hélio] |\n");
                printf("|Você Perdeu: R$24.000                              |\n");
                printf("*===================================================*\n");
                DA = DA - 24000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°9): QUAL É A MAIOR ILHA DO MUNDO EM ÁREA TERRESTRE?\n\n");
            printf("*===============*\n");
            printf("|A)Austrália    |\n");
            printf("|B)Groenlândia  |\n");
            printf("|C)Nova Guiné   |\n");
            printf("|D)Madagascar   |\n");
            printf("|E)Borneo       |\n");
            printf("*===============*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°9): QUAL É A MAIOR ILHA DO MUNDO EM ÁREA TERRESTRE?\n\n");
                    printf("*===============*\n");
                    printf("|               |\n");
                    printf("|B)Groenlândia  |\n");
                    printf("|C)Nova Guiné   |\n");
                    printf("|               |\n");
                    printf("|E)Borneo       |\n");
                    printf("*===============*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°9): QUAL É A MAIOR ILHA DO MUNDO EM ÁREA TERRESTRE?\n\n");
                    printf("*===============*\n");
                    printf("|               |\n");
                    printf("|B)Groenlândia  |\n");
                    printf("|               |\n");
                    printf("|               |\n");
                    printf("|               |\n");
                    printf("*===============*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'B';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°9): QUAL É A MAIOR ILHA DO MUNDO EM ÁREA TERRESTRE?\n\n");
                    printf("*===============*\n");
                    printf("|A)Austrália    |\n");
                    printf("|B)Groenlândia  |\n");
                    printf("|C)Nova Guiné   |\n");
                    printf("|D)Madagascar   |\n");
                    printf("|E)Borneo       |\n");
                    printf("*===============*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'B') || (Respo == 'b'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*================================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu:  R$24.000|\n");
                printf("*================================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*=================================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (B): [Groenlândia] |\n");
                printf("|Você Perdeu: R$24.000                                            |\n");
                printf("*=================================================================*\n");
                DA = DA - 24000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 0e");
            printf("*=============================*\n");
            printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
            printf("*=============================*\n");
            printf("\n\nPERGUNTA N°10): QUAL FOI O HOMEM A GANHAR O PRÊMIO NOBEL DA PAZ DE 1906?\n\n");
            printf("*========================*\n");
            printf("|A)Martin Luther King Jr |\n");
            printf("|B)Nelson Mandela        |\n");
            printf("|C)Theodore Roosevelt    |\n");
            printf("|D)Albert Schweitzer     |\n");
            printf("|E)Henry Dunant          |\n");
            printf("*========================*\n");
            printf("\nVOCÊ POSSUI: %d AJUDA[ELIMINAR 2], %d AJUDA[REVELAR], %d AJUDA[ANULAR] \n", Ajuda, Ajuda2, Ajuda3);
            printf("\n[APERTE F PARA USAR: Eliminar 2 Erradas] ou [APERTE R PARA USAR: REVELAR RESPOSTA] ou [APERTE T PARA ANULAR A PERGUNTA]");
            printf("\n\nResposta: ");
            scanf("%s", &Respo);

            if (Ajuda == 1)
            {
                if ((Respo == 'F') || (Respo == 'f'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*==============================*\n");
                    printf("\t\t|2 RESPOSTAS ERRADAS ELIMINADAS|\n");
                    printf("\t\t*==============================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°10): QUAL FOI O HOMEM A GANHAR O PRÊMIO NOBEL DA PAZ DE 1906?\n\n");
                    printf("*========================*\n");
                    printf("|A)Martin Luther King Jr |\n");
                    printf("|                        |\n");
                    printf("|C)Theodore Roosevelt    |\n");
                    printf("|D)Albert Schweitzer     |\n");
                    printf("|                        |\n");
                    printf("*========================*\n");
                    Ajuda = Ajuda - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR]", Ajuda);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda2 == 1)
            {
                if ((Respo == 'R') || (Respo == 'r'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*=======================*\n");
                    printf("\t\t|VOCÊ REVELOU A RESPOSTA|\n");
                    printf("\t\t*=======================*\n");
                    system("pause");
                    system("cls");
                    printf("*==============*\n");
                    printf("|A Resposta É: |\n");
                    printf("*==============*\n");
                    printf("\n\nPERGUNTA N°10): QUAL FOI O HOMEM A GANHAR O PRÊMIO NOBEL DA PAZ DE 1906?\n\n");
                    printf("*========================*\n");
                    printf("|                        |\n");
                    printf("|                        |\n");
                    printf("|C)Theodore Roosevelt    |\n");
                    printf("|                        |\n");
                    printf("|                        |\n");
                    printf("*========================*\n");
                    Ajuda2 = Ajuda2 - 1;
                    printf("\nVOCÊ POSSUI: %d AJUDA [REVELAR]", Ajuda2);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            if (Ajuda3 == 1)
            {
                if ((Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    system("color 0e");
                    printf("\t\t*======================*\n");
                    printf("\t\t|VOCÊ ANULOU A PERGUNTA|\n");
                    printf("\t\t*======================*\n");
                    Ajuda3 = Ajuda3 - 1;
                    printf("\nVOCÊ POSSUI : %d AJUDA [ANULAR]\n\n", Ajuda3);
                    Respo = 'C';
                    system("pause");
                }
            }
            if ((Ajuda < 1) || (Ajuda2 < 1) || (Ajuda3 < 1))
            {
                if ((Respo == 'F') || (Respo == 'f') || (Respo == 'R') || (Respo == 'r') || (Respo == 'T') || (Respo == 't'))
                {
                    system("cls");
                    printf("\t\t*===================================*\n");
                    printf("\t\t|VOCÊ NÃO POSSUI A AJUDA QUE APERTOU|\n");
                    printf("\t\t*===================================*\n");
                    system("pause");
                    system("cls");
                    printf("*=============================*\n");
                    printf("|ESSA PERGUNTA VALE: R$24.000 |\n");
                    printf("*=============================*\n");
                    printf("\n\nPERGUNTA N°10): QUAL FOI O HOMEM A GANHAR O PRÊMIO NOBEL DA PAZ DE 1906?\n\n");
                    printf("*========================*\n");
                    printf("|A)Martin Luther King Jr |\n");
                    printf("|B)Nelson Mandela        |\n");
                    printf("|C)Theodore Roosevelt    |\n");
                    printf("|D)Albert Schweitzer     |\n");
                    printf("|E)Henry Dunant          |\n");
                    printf("*========================*\n");
                    printf("\nVOCÊ POSSUI: %d AJUDA [ELIMINAR], %d AJUDA [REVELAR], %d AJUDA [ANULAR] ", Ajuda, Ajuda2, Ajuda3);
                    printf("\n\nResposta: ");
                    scanf("%s", &Respo);
                }
            }
            system("cls");
            system("color 0f");
            printf(" /XX    /XX/XXXXXXXX/XXXXXXX /XXXXXX/XXXXXXXX/XXXXXX /XXXXXX  /XXXXXX /XX   /XX/XXXXXXX  /XXXXXX            \n");
            printf("  XX   | X| XX_____| XX__  X|_  XX_| XX_____|_  XX_ /XX__  XX/XX__  X| XXX | X| XX__  XX/XX__  XX           \n");
            printf("   X   | X| XX     | XX    XX | XX | XX       | XX | XX   __| XX    X| XXXX| X| XX    X| XX    XX           \n");
            printf("   XX / XX| XXXXX  | XXXXXXX/ | XX | XXXXX    | XX | XX     | XXXXXXX| XX XX X| XX  | X| XX  | XX           \n");
            printf("    XX XX/| XX__/  | XX__  XX | XX | XX__/    | XX | XX     | XX__  X| XX  XXX| XX  | X| XX  | XX           \n");
            printf("     XXX/ | XX     | XX    XX | XX | XX       | XX | XX    X| XX  | X| XX   XX| XX  | X| XX  | XX           \n");
            printf("      X/  | XXXXXXX| XX  | XX/XXXXX| XX      /XXXXX|  XXXXXX| XX  | X| XX    X| XXXXXXX|  XXXXXX /XX/XX/XX  \n");
            printf("     _/   |________|__/  |__|______|__/     |______/ ______/|__/  |__|__/   __|_______/  ______ |__|__|__/  \n");
            Beep(250, 300);
            Sleep(700);

            if ((Respo == 'C') || (Respo == 'c'))
            {

                system("cls");
                system("color 02");
                printf("  /XXXXXX  /XXXXXXXX /XXXXXXX  /XXXXXXXX  /XXXXXX  \n");
                printf(" /XX__  XX| XX_____/| XX__  XX|__  XX__/ /XX__  XX \n");
                printf("| XX   __/| XX      | XX    XX   | XX   | XX    XX \n");
                printf("| XX      | XXXXX   | XXXXXXX/   | XX   | XX  | XX \n");
                printf("| XX      | XX__/   | XX__  XX   | XX   | XX  | XX \n");
                printf("| XX    XX| XX      | XX    XX   | XX   | XX  | XX \n");
                printf("|  XXXXXX/| XXXXXXXX| XX  | XX   | XX   |  XXXXXX/ \n");
                printf("  ______/ |________/|__/  |__/   |__/     ______/  \n");
                playSound(329, 200); // E
                playSound(392, 200); // G
                playSound(440, 200); // A
                playSound(523, 200); // C
                playSound(587, 200); // D
                playSound(659, 200);

                system("cls");
                system("color 0e");
                printf("*===============================================*\n");
                printf("|Parabéns Você Acertou:) E Não Perdeu: R$24.000|\n");
                printf("*===============================================*\n");
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");
            }
            else
            {
                system("cls");
                system("color 04");
                printf("  /XXXXXXXX /XXXXXXX  /XXXXXXX   /XXXXXX  /XXXXXXX   /XXXXXX  \n");
                printf(" | XX_____/| XX__  XX| XX__  XX /XX__  XX| XX__  XX /XX__  XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX    XX| XX    XX| XX    XX \n");
                printf(" | XXXXX   | XXXXXXX/| XXXXXXX/| XXXXXXXX| XX  | XX| XX  | XX \n");
                printf(" | XX__/   | XX__  XX| XX__  XX| XX__  XX| XX  | XX| XX  | XX \n");
                printf(" | XX      | XX    XX| XX    XX| XX  | XX| XX  | XX| XX  | XX \n");
                printf(" | XXXXXXXX| XX  | XX| XX  | XX| XX  | XX| XXXXXXX/|  XXXXXX/ \n");
                printf(" |________/|__/  |__/|__/  |__/|__/  |__/|_______/   ______/  \n");
                Beep(350, 760);
                Sleep(640);

                system("cls");
                system("color 0e");
                printf("*================================================================*\n");
                printf("|Que Pena Você Errou:(  A Resposta Era (C): [Theodore Roosevelt] |\n");
                printf("|Você Perdeu: R$24.000                                           |\n");
                printf("*================================================================*\n");
                DA = DA - 24000;
                printf("|Você tem: R$%d |\n", DA); // MOSTRAR QUANTIA
                printf("*==================*\n*");
                printf("PRESSIONE ENTER P/CONTINUAR...");

                if (DA < 0)
                {
                    system("cls");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("\t\t|Que Pena:(  Você Perdeu Mais do Que podia, Então Esse é um Fim de Jogo Para Você.Mas Não Desanime:).XXXXXXX|\n");
                    printf("\t\t|Se Você Quiser Se Arriscar e Tentar Novamente Pressione [1.P/Continuar] e Voltar ao Menu de Seleção.XXXXXXX|\n");
                    printf("\t\t|Mas, Se Você já Está Satisfeito Pressione [0.P/Sair], Mas Lembre-se, Se Você Quiser Voltar Para se Arriscar|\n");
                    printf("\t\t|Novamente, Estaremos Aqui, Porquê Esse é o.XXXXXXXXXXXXXXXXXXXXXXX[QUEM ACERTA GANHA MAIS]XXXXXXXXXXXXXXXXX|\n");
                    printf("\t\t*===========================================================================================================*\n");
                    printf("CONTINUAR OU SAIR?: ");
                    scanf("%d", &FJ);
                    if (FJ == 1)
                    {
                        Ajuda3 = 0;
                        Ajuda2 = 0;
                        Ajuda = 0;
                        DA = 0;
                        system("pause");
                        system("cls");
                        goto dificuldade;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            getch();
            system("cls");
            system("color 05");
            printf("\t\t*============================================================*\n");
            printf("\t\t|   /XX      /XX /XXXXXXXX  /XXXXXX   /XXXXXX                |\n");
            printf("\t\t|  | XXX    /XXX| XX_____/ /XX__  XX /XX__  XX               |\n");
            printf("\t\t|  | XXXX  /XXXX| XX      | XX   __/| XX    XX               |\n");
            printf("\t\t|  | XX XX/XX XX| XXXXX   | XX /XXXX| XXXXXXXX               |\n");
            printf("\t\t|  | XX  XXX| XX| XX__/   | XX|_  XX| XX__  XX               |\n");
            printf("\t\t|  | XX   X | XX| XX      | XX    XX| XX  | XX               |\n");
            printf("\t\t|  | XX     | XX| XXXXXXXX|  XXXXXX/| XX  | XX               |\n");
            printf("\t\t|  |__/     |__/|________/  ______/ |__/  |__/               |\n");
            printf("\t\t|                                                            |\n");
            printf("\t\t|          /XXXXXX  /XXXXXXXX /XX   /XX /XX   /XX  /XXXXXX   |\n");
            printf("\t\t|         /XX__  XX| XX_____/| XXX | XX| XX  | XX /XX__  XX  |\n");
            printf("\t\t|        | XX   __/| XX      | XXXX| XX| XX  | XX| XX    XX  |\n");
            printf("\t\t|        |  XXXXXX | XXXXX   | XX XX XX| XXXXXXXX| XXXXXXXX  |\n");
            printf("\t\t|          ____  XX| XX__/   | XX  XXXX| XX__  XX| XX__  XX  |\n");
            printf("\t\t|         /XX    XX| XX      | XX   XXX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|        |  XXXXXX/| XXXXXXXX| XX    XX| XX  | XX| XX  | XX  |\n");
            printf("\t\t|          ______/ |________/|__/   __/|__/  |__/|__/  |__/  |\n");
            printf("\t\t*============================================================*\n");
            printf("\t\t|XXXXXXXXXXXXXXXXXXXXXXXX[NÍVEL DIFÍCIL]XXXXXXXXXXXXXXXXXXXXX|\n");
            printf("\t\t*============================================================*\n");
            system("pause");
            system("color 0e");
            system("cls");

            printf("*========================*\n");
            printf("|PRIMEIRA DICA: ESCAVAÇÃO|\n");
            printf("*========================*\n");
            printf("RESPOSTA?: ");
            scanf("%s", &MS1);
            contador = strlen(MS1);
            for (i = 0; i < contador; i++)
            {
                MS1[i] = tolower(MS1[i]);
            }
            COM = strcmp(MSS12, MS1);

            if (COM == 0)
            {
                system("cls");
                system("color 02");
                printf("*=====================================================*\n");
                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS12);
                printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]                  |\n");
                printf("*=====================================================*\n");
                printf("PRESSIONE ENTER P/CONTINUAR...");
                DA = DA + 10000;
            }
            else
            {
                system("cls");
                system("color 04");
                printf("*=============================================================*\n");
                printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                printf("*=============================================================*\n");
                getch();
                system("cls");
                system("color 0e");

                printf("*=========================*\n");
                printf("|SEGUNDA DICA: ANTIGUIDADE|\n");
                printf("*=========================*\n");
                printf("RESPOSTA?: ");
                scanf("%s", &MS1);
                contador = strlen(MS1);
                for (i = 0; i < contador; i++)
                {
                    MS1[i] = tolower(MS1[i]);
                }
                COM = strcmp(MSS12, MS1);

                if (COM == 0)
                {
                    system("cls");
                    system("color 02");
                    printf("*=====================================================*\n");
                    printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS12);
                    printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]                  |\n");
                    printf("*=====================================================*\n");
                    printf("PRESSIONE ENTER P/CONTINUAR...");
                    DA = DA + 10000;
                }
                else
                {
                    system("cls");
                    system("color 04");
                    printf("*=============================================================*\n");
                    printf("|QUE PENA, VOCÊ ERROU:( [APERTE ENTER PARA A PRÓXIMA DICA...] |\n");
                    printf("*=============================================================*\n");
                    getch();
                    system("cls");
                    system("color 0e");

                    printf("*============================*\n");
                    printf("|TERCEIRA DICA: ESTRATIGRAFIA|\n");
                    printf("*============================*\n");
                    printf("RESPOSTA?: ");
                    scanf("%s", &MS1);
                    contador = strlen(MS1);
                    for (i = 0; i < contador; i++)
                    {
                        MS1[i] = tolower(MS1[i]);
                    }
                    COM = strcmp(MSS12, MS1);

                    if (COM == 0)
                    {
                        system("cls");
                        system("color 02");
                        printf("*=====================================================*\n");
                        printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS12);
                        printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]                  |\n");
                        printf("*=====================================================*\n");
                        printf("PRESSIONE ENTER P/CONTINUAR...");
                        DA = DA + 10000;
                    }
                    else
                    {
                        system("cls");
                        system("color 04");
                        printf("*=============================================================*\n");
                        printf("|QUE PENA, VOCÊ ERROU:( [APERTE ENTER PARA A PRÓXIMA DICA...] |\n");
                        printf("*=============================================================*\n");
                        getch();
                        system("cls");
                        system("color 0e");

                        printf("*========================*\n");
                        printf("|QUARTA DICA: ANTROPÓLOGO|\n");
                        printf("*========================*\n");
                        printf("RESPOSTA?: ");
                        scanf("%s", &MS1);
                        contador = strlen(MS1);
                        for (i = 0; i < contador; i++)
                        {
                            MS1[i] = tolower(MS1[i]);
                        }
                        COM = strcmp(MSS12, MS1);

                        if (COM == 0)
                        {
                            system("cls");
                            system("color 02");
                            printf("*=====================================================*\n");
                            printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS12);
                            printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]                  |\n");
                            printf("*=====================================================*\n");
                            printf("PRESSIONE ENTER P/CONTINUAR...");
                            DA = DA + 10000;
                        }
                        else
                        {
                            system("cls");
                            system("color 04");
                            printf("*=============================================================*\n");
                            printf("|QUE PENA, VOCÊ ERROU:(  [APERTE ENTER PARA A PRÓXIMA DICA...]|\n");
                            printf("*=============================================================*\n");
                            getch();
                            system("cls");
                            system("color 0e");

                            printf("*=======================*\n");
                            printf("|QUINTA DICA: CARBONO-14|\n");
                            printf("*=======================*\n");
                            printf("RESPOSTA?: ");
                            scanf("%s", &MS1);
                            contador = strlen(MS1);
                            for (i = 0; i < contador; i++)
                            {
                                MS1[i] = tolower(MS1[i]);
                            }
                            COM = strcmp(MSS12, MS1);

                            if (COM == 0)
                            {
                                system("cls");
                                system("color 02");
                                printf("*=====================================================*\n");
                                printf("|PARABÉNS, VOCÊ ACERTOU:) A PALAVRA ERA: %s  |\n", MSS12);
                                printf("|VOCÊ GANHOU UM: [BÔNUS DE R$10.000]                  |\n");
                                printf("*=====================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                                DA = DA + 10000;
                            }
                            else
                            {
                                system("cls");
                                system("color 04");
                                printf("*==============================================================================*\n");
                                printf("|QUE PENA, VOCÊ ERROU:(  E ESTA ERA A ÚLTIMA DICA, A PALAVRA ERA: %s  |\n", MSS12);
                                printf("*==============================================================================*\n");
                                printf("PRESSIONE ENTER P/CONTINUAR...");
                            }
                        }
                    }
                }
            }
            getch();
            system("cls");
            system("color 06");
            printf("\t\t\n────────────────██████████████───────────────");
            printf("\t\t\n──────────────██████████████████──────────────");
            printf("\t\t\n───────────████████████████████████───────────");
            printf("\t\t\n──────────────────────────────────────────────");
            printf("\t\t\n────────██████████████████████████████────────");
            printf("\t\t\n────────██████████████████████████████────────");
            printf("\t\t\n──────────────────────────────────────────────");
            printf("\t\t\n█████████─██████████████████████████─█████████");
            printf("\t\t\n█████████─██████████████████████████─█████████");
            printf("\t\t\n███───────████████──────────████████───────███");
            printf("\t\t\n███───────██████──────────────██████───────███");
            printf("\t\t\n─███──────█████────██████──────█████──────███─");
            printf("\t\t\n──███─────████───────────██─────████─────███──");
            printf("\t\t\n───███────████──────█████───────████────███───");
            printf("\t\t\n────███───█████──────────██────█████───███────");
            printf("\t\t\n─────███──█████────██████──────█████──███─────");
            printf("\t\t\n──────███─███████────────────███████─███──────");
            printf("\t\t\n───────██─██████████████████████████─██───────");
            printf("\t\t\n────────█─██████████████████████████─█────────");
            printf("\t\t\n──────────────────────────────────────────────");
            printf("\t\t\n──────────██████████████████████████──────────");
            printf("\t\t\n───────────████████████████████████───────────");
            printf("\t\t\n─────────────████████████████████─────────────");
            printf("\t\t\n───────────────████████████████───────────────");
            printf("\t\t\n──────────────────────────────────────────────");
            printf("\t\t\n────────────────██████████████────────────────");
            printf("\t\t\n──────────────██████████████████──────────────");

            playSound(G, 500);
            playSound(G, 500);
            playSound(G, 500);
            playSound(E, 250);
            playSound(C, 250);
            playSound(D, 500);
            playSound(E, 500);
            playSound(F, 250);
            playSound(F, 250);
            playSound(F, 250);
            playSound(F, 250);
            playSound(E, 250);
            playSound(E, 250);
            playSound(E, 250);
            playSound(E, 250);
            playSound(D, 500);
            playSound(G, 500);
            playSound(G, 250);
            playSound(F, 250);
            playSound(E, 250);
            playSound(D, 250);
            playSound(C, 500);

            system("pause");
            system("cls");
            system("color 0e");

            printf("*=====================================================*\n");
            printf("|PARABÉNS, POR JOGAR E TER CHEGADO TÃO LONGE, POR ISSO|\n");
            printf("|VAMOS VER QUANTO VOCÊ VAI LEVAR PARA CASA.XXXXXXXXXXX|\n");
            printf("*=====================================================*\n");
            system("pause");
            system("cls");

            printf("\t\t*\n");
            Beep(550, 300);
            Sleep(800);
            printf("\t\t*\n");
            Beep(550, 300);
            Sleep(800);
            printf("\t\t*\n");
            Beep(550, 300);
            Sleep(800);

            printf("*=================*\n");
            printf("|VOCÊ LEVOU %d |\n", DA);
            printf("*=================*\n");

            printf("*=======================================================================*\n");
            printf("|SE VOCÊ QUISER SE ARRISCAR, E GANHAR MAIS PRÊMIOS EM OUTROS NÍVEIS.XXXX|\n");
            printf("|APERTE: [1 P/VOLTAR] AO MENU DE SELEÇÃO, MAS SE VOCÊ ESTIVER SATISFEITO|\n");
            printf("|APERTE: [9 P/SAIR].XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|\n");
            printf("*=======================================================================*\n");
            scanf("%d", &RETORNO);

            if (RETORNO == 9)
            {
                break;
            }
            else
            {
                Ajuda = 0;
                Ajuda2 = 0;
                Ajuda3 = 0;
                DA = 0;
                trofeu3 = trofeu3 + 1;
                system("pause");
                system("cls");
                goto dificuldade;
            }
        }
        }
    }
}
