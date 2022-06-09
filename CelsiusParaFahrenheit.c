#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

float celsius(float fa){
	float tempe;
	tempe = 5*(fa-32)/9;
	return(tempe);
}

float fahr(float ce){
	float tempe;
	tempe = 9*(ce/5)+32;
	return (tempe);
}


int main(){
	
	int opcao;
	float temp;
	float f, c;
	
	printf("Digite a temperatura: ");
	scanf("%f", &temp);
	
	OP:
	printf("\n\nEscolha para qual temperatura deseja converter: ");
	printf("\n\n1 - Celsius \n2 - Fahrenheit");
	printf("\n\nOpcao: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		
		case 1:
			c = temp;
			c = celsius(c);
			printf("\n\nA temperatura %.2f convertida para Celsius eh %.2f ", temp, c);
			break;
			
		case 2:
			f = temp;
			f = fahr(f);
			printf("\n\nA temperatura %.2f convertida para Fahrenheit eh %.2f ", temp, f);
			break;
			
		default:
			printf("\n\nDigite uma opcao valida");
			goto OP;
			break;
	}
}
