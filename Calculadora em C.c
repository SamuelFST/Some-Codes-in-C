
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>

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
		printf("Digite a conta que deseja fazer: ");
		scanf("%f %c %f",&num1,&op,&num2);
		if(op=='+'){
			soma= num1+num2;
		}
		if(op=='-'){
			soma= num1-num2;
		}
		if(op=='*'){
			soma= num1*num2;
		}
		if(op=='/'){
			soma= num1/num2;
		}
		if(op=='^'){
			soma= pow(num1,num2);
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
