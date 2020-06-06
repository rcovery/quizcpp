#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int fi(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");

	char* listaPerguntas[] = {"Qual sistema operacional n�o � da Microsoft?",
	"O que � antiv�rus de computador?",
	"O que � Windows da Microsoft?",
	"O que � um navegador?",
	"Qual componente n�o faz parte do pacote Office?"};

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
			cout << "\t[a] Windows Vista\n";
			cout << "\t[b] Windows XP\n";
			cout << "\t[c] Android\n";
			cout << "\t[d] Windows 8.1\n";
			cout << "\t[e] Windows Phone\n >>> ";
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
			cout << "\t[a] � um antiv�rus contra mal�ria, febre amarela e tosse\n";
			cout << "\t[b] � um software que protege os seres humanos contra v�rus\n";
			cout << "\t[c] � um hardware contra v�rus\n";
			cout << "\t[d] � um programa que prejudica o computador\n";
			cout << "\t[e] � um software contra v�rus\n >>> ";
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
			cout << "\t[a] � um sistema operacional\n";
			cout << "\t[b] � um Driver\n";
			cout << "\t[c] N�o serve para ser instalado\n";
			cout << "\t[d] � um componente do pacote office\n";
			cout << "\t[e] � um navegador de internet\n >>> ";
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
            cout << "\t[a] Guia o usu�rio a realizar todas as tarefas no PC\n";
			cout << "\t[b] � um programa que permite acessar a internet\n";
			cout << "\t[c] Permite fazer navega��o em �guas\n";
			cout << "\t[d] Faz a edi��o de fotografias e v�deos\n";
			cout << "\t[e] � um programa que permite acessar a internet\n >>> ";
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
            cout << "\t[a] Excel\n";
			cout << "\t[b] PowerPoint\n";
			cout << "\t[c] Word\n";
			cout << "\t[d] Blender\n";
			cout << "\t[e] Access\n >>> ";
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
