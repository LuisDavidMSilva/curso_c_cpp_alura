#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

		printf("\n\n");
		printf("\n\n");
		printf("          _______  _        _______  _______  _______  _______       \n");
		printf("|\\     /|(  ____ \\( \\      (  ____ \\(  ___  )(       )(  ____ \\ \n");
		printf("| )   ( || (    \\/| (      | (    \\/| (   ) || () () || (    \\/   \n");
		printf("| | _ | || (__    | |      | |      | |   | || || || || (__          \n");
		printf("| |( )| ||  __)   | |      | |      | |   | || |(_)| ||  __)         \n");
		printf("| || || || (      | |      | |      | |   | || |   | || (            \n");
		printf("| () () || (____/\\| (____/\\| (____/\\| (___) || )   ( || (____/\\  \n");
		printf("(_______)(_______/(_______/(_______/(_______)|/     \\|(_______/     \n");
                                                               		
		
		
	 	int segundos = time(0);
		srand(segundos);
		
		int numerogrande = rand();
		
		int numero_secreto = numerogrande % 100;
		int chute = 0;
		int ganhou = 0;
		int tentativas = 1;
		double pontos = 1000;
		
		int acertou = 0;
		
		int nivel;
		printf("Qual o nível de dificuldade?\n");
		printf("(1) Fácil (2) Médio (3) Difícil\n\n");
		printf("Escolha: ");
		scanf("%d", &nivel);
		
		int numerodetentativas;
		
		switch(nivel){
		 case 1:
		 		numerodetentativas = 20;
		 		break;
		 
		 case 2:
		 		numerodetentativas = 15;
		 		break;
		 			
		 default:
		 		numerodetentativas = 6;
		 		break;
		}

		for(int i = 1; i <= numerodetentativas; i++){
			printf("Tentativa %d\nQual o seu chute? ", tentativas);
			scanf("%d", &chute);
			printf("Seu chute foi %d\n", chute);
			
			if (chute < 0){
				printf("Você não pode chutar número negativos\n");
				continue;
		 }	
			
			int acertou = (chute == numero_secreto);
			int maior = chute > numero_secreto;
		
		if(acertou) {
				ganhou = 1;
				break;
		}

		else if(maior) {
				printf("Seu chute foi maior que o número secreto\n");
		}
			
		else {
				printf("Seu chute foi menor que o número secreto\n");
		}
	
		tentativas++;	
		
		double pontosperdidos = abs(chute - numero_secreto) / (double)2;	
		pontos = pontos - pontosperdidos;
	}
	
	printf("Fim de Jogo!\n");
	
	if(ganhou) {
		 
		printf("\n\n");
		printf("ヽ(´▽`)/\n");
		printf("\n\n");
		printf("Você ganhou!");
		printf("Você acertou em %d tentativas\n", tentativas);
		printf("Total de pontos: %.1f\n", pontos);	
	
	} else {
			printf("\n\n");
			printf("(ಥ⌣ಥ)\n");
			printf("\n\n");

			printf("Você perdeu! Tente novamente\n");
	}
}
