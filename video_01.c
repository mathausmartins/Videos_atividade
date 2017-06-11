// Mathaus Martins - 2216106318
// Evandro martins - 2216104602
// Veronica Silva  - 2216106732

#include <stdio.h>
#include <stdlib.h>

int main(){

int assunto, soma, multiplicacao, divisao, subtracao, tema, dominando;

	printf("Escolha o assunto que deseja dominar: \n\n");
	printf("1 - Soma \n");
	printf("2 - Multiplicacao \n");
	printf("3 - Divisao \n");
	printf("4 - Subtracao \n\n");
	printf("Assunto escolhido: ");
	scanf("%d", &assunto); 
	
	switch (assunto){
	
	 case 1 :
       printf ("\nBusque pelos melhores site, fontes e livros sobre o assunto !\n");
       printf ("Conseguiu achar ? (Responda 1 para sim ou 2 para nao)\nR: ");
       scanf("%d", &soma);
       
       if(soma == 1){
       		printf("\nComece a estudar, voce consegue !\n");
		}
	 	else{
		   	printf("\nVolte e procure novamente, voce vai precisar muito !\n");
		   	return 0;
		   }	
	break;
 
     case 2 :
       printf ("\nBusque pelos melhores site, fontes e livros sobre o assunto !\n");
       printf ("Conseguiu achar ? (Responda 1 para sim ou 2 para nao)\nR: ");
       scanf("%d", &multiplicacao);
       
       if(multiplicacao == 1){
       		printf("\nComece a estudar, voce consegue !\n");
		}
	 	else{
		   	printf("\nVolte e procure novamente, voce vai precisar muito !\n");
		   	return 0;
		   }
     break;
 
     case 3 :
       printf ("\nBusque pelos melhores site, fontes e livros sobre o assunto !\n");
       printf ("Conseguiu achar ? (Responda 1 para sim ou 2 para nao)\nR: ");
       scanf("%d", &divisao);
       
       if(divisao == 1){
       		printf("\nComece a estudar, voce consegue !\n");
		}
	 	else{
		   	printf("\nVolte e procure novamente, voce vai precisar muito !\n");
		   	return 0;
		   }
     break;
 
     case 4 :
       printf ("\nBusque pelos melhores site, fontes e livros sobre o assunto !\n");
       printf ("Conseguiu achar ? (Responda 1 para sim ou 2 para nao)\nR: ");
       scanf("%d", &subtracao);
       
       if(subtracao == 1){
       		printf("\nComece a estudar, voce consegue !\n");
		}
	 	else{
		   	printf("\nVolte e procure novamente, voce vai precisar muito !\n");
		   	return 0;
		   }
     break;
 
 	default :
 		
    printf ("\nAssunto invalido!\n");
    return 0;
}
	printf("\n2 - PASSO\n\n");
	printf("Assim que estiver entendo do que se trata, pegue uma folha de papel e comece a escrever sobre o tema !\nEscreva como se estive-se explicando para outra pessoa.\n");
	printf("\nFez isso ? (Responda 1 para sim ou 2 para nao)\nR: ");
	scanf("%d", &tema);
	
	if(tema == 1){
		printf("\n3- PASSO\n\nAgora escreva e fale em voz alta (Isso vai ajudar a ficar mais claro o assunto e vai potencializar a memorizacao da sua ideia).\nApos fazer isso, passe para o proximo passo.\n\n");
	}
	else {
		printf("\nVolte e faca os passo anteriores, ate que tudo esteja conforme solicitado !\n");
		return 0;
    }
    
	printf("4- PASSO\n\n");
    printf("Assim que voce terminar sua explicacao, voce vai conseguir identicar quais pontos voce esta dominando e quais pontos voce ainda nao entende muito bem.\n");
    printf("Se voce ainda estiver prezo em algum topico, volte e estude ate que o domine. Repita o processo quantas vezes for necessarias, ate que domine todos os pontos do assunto!\n\n");
    printf("Ja esta dominando o assunto ? (Responda 1 para sim ou 2 para nao)\nR: ");
    scanf("%d", &dominando); 
    
    if(dominando == 1){
    	printf("\n\t---------- Parabens, voce ja esta pronto ! ----------\n\n");
    	
	}
 	else {
 		printf("\nVolte e repita o processo ate que o domine!\n\n\n\n");
 		return main();
	 }
    
    
	system("pause");

}


