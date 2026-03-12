const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let jogador = "";
let vitoria = "";
let derrota = "";
let xp = "noob";

function perguntar() {
  rl.question("Qual o nome do jogador? ", (j) => {
    rl.question("Quantas vitórias? ", (v) => {
      rl.question("Quantas derrotas? ", (d) => {

        if (!j || !v || !d) {
          console.log("Obrigatório informar TODOS os dados! Tente novamente!");
          perguntar();
        } else {

          jogador = j;
          vitoria = parseInt(v);
          derrota = parseInt(d);

          const rank = calcularRank(vitoria, derrota);
          xp = definirNivel(rank);

          console.log(`O jogador ${jogador} tem de saldo de ${rank} está no nível de ${xp}`);
          rl.close();
        }
      });
    });
  });
}

function calcularRank(v, d) {
  return v - d;
}

function definirNivel(rank) {
  if (rank < 10) return "ferro";
  else if (rank >= 11 && rank <= 20) return "bronze";
  else if (rank >= 21 && rank <= 50) return "prata";
  else if (rank >= 51 && rank <= 80) return "ouro";
  else if (rank >= 81 && rank <= 90) return "diamante";
  else if (rank >= 91 && rank <= 100) return "lendário";
  else return "imortal";
}

perguntar();
