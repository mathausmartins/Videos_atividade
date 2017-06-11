// Mathaus Martins - 2216106318
// Evandro martins - 2216104602
// Veronica Silva  - 2216106732

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char ideia1 [100];
char ideia2 [100];
char ideia3 [100];
char ideia4 [100];
char rotina [3];

	int i,a ;
	
	printf("\nAnote 5 ideias e faca uma revisao semanal\n\n");
	printf("Ideia numero 1: ");
	scanf("%s", ideia1);
	
	printf("Ideia numero 2: ");
	scanf("%s", ideia2);
	
	printf("Ideia numero 3: ");
	scanf("%s", ideia3);
	
	printf("Ideia numero 4: ");
	scanf("%s", ideia4);
	
	
	

	for (i = 0 ; i < 4; i++){
	a=1+i;
	printf("\n\nSemana %i \n\n1 - %s\n\n2 - %s\n\n3 - %s\n\n4 - %s\n\n",a, ideia1, ideia2, ideia3, ideia4);
    a=a+1;
}


	printf ("---------- Essa e a sua rotina MENSAL ----------\n\n\n")	;
	
	

	printf("Deseja fazer outra rotina ? (Responda com SIM ou NAO)\nR: ");
	scanf("%s", rotina);
	
	if(strcmp (rotina, "sim") == 0){
	
		return main();
	}
	
		else if (strcmp (rotina, "nao") == 0) {
			return 0;
		   }
		   
system("pause");
}

