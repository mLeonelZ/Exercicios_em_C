#include <stdio.h>
#include <locale.h>

FILE *arquivo;

void menu(void){
	int escolha;	
	void cadastrar_vagas(); 
	void cadastrar_valor();
	void retornar();
	
	printf("Escolha a opção uma opção: \n");
	printf("-------------------------------------\n");
	printf("| 1-Cadastrar valor por hora        |\n");
	printf("| 2-Cadastrar a quantidade de vagas |\n");
	printf("-------------------------------------\n");
	scanf("%d", &escolha);
	
	while(escolha != 1 && escolha != 2){
		printf("NONONONONO! \nEscolha Inválida. Tente novamente!\n");
		scanf("%d", &escolha);	
	}
	
	switch(escolha){
		case 1:
			system("cls");
			cadastrar_valor();
			retornar();
			break;
		case 2:
			system("cls");
			cadastrar_vagas();
			retornar();
			break;		
	}
}

void cadastrar_valor(){
	float valor_hora;
	int escolha, posicao;
	
	arquivo = fopen("valor_hora.txt", "a"); // Isso eu fiz para que o arquivo seja criado, caso ele não exista
	fclose(arquivo);
	
	arquivo = fopen("valor_hora.txt", "r");
	if (arquivo == NULL){
		printf("Erro ao abrir o arquivo\n");
	}
	
	fseek(arquivo, 0, SEEK_END);// Usado para verificar se tem alguma coisa no arquivo. Retorna 0 se estiver vazio e outro número se estiver com alguma coisa
	posicao = ftell(arquivo);
	
	// Usei essa função para fazer aquela verificação e na primeira vez que for criar um arquivo, ela perguntar o valor direto e caso o arquivo já tiver
	// sido criado, ele mostrar o valor e perguntar se o funcionário/dono quer fazer uma alteração. A mesma coisa acontece na outra função para cadastrar
	// a quantidade de vagas.
	
	if(posicao == 0){		
		fclose(arquivo);
		arquivo = fopen("valor_hora.txt", "w");
		printf("Qual o valor da hora? \n");
		scanf("%f", &valor_hora);
		fprintf(arquivo,"%.2f",valor_hora);	
		printf("Valor por hora definido com sucesso! \n\n");	
	} else {		
		fclose(arquivo);
		arquivo = fopen("valor_hora.txt" , "r");
		fscanf(arquivo,"%f", &valor_hora);
		printf("O valor atual é: R$%.2f\n\nDeseja atualizar esse valor? \n[1]-Sim [2]-Não\n", valor_hora);
		scanf("%d", &escolha);
		
		while(escolha != 1 && escolha != 2){
			printf("Opção inválida. Tente novamente!\n");
			scanf("%d", &escolha);
		}	
		if(escolha == 1){
			system("cls");
			arquivo = fopen("valor_hora.txt", "w");
			printf("Digite o novo valor: \n");
			scanf("%f", &valor_hora);
			fprintf(arquivo,"%.2f", valor_hora);
			printf("\nValor atualizado com sucesso!\n");
		}else { 	
			system("cls");		
			printf("Valor mantido!\n");
		}
	}
		fclose(arquivo);	
}

void cadastrar_vagas(){
	int total_vagas,posicao,escolha;
	
	arquivo = fopen("total_vagass.txt", "a"); 
	fclose(arquivo);
	
	arquivo = fopen("total_vagass.txt", "r");
	
	if (arquivo == NULL){
		printf("Erro ao abrir o arquivo\n");
	}
	else{
		
		fseek(arquivo, 0, SEEK_END);
		posicao = ftell(arquivo); 
		
		if(posicao == 0){
			fclose(arquivo);
			arquivo = fopen("total_vagass.txt", "w");
			printf("Qual o total de vagas do estacionamento? \n");
			scanf("%d", &total_vagas);
			fprintf(arquivo,"%d",total_vagas);
			printf("Total de vagas cadastrado com sucesso! \n\n");
			
		} else{
			fclose(arquivo);
			arquivo = fopen("total_vagass.txt", "r");
			fscanf(arquivo,"%d", &total_vagas);
			printf("A quantidade atual de vagas é de: %d \n\nDeseja atualizar esse valor? \n[1]-Sim [2]-Não\n\n", total_vagas);
			scanf("%d", &escolha);
			
			while(escolha != 1 && escolha != 2){
				printf("Opção inválida. Tente novamente!\n");
				scanf("%d", &escolha);
			}
			
			if(escolha == 1){
				system("cls");
				arquivo = fopen("total_vagass.txt", "w");
				printf("Informe a nova quantidade de vagas \n");
				scanf("%d", &total_vagas);
				fprintf(arquivo,"%d", total_vagas);
				printf("Quantidade de vagas atualizadas com sucesso!\n");
			} 	
		}
	}
	fclose(arquivo);
}

void retornar(){
	int escolha = 0;
	
	system("cls");
	printf("Deseja voltar ao menu principal? \n[1]-Sim [2]-Não \n");
	scanf("%d", &escolha);
	
	if(escolha < 1 || escolha > 2){
		printf("Opção inválida. Tente novamente");
		scanf("%d", &escolha);
	} else if(escolha == 1){
		system("cls");
		menu();
	} else{
		printf("Programa finalizado! \n");
	}		
}

int main(void){
	setlocale(LC_ALL,"Portuguese");
	menu();	
}
