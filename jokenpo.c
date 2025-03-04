#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){

int jogador,computador;

srand(time(0));

printf("***Jogo de jokenpó***\n");
do{
printf("Escolha uma opção\n");
printf("1. Pedra\n");
printf("2. papel\n");
printf("3. tesoura\n");
printf("4. sair\n");
printf("Escolha uma opção:\n");
scanf("%d", &jogador);

computador= rand () % 3 + 1 ;
switch(jogador) {
    case 1:
    printf("Jogador escolheu: PEDRA\n");

    break;

    case 2:
    printf("Jogador escolheu: PAPEL\n");
    break;

    case 3:
    printf("Jogador escolheu: TESOURA\n");
    break;

    default:
    printf("Opção inválida");
}
switch(computador) {
    case 1:
    printf("Computador escolheu: PEDRA\n");
    
    break;

    case 2:
    printf("Computador escolheu: PAPEL\n");
    break;

    case 3:
    printf("Computador escolheu: TESOURA\n");
    break;

}
if(jogador == computador){
    printf("empate\n");
} else if (jogador == 1 && computador== 2 ){
    printf("Computador ganhou\n");
} else if (jogador == 1 && computador== 3 ){
    printf("jogador ganhou\n");}
    else if (jogador == 2 && computador== 3 ){
        printf("computador ganhou\n");}
    else if (jogador == 2 && computador== 1 ){
        printf("Jogador ganhou\n");}
    else if (jogador == 3 && computador== 1 ){
            printf("computador ganhou\n");}
    else if (jogador == 3 && computador== 2 ){
            printf("Jogador ganhou\n");}}while(jogador<=3);
return 0;
}