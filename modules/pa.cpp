#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int pa(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");

	char* listaPerguntas[] = {"Qual o comando utilizado para pausar o programa?",
	"Em qual dessas op��es mostra o jeito correto de declarar uma vari�vel inteira?",
	"O que � uma constante?",
	"Como criar uma estrutura de repeti��o 'for'?",
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
			cout << "\t[a] float 1�numero;\n";
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
			cout << "\t[a] � um espa�o alocado na mem�ria para armazenar um valor que n�o muda com o tempo.\n";
			cout << "\t[b] � um espa�o alocado na mem�ria para armazenar um valor tempor�rio.\n";
			cout << "\t[c] � uma vari�vel que armazena v�rias vari�veis do mesmo tipo.\n";
			cout << "\t[d] � uma subrotina que executa uma tarefa.\n";
			cout << "\t[e] � um grupo de comandos, constituindo um trecho de algoritmo.\n >>> ";
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
            cout << "\t[a] para (condi��o;incremento){}\n";
			cout << "\t[b] for while(true){}\n";
			cout << "\t[c] enquanto (condi��o){}\n";
			cout << "\t[d] for (condi��o;in�cio;incremento):\n";
			cout << "\t[e] for (in�cio;condi��o;incremento){}\n >>> ";
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
            cout << "\t[a] if (condi��o):\n";
			cout << "\t[b] for (in�cio;condi��o;incremento)\n";
			cout << "\t[c] if (incremento){}\n";
			cout << "\t[d] if (condi��o){}\n";
			cout << "\t[e] se (condi��o){}\n >>> ";
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
