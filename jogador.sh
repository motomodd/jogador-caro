#!/bin/bash

#UTILIZAR VARIÁVEIS, OPERADORES, LAÇOS DE REPETIÇÃO, ESTRUTURA DE DECISÕES E FUNÇÕES

#VALORES DEFAULT
unset $vitoria;
unset $derrota;
unset $jogador
xp="nood";

while [[ -z $vitoria || -z $derrota || -z $jogador ]]; do 
	read -p "Qual o nome do jogador? " jogador;
	read -p "Quantas vitórias? " vitoria;
	read -p "Quantas derrotas? " derrota;
	if [[ -z $vitoria || -z $derrota || -z $jogador ]]; then echo "Obrigatório informar TODOS os dados! Tente novamente!"
	else echo "OBRIGADO pelas informações!";
	fi
done

rank() {
	echo $(($vitoria - $derrota));
}


rank=$(rank | egrep -o "[0-9]{1,}")

if [[ $rank -lt 10 ]]; then
	xp="ferro";
	elif [[ $rank -ge 11 && $rank -le 20 ]]; then
	xp="bronze";
	elif [[ $rank -ge 21 && $rank -le 50 ]]; then
	xp="prata";
	elif [[ $rank -ge 51 && $rank -le 80 ]]; then
	xp="ouro";
	elif [[ $rank -ge 81 && $rank -le 90 ]]; then
	xp="diamante";
	elif [[ $rank -ge 91 && $rank -le 100 ]]; then
	xp="lendário";
	elif [[ $rank -ge 101 ]]; then
	xp="imortal";
fi

echo "O jogador $jogador tem de saldo de $rank está no nível de $xp"
