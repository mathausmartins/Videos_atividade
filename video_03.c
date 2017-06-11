// Mathaus Martins - 2216106318
// Evandro martins - 2216104602
// Veronica Silva  - 2216106732

#include <stdio.h>
#include <stdlib.h>

	int main (){
	
		char esquecer[100];
		int semana, bebida, teste, Msemana, conseguiu, recom, Nbebida;
		double media;
		
		printf ("Habito de beber com  LOOP em um mes\n\n");
		printf ("Diga algo que te faca bem e te faz esquecer a bebida alcoolica ?\nR: ");
		scanf ("%s", &esquecer);
		
		Msemana = 1;
		int sucesso;
		int count = 0;

		printf ("\nQuantos vezes em media voce costuma beber em uma semana ?\nR: ");
		scanf ("%d", &Nbebida);
		
				for (semana = 0; semana < 4; semana++){
						printf ("\n\nSemana %d\n\nQuantas vezes voce bebeu essa semana ?\nR: ", Msemana);
							scanf ("%d", &bebida);
							count = count + bebida;
						if(bebida >= Nbebida){
						goto teste;
						}
						printf ("\nEm algum momento voce conseguiu dizer %s na hora que estava afim de beber ? (Responda 1- SIM 2- NAO)\nR: ", Msemana, esquecer);
							scanf ("%d", &conseguiu);
							
						if(conseguiu == 1 ){
	beber:	printf("Quantas dessas %d veses ?\nR: ",bebida);
							scanf("%d",&sucesso);
							if (sucesso > bebida || sucesso <= 0){
								printf("Numero Invalido\n");
								goto beber;
							}
						}
						printf ("Se sentiu melhor e mais disposto ? (Responda 1- SIM 2- NAO)\nR: ", recom);
							scanf ("%d", &recom);
					
						teste:	if ((bebida < bebida) && (conseguiu == 1)){
								printf ("Voce foi muito bem esta semana\ne esta FAZENDO o loop do HABITO\n\n\n");
							}
							else{
								printf ("Voce deve melhorar em algum dos pontos do LOOP\n\n");
							}
			
			 Msemana++;
			
		}
		
		if (count < bebida*4){
			printf("Muito bem ! voce esta largando seu vicio !!!!\n\n\n");
		}else{
				printf("Pare de beber, isso nao ira te levar a nada !\n");
		}
		system ("pause");
		return 0;
	}
	 
