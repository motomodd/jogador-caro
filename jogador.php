<?php

$jogador="";
$vitoria="";
$derrota="";
$xp="noob";

while(empty($jogador) || empty($vitoria) || empty($derrota)){

    echo "Qual o nome do jogador? ";
    $jogador = trim(fgets(STDIN));

    echo "Quantas vitórias? ";
    $vitoria = trim(fgets(STDIN));

    echo "Quantas derrotas? ";
    $derrota = trim(fgets(STDIN));

    if(empty($jogador) || empty($vitoria) || empty($derrota)){
        echo "Obrigatório informar TODOS os dados! Tente novamente!\n";
    }
}

function rank($v,$d){
    return $v-$d;
}

$r = rank($vitoria,$derrota);

if($r < 10) $xp="ferro";
elseif($r>=11 && $r<=20) $xp="bronze";
elseif($r>=21 && $r<=50) $xp="prata";
elseif($r>=51 && $r<=80) $xp="ouro";
elseif($r>=81 && $r<=90) $xp="diamante";
elseif($r>=91 && $r<=100) $xp="lendário";
else $xp="imortal";

echo "O jogador $jogador tem de saldo de $r está no nível de $xp\n";
