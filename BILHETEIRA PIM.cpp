#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
	/*
		qi= refere a quantidade de ingresso
		oh= refere ao CASE para escolha da sessao
		horario_sessao= refere a esolha do horario pelo cliente
		FP= refere ao tipo de ingresso	 
	*/

	int qi, oh, horario_sessao=0, FP;
	
		printf("\t===============================================\n");
		
		printf("\t===============================================\n");
		
		printf("\t========== MUSEU BOM PONTO ====================\n");
		
		printf("\t===============================================\n");
		
		printf("\t===============================================\n\n");
		
		printf("\t DIGITE 1 PARA ADQUIRIR SEU INGRESSO \n");
		
		printf("\t-----------------------------------------------\n");
		
		printf("\t----------------------------------------------\n");
		
		
		printf("Zero para sair:\n\n ");
		 
		 
	
		scanf("%i",&oh);
	
	switch (oh)
	{
		
	
			default:
			printf("Opcao invalida.\n");
			
			
	
			
			
			
			case 0:
				printf("sair \n");
				break;
			
			case 1:
			
				printf("\t--------------------------------------\n");
				
				printf("\t Selecione o horario \n");
				
				printf("\t  [1]: 9:00 Horas Am \n");
				
				printf("\t [2]: 12:00 Horas Pm \n");
				
				printf("\t  [3]: 15:00 Pm \n");
				
				printf("\tComprar bilhete para qual horario ? \n\n");
				
				printf("\t--------------------------------------\n");
				
				
			

				
				scanf("%i",&horario_sessao);
				
				
			
				
				// HORAIRO DAS 9
				
				
					if (horario_sessao==1) 
					{
				
						printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
						
						scanf("%i",&qi);
						
						if (qi<=20) 
						{
					
							printf("\t---------------------------------------\n");
							
							printf("\t SELECIONE O SEU TIPO DE INGRESSO : : : \n\n");
							
							printf("\t [1]Inteira: 10,00 R$ \n");
							
							printf("\t [2]Meia: 5,00 R$ \n");
							
							printf("\t [3] Entrada gratuita com isencao \n");
							
							scanf("%i",&FP);
							
							printf("\t---------------------------------------\n");
						
							if (FP==1)
							{
								printf("\t tipo de igresso :: INTEIRA \n\n");
							}
							
							if (FP==2)
							{
								printf("\t Tipo de ingresso :: MEIA \n\n ");
							}
							
							if (FP==3)
							{
								printf("\t Tipo de ingreso :: INSENCAO \n\n ");
							}
							
							printf("\tHorario escolhido 1: 9;00\n\n");
							
							printf("\tSeu ingresso foi adiquirido com sucesso. \n");
							
							printf("\tDivirta-se.\n ");
					
						}
					
						else 
						{
							printf("\tNao há mais bilhetes\n ");
					
						}
				
					}
				
				//HORARIO DO 12:00
				
				if (horario_sessao==2)
				{
				
					printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
					
					scanf("%i",&qi);
					
					if (qi<=20) 
					{
					
						printf("\t---------------------------------------\n");
						
						printf("\t TIPO DE INGRESSO : : : \n\n");
							printf("\t [1]Inteira: 10,00 R$ \n");
							
							printf("\t [2]Meia: 5,00 R$ \n");
							
							printf("\t [3] Entrada gratuita com isencao \n");
							
						scanf("%i",&FP);
						
						printf("\t---------------------------------------\n");
						
						if (FP==1) 
							{
								printf("\t tipo de igresso :: INTEIRA \n\n");
							}
							
						if (FP==2)
							{
								printf("\t Tipo de ingresso :: MEIA \n\n ");
							}
							
							if (FP==3)
							{
								printf("\t Tipo de ingreso :: INSENCAO \n\n ");
							}
							
						
						printf("\tSeu bilhete foi adiquirido com sucesso. \n");
						
						printf("\tSessao escolhida 2: 12:00\n");
						
						printf("\tDivirta-se. \n\n ");
					
					}
					
					else 
					{
					
						printf("\tNao há mais bilhetes\n ");
					
					}
				
				}
				
				if (horario_sessao==3) 
				{
				
					printf("\tInforme a quantidade de bilhetes que deseja comprar:\n");
					
					scanf("%i",&qi);
					
					if (qi<=20) 
					{
					
						printf("\t---------------------------------------\n");
						
						printf("\t TIPO DE INGRESSO : : : \n\n");
							printf("\t [1]Inteira: 10,00 R$ \n");
							
							printf("\t [2]Meia: 5,00 R$ \n");
							
							printf("\t [3] Entrada gratuita com isencao \n");
							
						scanf("%i",&FP);
						
						printf("\t---------------------------------------\n");
						
						if (FP==1) 
						{
								printf("\t tipo de igresso :: INTEIRA \n\n");
							}
							
							if (FP==2)
							{
								printf("\t Tipo de ingresso :: MEIA \n\n");
							}
							
							if(FP==3)
							{
								printf("\t Tipo de ingreso :: INSENCAO \n\n");
							}
							
						
						printf("\tSeu bilhete foi adiquirido com sucesso. \n");
						
						printf("\tSessao escolhida 3: 17:30\n");
						
						printf("\tDivirta-se.\n\n ");
					
					}
					
					else 
					{
					
						printf("\tNao há mais bilhetes\n ");
					
					}
				
				}
			
			break;
	

			
			printf ("\tInforme a quantidade de bilhetes que deseja comprar:\n");
			
			scanf("%i",&qi);
			
			if (qi<=20) 
			{
			
				printf("\t---------------------------------------\n");
				
					printf("\t TIPO DE INGRESSO : : : \n\n");
							printf("\t [1]Inteira: 10,00 R$ \n");
							
							printf("\t [2]Meia: 5,00 R$ \n");
							
							printf("\t [3] Entrada gratuita com isencao \n");
							
				
				
				scanf("%i",&FP);
				
				printf("\t---------------------------------------\n");
				
				if (FP==1) 
				{
				
					printf("\tForma de Pagamento :: INTEIRA \n\n");
				
				}
				
			if (FP==2)
				{
				
					printf("\tForma de Pagamento :: MEIA \n\n");
				
				}
				
					if (FP==3)
							{
								printf("\t Tipo de ingreso :: INSENCAO \n\n ");
							}
				
				
		
				printf("\tSeu bilhete foi adiquirido com sucesso.\n");
				
				printf("\tSessao escolhida 1: 15:00\n");
				
				printf("\tDivirta-se. \n\n ");
			
			}
			
			else 
			{
			
				printf("\tNao há mais bilhetes\n ");
			
			}
		
		}
	
	system ("pause");
return 0;
}	
