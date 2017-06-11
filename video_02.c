// Mathaus Martins - 2216106318
// Evandro martins - 2216104602
// Veronica Silva  - 2216106732

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int hora, minutos, total;
int pomodori = 0;

	
	printf ("Quantas horas voce vai utilizar para fazer a atividade ?\nR: ");
	scanf ("%d", &hora);
	printf ("\nQuanto minutos ?\nR: ");
	scanf ("%d", &minutos);
	
int tempo = 0;
int a = hora * 60;
total = a + minutos;
int x = 1;
	
for (tempo= 0; tempo < total; pomodori ++){
	tempo = tempo + 25;
	
	if(pomodori/4 == x ){
		tempo = tempo + 35;
		x ++;
	}
} 

printf ("\n ---------- Voce ira utilizar %d Pomodoris -----------\n\n", pomodori-1);

int atividade, relatorio;
char trabalho [3];

	
	printf("Escolha uma atividade abaixo:\n\n");
	printf("1- Pesquise sobre o seu trabalho\n");
	printf("2- Preencher o relatorio\n");
	printf("3- Ler apostila\n");
	printf("4- Acessar seu e-mail\n\n");
	printf("Atividade numero: ");
	scanf("%d", &atividade);
	
	
switch (atividade){
	
	 case 1 :
	
	   printf ("\nFique focado em apenas uma atividade por 25min !\n");
       printf ("Terminou a atividade ? (Responda com SIM ou NAO)\nR: ");
       scanf("%s", &trabalho);
       
       if (strcmp (trabalho, "sim") == 0){
       		printf("\nPare por 5min (descanse um pouco, tome uma agua, de uma volta, etc...) !\n");
		}
		
	 	else if (strcmp (trabalho, "nao") == 0) {
		   	printf("\nVolte e escolha a atividade novamente!\n\n\n\n");
			return main();
		   }	
		   
	break;
 	
     case 2 :
       
	   printf ("\nFique focado em apenas uma atividade por 25min !\n");
       printf ("Terminou a atividade ? (Responda com SIM ou NAO)\nR: ");
       scanf("%s", &trabalho);
       
       if (strcmp (trabalho, "sim") == 0){
       		printf("\nPare por 5min (descanse um pouco, tome uma agua, de uma volta, etc...) !\n");
       		
		}
		
	 	else if (strcmp (trabalho, "nao") == 0) {
		   	printf("\nVolte e escolha a atividade novamente!\n\n\n\n");
			return main();
		   }	
		   
	 case 3 :
       
	   printf ("\nFique focado em apenas uma atividade por 25min !\n");
       printf ("Terminou a atividade ? (Responda com SIM ou NAO)\nR: ");
       scanf("%s", &trabalho);
       
       if (strcmp (trabalho, "sim") == 0){
       		printf("\nPare por 5min (descanse um pouco, tome uma agua, de uma volta, etc...) !\n");
       		
		}
		
	 	else if (strcmp (trabalho, "nao") == 0) {
		   	printf("\nVolte e escolha a atividade novamente!\n\n\n\n");
			return main();
		   }	
		   
     break;
     
      case 4 :
       
	   printf ("\nFique focado em apenas uma atividade por 25min !\n");
       printf ("Terminou a atividade ? (Responda com SIM ou NAO)\nR: ");
       scanf("%s", &trabalho);
       
       if (strcmp (trabalho, "sim") == 0){
       		printf("\nPare de 15 a 30min (descanse um pouco, tome uma agua, de uma volta, etc...) !\n");
       		
		}
		
	 	else if (strcmp (trabalho, "nao") == 0) {
		   	printf("\nVolte e escolha a atividade novamente!\n\n\n\n");
			return main();
		   }	
 
 
 	default :
 		
    printf ("Atividade invalida!\n");
    return 0;
}
	
	char min [3];

	printf("Ja se passaram os 5min ? (Responda com SIM ou NAO)\nR: ");
	scanf("%s", &min);
	
 	if (strcmp (min, "sim") == 0){
       		printf("\nVa para a proxima atividade !\n\n\n");
       		return main();
		}
		
	 	else if (strcmp (min, "nao") == 0) {
		   	printf("\nVolte e escolha a atividade novamente!\n\n\n\n");
		   	return main();
		   }	
		   
 
    
	system("pause");

}

