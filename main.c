#include <stdio.h>
#include <stdlib.h>

int main()
{

char player1[256], player2[256];

printf("Escolha, :::pedra::papel::tesoura:::\n\n");
printf("Player 1... sua vez...");
scanf("%s", &player1);

printf("Player 2... sua vez...");
scanf("%s", &player2);

if (strcmp(player1,"papel")==0){
    if (strcmp(player2,"papel")==0){
        printf("\nEMPATE!!!\n");
    }
        else if (strcmp(player2,"tesoura")==0){
        printf("\nPLAYER 2 VENCEU !!!\n");
    }
        else if (strcmp(player2,"pedra")==0){
        printf("\nPlayer 1 venceu !!!\n");
    }
}
    else if (strcmp(player1,"pedra")==0){
        if (strcmp(player2,"papel")==0){
        printf("\nPlayer 2 VENCEU !!!\n");
    }
        else if (strcmp(player2,"pedra")==0){
        printf("\nEMPATE!!!\n");
    }
        else if (strcmp(player2,"tesoura")==0){
            printf("\nPLAYER 1 VENCEU!!!\n");
        }
    }
    else if (strcmp(player1,"tesoura")==0){
        if (strcmp(player2,"pedra")==0){
            printf("\nPlayer 2 venceu!!!\n");
        }
        else if (strcmp(player2,"papel")==0){
            printf("\nPLAYER 1 VENCEU !!!\n");
        }
        else if (strcmp(player2,"tesoura")==0){
            printf("\nEMPATE!!!\n");
        }
    }

else {
    printf("\n\nJOGOU UMA OPCAO INVALIDA!!!\n\n");
}



    return 0;
}
