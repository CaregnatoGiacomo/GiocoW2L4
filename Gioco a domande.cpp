#include <stdio.h>

int main()

{
	int scelta;
	char nomeGiocatore[0];
	int punteggio=0;
	char rispostaCorretta;
	char rispostaUtente;
	char continuare;
	
	
	//Introduzione al gioco
	printf("Benvetuno all'Epicode quiz.\n");
	printf("Di seguito ti verranno proposte alcune domande\n");
	printf("Arrivando a 3 punti vincerai il premio!\n\n");
	printf("Inserisci il tuo nome:");
	scanf("%s", &nomeGiocatore);
	
	printf("\n\nBenvenuto,  %s\n\n ", nomeGiocatore);
	printf("\n");
	
	
	//Schermata iniziale
	
	printf("Desideri giocare?\n");
	printf("Premi 1 se vuoi procedere\n");
	printf("Premi 2 se vuoi uscire\n");
	scanf("%d", &scelta);
	printf("\n");
	
		if (scelta=1)
		{
			
			do
			{
			
			
			printf("Domanda numero 1:\n\n");
			printf("Qual'e' il dolce preferito della classe?\n\n");
			printf("a)Bomba alla crema\n");
			printf("b)Crostata\n");
			printf("c)Crema catalana\n");
			
			rispostaCorretta= 'b';
			
			printf("Inserisci la tua risposta:\n");
			scanf("%s", &rispostaUtente);
			printf("\n");
			
				if(rispostaCorretta==rispostaUtente) 
				{
					printf("Risposta corretta complimenti hai ottenuto 1 punto!\n\n");
					punteggio++;
					printf("Ora hai %d punti!",punteggio);
				}
				
				else 
				{
					printf("Risposta sbagliata!");
				}
		
				printf("\n\nDomanda numero 2:\n\n");
			printf("Quale stato si trova in Europa?\n""a)Cuba\n""b)Nigeria\n""c)Germania\n\n");
			
		
			rispostaCorretta= 'c';
			
			printf("Inserisci la tua risposta:\n");
			scanf("%s", &rispostaUtente);
			printf("\n");
			
				if(rispostaCorretta==rispostaUtente) 
				{
					printf("Risposta corretta complimenti hai ottenuto 1 punto!\n\n");
					punteggio++;
					printf("Ora hai %d punti!",punteggio);
				}
				
				else 
				{
					printf("Risposta sbagliata!");
				}
				
				printf("\n\nDomanda numero 3:\n\n");
			printf("Quale di questi numeri e' pari?\n""a)88\n""b)35\n""c)67\n\n");
			
		
			rispostaCorretta= 'a';
			
			printf("Inserisci la tua risposta:\n");
			scanf("%s", &rispostaUtente);
			printf("\n");
			
				if(rispostaCorretta==rispostaUtente) 
				{
					printf("Risposta corretta complimenti hai ottenuto 1 punto!\n\n");
					punteggio++;
					printf("Ora hai %d punti!",punteggio);
					
				}
				
				else 
				{
					printf("Risposta sbagliata!");
				}
			    printf("\n\nVuoi giocare ancora?\nPremi s per continuare\nPremi n per terminare.\n");
	
			    scanf("%s", &continuare);
			    punteggio=0;
			}
				
				while (continuare=='s');
				{
					
				printf("\nGrazie per aver giocato!");
				
				}
		
		}
	


  return 0;
}
