#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int tp(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");

	char* listaPerguntas[] = {"O que é uma linguagem de programação?",
	"Defina o que é linguagem de máquina?",
	"Como é feita a tradução de um programa?",
	"O que é um compilador?",
	"O que é um código executável?"};

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
			cout << "\t[a] É um conjunto de símbolos e códigos que representam significados e funções para o computador.\n";
			cout << "\t[b] São endereços simbólicos que correspondem a uma instrução de máquina.\n";
			cout << "\t[c] É a primeira e mais primitiva linguagem de computador, muito complexa e de difícil compreensão.\n";
			cout << "\t[d] É um programa responsável por traduzir uma linguagem fonte para uma linguagem objeto, executável por máquinas.\n";
			cout << "\t[e] A linguagem utilizada no programa para ser traduzida para linguagem de Máquina.\n >>> ";
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
			cout << "\t[a] São endereços simbólicos que correspondem a uma instrução de máquina.\n";
			cout << "\t[b] São variáveis que devem ser declaradas em um local que possa ser conhecida por todos os componentes do programa.\n";
			cout << "\t[c] É um programa responsável por traduzir uma linguagem fonte para uma linguagem objeto, executável por máquinas.\n\n";
			cout << "\t[d] São comandos permitem expressar decisões que alteram o fluxo de execução de um programa.\n";
			cout << "\t[e] É a primeira e mais primitiva linguagem de computador, muito complexa e de difícil compreensão.\n >>> ";
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
			cout << "\t[a] A linguagem utilizada no programa para ser traduzida para linguagem de Máquina.\n";
			cout << "\t[b] É um programa responsável por traduzir uma linguagem fonte para uma linguagem objeto, executável por máquinas.\n";
			cout << "\t[c] Google tradutor\n";
			cout << "\t[d] Uma sequência de ações é repetida por um número específico de vezes\n";
			cout << "\t[e] São comandos permitem expressar decisões que alteram o fluxo de execução de um programa.\n >>> ";
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
            cout << "\t[a] Uma sequência de ações que é repetida por um número específico de vezes\n";
			cout << "\t[b] É um editor de texto\n";
			cout << "\t[c] São variáveis que devem ser declaradas em um local que possa ser conhecida por todos os componentes do programa.\n";
			cout << "\t[d] C/C++, Java, Python\n";
			cout << "\t[e] É um programa responsável por traduzir uma linguagem fonte para uma linguagem objeto, executável por máquinas.\n >>> ";
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
            cout << "\t[a] Uma sequência de ações que é repetida por um número específico de vezes.\n";
			cout << "\t[b] Um arquivo comum de texto\n";
			cout << "\t[c] Criar um parágrafo\n";
			cout << "\t[d] O código executável é resultado da compilação, logo pode ser executado pelo sistema operacional.\n";
			cout << "\t[e] É um programa responsável por traduzir uma linguagem fonte para uma linguagem objeto, executável por máquinas.\n >>> ";
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
