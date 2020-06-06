#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int aps(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");

	char* listaPerguntas[] = {"Para que serve um diagrama de caso de uso?",
	"O que não faz parte de um diagrama de caso de uso?",
	"O diagrama de caso de uso é derivado da:",
	"A maioria dos problemas encontrados em sistemas orientado a objetos tem sua origem na:",
	"O que é um \"Use Case\"?"};

	int rNumber;
	int listaMark[] = {0,1,2,3,4};
	int erros = 0;
	int acertos = 0;

	for (int r = 5; r > 0; r--){
		rNumber = rand() % r;
		string op;

//------------------PERGUNTAS-----------------------------

		cout << "\n---------------------------------------\n";
		cout << "----> " << listaPerguntas[rNumber] << endl;

//---------------------ALTERNATIVAS-----------------------
		if (listaMark[rNumber] == 0){
			cout << "\t[a] Descrever as principais funcionalidades do sistema.\n";
			cout << "\t[b] Testar o software final\n";
			cout << "\t[c] Entrevistar o cliente\n";
			cout << "\t[d] Desenvolver o sistema\n";
			cout << "\t[e] Auxiliar o cliente\n >>> ";
			cin >> op;
			if (op == "a"){
				system("cls");
				cout << "\n\t---Correto!---\n";
				acertos++;
			}else{
				system("cls");
				cout << "\n\t---Errado!---\n";
				erros++;
			}
		}else if (listaMark[rNumber] == 1){
			cout << "\t[a] Cenário\n";
			cout << "\t[b] Ator\n";
			cout << "\t[c] Use Case\n";
			cout << "\t[d] Comunicação\n";
			cout << "\t[e] Descrição\n >>> ";
			cin >> op;
			if (op == "e"){
				system("cls");
				cout << "\n\t---Correto!---\n";
				acertos++;
			}else{
				system("cls");
				cout << "\n\t---Errado!---\n";
				erros++;
			}
		}else if (listaMark[rNumber] == 2){
			cout << "\t[a] Especificação de requisitos\n";
			cout << "\t[b] Entrevista do cliente\n";
			cout << "\t[c] Ajuda ao programador\n";
			cout << "\t[d] Criação de sites\n";
			cout << "\t[e] Desenvolvimento do software\n >>> ";
			cin >> op;
			if (op == "a"){
				system("cls");
				cout << "\n\t---Correto!---\n";
				acertos++;
			}else{
				system("cls");
				cout << "\n\t---Errado!---\n";
				erros++;
			}
		}else if (listaMark[rNumber] == 3){
            cout << "\t[a] Especificação de requisitos\n";
			cout << "\t[b] Normas do projeto\n";
			cout << "\t[c] Programação\n";
			cout << "\t[d] Entrevista com o cliente\n";
			cout << "\t[e] Contrução do modelo\n >>> ";
			cin >> op;
			if (op == "e"){
				system("cls");
				cout << "\n\t---Correto!---\n";
				acertos++;
			}else{
				system("cls");
				cout << "\n\t---Errado!---\n";
				erros++;
			}
		}else if (listaMark[rNumber] == 4){
            cout << "\t[a] Um manual de intruções\n";
			cout << "\t[b] É o usuário do sistema\n";
			cout << "\t[c] É o que liga o ator com o caso de uso\n";
			cout << "\t[d] É uma funcionalidade realizada pelo ator\n";
			cout << "\t[e] É uma função de ajuda para o usuário\n >>> ";
			cin >> op;
			if (op == "d"){
				system("cls");
				cout << "\n\t---Correto!---\n";
				acertos++;
			}else{
				system("cls");
				cout << "\n\t---Errado!---\n";
				erros++;
			}
		}
		for (int x = rNumber; x < (r - 1); x++){
			listaPerguntas[x] = listaPerguntas[x + 1];
			listaMark[x] = listaMark[x+1];
		}
	}
	cout << "\n\tACERTOS: " << acertos << "\n\tERROS: " << erros << "\n\n";
	system("pause");
}
