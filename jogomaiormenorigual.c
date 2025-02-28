#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main() {
int numerodojogador, numerodocomputador, resultado;
char tipodecomparacao;

srand(time(0));
numerodocomputador= rand() % 100 + 1; //numero entre 1 e 100

printf("Bem vindo ao jogo\n");
printf("Você deve escolher um número e o tipo de comparação.\n");
printf("M. Maior\n");
printf("N. Menor\n");
printf("I. Igual\n");

printf("Escolha a comparação:\n");
scanf("%c", &tipodecomparacao);
printf("Escolha o número de 1 a 100:\n");
scanf("%d", &numerodojogador);

switch(tipodecomparacao){

    case 'M':
    case 'm':
    printf("Você escolheu a opção maior!\n");
    resultado= numerodojogador>numerodocomputador ? printf("Você ganhou!\n"): printf("Você perdeu!\n");
    printf("O número do computador é: %d e o número do jogador: %d\n", numerodocomputador, numerodojogador);
    break;

    case 'N':
    case'n':
    printf("Você escolheu a opção menor!\n");
    resultado= numerodojogador<numerodocomputador ? printf("Você ganhou!\n"): printf("Você perdeu!\n");
    printf("O número do computador é: %d e o número do jogador: %d", numerodocomputador, numerodojogador\n);
    break;


    case 'I':
    case 'i':
    printf("Você escolheu a opção igual!\n");
    resultado= numerodojogador==numerodocomputador ? printf("Você ganhou!\n"): printf("Você perdeu!\n");
    printf("O número do computador é: %d e o número do jogador: %d", numerodocomputador, numerodojogador\n);

    break;
    default:
    printf("Opção de jogo inválida\n");



}








}