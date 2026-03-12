#include <stdio.h>
#include <string.h>

int rankCalc(int v, int d){
    return v-d;
}

int main(){

    char jogador[100];
    int vitoria=0, derrota=0;
    char xp[20]="noob";

    while(1){

        printf("Qual o nome do jogador? ");
        fgets(jogador,100,stdin);
        jogador[strcspn(jogador,"\n")] = 0;

        printf("Quantas vitórias? ");
        scanf("%d",&vitoria);

        printf("Quantas derrotas? ");
        scanf("%d",&derrota);

        if(strlen(jogador)==0){
            printf("Obrigatório informar TODOS os dados! Tente novamente!\n");
        } else break;
    }

    int rank = rankCalc(vitoria,derrota);

    if(rank<10) strcpy(xp,"ferro");
    else if(rank>=11 && rank<=20) strcpy(xp,"bronze");
    else if(rank>=21 && rank<=50) strcpy(xp,"prata");
    else if(rank>=51 && rank<=80) strcpy(xp,"ouro");
    else if(rank>=81 && rank<=90) strcpy(xp,"diamante");
    else if(rank>=91 && rank<=100) strcpy(xp,"lendário");
    else strcpy(xp,"imortal");

    printf("O jogador %s tem de saldo de %d está no nível de %s\n",jogador,rank,xp);

}
