xp = "noob"

while True:

    jogador = input("Qual o nome do jogador? ")
    vitoria = input("Quantas vitórias? ")
    derrota = input("Quantas derrotas? ")

    if not jogador or not vitoria or not derrota:
        print("Obrigatório informar TODOS os dados! Tente novamente!")
    else:
        break

def rank(v,d):
    return v-d

r = rank(int(vitoria),int(derrota))

if r < 10:
    xp="ferro"
elif 11 <= r <= 20:
    xp="bronze"
elif 21 <= r <= 50:
    xp="prata"
elif 51 <= r <= 80:
    xp="ouro"
elif 81 <= r <= 90:
    xp="diamante"
elif 91 <= r <= 100:
    xp="lendário"
else:
    xp="imortal"

print(f"O jogador {jogador} tem de saldo de {r} está no nível de {xp}")
