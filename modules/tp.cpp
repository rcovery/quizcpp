#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int tp(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");

	char* listaPerguntas[] = {"O que � uma linguagem de programa��o?",
	"Defina o que � linguagem de m�quina?",
	"Como � feita a tradu��o de um programa?",
	"O que � um compilador?",
	"O que � um c�digo execut�vel?"};

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
			cout << "\t[a] � um conjunto de s�mbolos e c�digos que representam significados e fun��es para o computador.\n";
			cout << "\t[b] S�o endere�os simb�licos que correspondem a uma instru��o de m�quina.\n";
			cout << "\t[c] � a primeira e mais primitiva linguagem de computador, muito complexa e de dif�cil compreens�o.\n";
			cout << "\t[d] � um programa respons�vel por traduzir uma linguagem fonte para uma linguagem objeto, execut�vel por m�quinas.\n";
			cout << "\t[e] A linguagem utilizada no programa para ser traduzida para linguagem de M�quina.\n >>> ";
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
			cout << "\t[a] S�o endere�os simb�licos que correspondem a uma instru��o de m�quina.\n";
			cout << "\t[b] S�o vari�veis que devem ser declaradas em um local que possa ser conhecida por todos os componentes do programa.\n";
			cout << "\t[c] � um programa respons�vel por traduzir uma linguagem fonte para uma linguagem objeto, execut�vel por m�quinas.\n\n";
			cout << "\t[d] S�o comandos permitem expressar decis�es que alteram o fluxo de execu��o de um programa.\n";
			cout << "\t[e] � a primeira e mais primitiva linguagem de computador, muito complexa e de dif�cil compreens�o.\n >>> ";
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
			cout << "\t[a] A linguagem utilizada no programa para ser traduzida para linguagem de M�quina.\n";
			cout << "\t[b] � um programa respons�vel por traduzir uma linguagem fonte para uma linguagem objeto, execut�vel por m�quinas.\n";
			cout << "\t[c] Google tradutor\n";
			cout << "\t[d] Uma sequ�ncia de a��es � repetida por um n�mero espec�fico de vezes\n";
			cout << "\t[e] S�o comandos permitem expressar decis�es que alteram o fluxo de execu��o de um programa.\n >>> ";
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
            cout << "\t[a] Uma sequ�ncia de a��es que � repetida por um n�mero espec�fico de vezes\n";
			cout << "\t[b] � um editor de texto\n";
			cout << "\t[c] S�o vari�veis que devem ser declaradas em um local que possa ser conhecida por todos os componentes do programa.\n";
			cout << "\t[d] C/C++, Java, Python\n";
			cout << "\t[e] � um programa respons�vel por traduzir uma linguagem fonte para uma linguagem objeto, execut�vel por m�quinas.\n >>> ";
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
            cout << "\t[a] Uma sequ�ncia de a��es que � repetida por um n�mero espec�fico de vezes.\n";
			cout << "\t[b] Um arquivo comum de texto\n";
			cout << "\t[c] Criar um par�grafo\n";
			cout << "\t[d] O c�digo execut�vel � resultado da compila��o, logo pode ser executado pelo sistema operacional.\n";
			cout << "\t[e] � um programa respons�vel por traduzir uma linguagem fonte para uma linguagem objeto, execut�vel por m�quinas.\n >>> ";
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
