#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int pw(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");


	char* listaPerguntas[] = {"Para que serve a tag <p>?",
	"Qual é a tag utilizada para definir o título da página?",
	"Como adicionar uma imagem ao projeto?",
	"Como alterar a cor do background?",
	"Para que serve a tag <a>?"};

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
			cout << "\t[a] Criar uma tabela\n";
			cout << "\t[b] Definir o título da página\n";
			cout << "\t[c] Criar um parágrafo\n";
			cout << "\t[d] Abrir uma imagem\n";
			cout << "\t[e] Criar um formulário\n >>> ";
			cin >> op;
			if (op == "c"){
				system("cls");
				cout << "\n\t---Correto!---\n";
				acertos++;
			}else{
				system("cls");
				cout << "\n\t---Errado!---\n";
				erros++;
			}
		}else if (listaMark[rNumber] == 1){
			cout << "\t[a] <h1>\n";
			cout << "\t[b] <p>\n";
			cout << "\t[c] <form>\n";
			cout << "\t[d] <table>\n";
			cout << "\t[e] <title>\n >>> ";
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
			cout << "\t[a] <img src=\"imagem.png\">\n";
			cout << "\t[b] <img background=\"imagem.png\">\n";
			cout << "\t[c] <img align=\"imagem.png\">\n";
			cout << "\t[d] <img name=\"imagem.png\">\n";
			cout << "\t[e] <img href=\"imagem.png\">\n >>> ";
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
            cout << "\t[a] <body bgcolor:\"cor\">\n";
			cout << "\t[b] <background color=\"cor\">\n";
			cout << "\t[c] <body background=\"cor\">\n";
			cout << "\t[d] <background bgcolor=\"cor\">\n";
			cout << "\t[e] <body bgcolor=\"cor\">\n >>> ";
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
            cout << "\t[a] Criar uma tabela\n";
			cout << "\t[b] Criar uma lista\n";
			cout << "\t[c] Criar um parágrafo\n";
			cout << "\t[d] Criar um link\n";
			cout << "\t[e] Abrir uma imagem\n >>> ";
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
