#include <iostream>
using namespace std;

int rankCalc(int v,int d){
    return v-d;
}

int main(){

    string jogador="";
    int vitoria,derrota;
    string xp="noob";

    while(jogador==""){

        cout<<"Qual o nome do jogador? ";
        getline(cin,jogador);

        cout<<"Quantas vitórias? ";
        cin>>vitoria;

        cout<<"Quantas derrotas? ";
        cin>>derrota;

        if(jogador==""){
            cout<<"Obrigatório informar TODOS os dados! Tente novamente!\n";
        }
    }

    int rank=rankCalc(vitoria,derrota);

    if(rank<10) xp="ferro";
    else if(rank>=11 && rank<=20) xp="bronze";
    else if(rank>=21 && rank<=50) xp="prata";
    else if(rank>=51 && rank<=80) xp="ouro";
    else if(rank>=81 && rank<=90) xp="diamante";
    else if(rank>=91 && rank<=100) xp="lendário";
    else xp="imortal";

    cout<<"O jogador "<<jogador<<" tem de saldo de "<<rank<<" está no nível de "<<xp<<endl;

}
