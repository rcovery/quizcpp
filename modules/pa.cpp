#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int pa(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");

	char* listaPerguntas[] = {"Qual o comando utilizado para pausar o programa?",
	"Em qual dessas opções mostra o jeito correto de declarar uma variável inteira?",
	"O que é uma constante?",
	"Como criar uma estrutura de repetição 'for'?",
	"Como criar uma estrutura condicional 'if'?"};

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
            cout << "\t[a] pause();\n";
			cout << "\t[b] system(\"stop\");\n";
			cout << "\t[c] system(\"pausar\")\n";
			cout << "\t[d] system(\"pause\");\n";
			cout << "\t[e] stop();\n >>> ";
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
		}else if (listaMark[rNumber] == 1){
			cout << "\t[a] float 1°numero;\n";
			cout << "\t[b] int -numero1;\n";
			cout << "\t[c] char _n1;\n";
			cout << "\t[d] float _n1;\n";
			cout << "\t[e] int _n1;\n >>> ";
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
			cout << "\t[a] É um espaço alocado na memória para armazenar um valor que não muda com o tempo.\n";
			cout << "\t[b] É um espaço alocado na memória para armazenar um valor temporário.\n";
			cout << "\t[c] É uma variável que armazena várias variáveis do mesmo tipo.\n";
			cout << "\t[d] É uma subrotina que executa uma tarefa.\n";
			cout << "\t[e] É um grupo de comandos, constituindo um trecho de algoritmo.\n >>> ";
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
            cout << "\t[a] para (condição;incremento){}\n";
			cout << "\t[b] for while(true){}\n";
			cout << "\t[c] enquanto (condição){}\n";
			cout << "\t[d] for (condição;início;incremento):\n";
			cout << "\t[e] for (início;condição;incremento){}\n >>> ";
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
            cout << "\t[a] if (condição):\n";
			cout << "\t[b] for (início;condição;incremento)\n";
			cout << "\t[c] if (incremento){}\n";
			cout << "\t[d] if (condição){}\n";
			cout << "\t[e] se (condição){}\n >>> ";
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
