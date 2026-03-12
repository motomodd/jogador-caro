package main

import (
	"fmt"
)

func rank(v int, d int) int {
	return v - d
}

func main() {

	var jogador string
	var vitoria, derrota int
	xp := "noob"

	for jogador == "" {

		fmt.Print("Qual o nome do jogador? ")
		fmt.Scanln(&jogador)

		fmt.Print("Quantas vitórias? ")
		fmt.Scanln(&vitoria)

		fmt.Print("Quantas derrotas? ")
		fmt.Scanln(&derrota)

		if jogador == "" {
			fmt.Println("Obrigatório informar TODOS os dados! Tente novamente!")
		}
	}

	r := rank(vitoria, derrota)

	if r < 10 {
		xp = "ferro"
	} else if r >= 11 && r <= 20 {
		xp = "bronze"
	} else if r >= 21 && r <= 50 {
		xp = "prata"
	} else if r >= 51 && r <= 80 {
		xp = "ouro"
	} else if r >= 81 && r <= 90 {
		xp = "diamante"
	} else if r >= 91 && r <= 100 {
		xp = "lendário"
	} else {
		xp = "imortal"
	}

	fmt.Printf("O jogador %s tem de saldo de %d está no nível de %s\n", jogador, r, xp)

}
