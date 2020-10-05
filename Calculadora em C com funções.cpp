#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

float ab (float N1, float N2){
	float soma;
	soma = N1+N2;
	return soma;
}
float cd (float N1, float N2){
	float soma;
	soma= N1-N2;
	return soma;
}
float ef (float N1, float N2){
	float soma;
	soma= N1*N2;
	return soma;
}
float gh (float N1, float N2){
	float soma;
	soma= N1/N2;
	return soma;
}
float ij (float N1, float N2){
	float soma;
	soma= pow(N1,N2);
	return soma;
}

main(){
	setlocale(LC_ALL,"Portuguese");
	float num1, num2, soma;
	char op;
	int a, b;
	
	printf("\nCalculadora\n");
	printf("\nDigite 1 para usar a calculadora\n");
	printf("Digite 2 para conhecer os operadores suportados nessa versão\n");
	printf("Digite 3 para sair\n");
	printf("\nEscolha uma das opções: ");
	scanf("%s",&a);
	system("cls");
		
	switch(a){
		case '1': 
		printf("\nDigite a conta que deseja fazer: ");
		scanf("%f %c %f",&num1,&op,&num2);
		if(op=='+'){
			soma= ab(num1,num2); 	
		}
		if(op=='-'){
			soma= cd(num1,num2);
		}
		if(op=='*'){
			soma= ef(num1,num2);
		}
		if(op=='/'){
			soma= gh(num1,num2);
		}
		if(op=='^'){
			soma= ij(num1,num2);
	    }	
	    printf("\nResultado: %.1f\n",soma);
		break; 
		
		case '2': printf("\nPara somar use: +");
		          printf("\nPara subtrair use: -");
		          printf("\nPara multiplicar use: *");
		          printf("\nPara dividir use: /"); 
				  printf("\nPara potenciação use: ^\n"); break;
		          
		case '3': printf("\nVocê escolheu sair\n"); break;
		
		default: break;
		}
		system("pause");
	}
