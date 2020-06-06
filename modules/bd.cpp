#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int bd(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");

	char* listaPerguntas[] = {"O que � um atributo?",
	"O que � a chave prim�ria?",
	"O que s�o dados?",
	"Para que serve uma chave prim�ria?",
	"O que � um relacionamento?"};

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
			cout << "\t[a] � o elo de liga��o entre entidades.\n";
			cout << "\t[b] Definir o t�tulo da p�gina\n";
			cout << "\t[c] S�o dados que identificam e classificam a entidade.\n";
			cout << "\t[d] � uma c�pia da chave prim�ria que � inserida em outra entidade criando um compartilhamento de dados entre entidades.\n";
			cout << "\t[e] Ferramenta para criar um formul�rio\n >>> ";
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
			cout << "\t[a] S�o dados que identificam e classificam a entidade.\n";
			cout << "\t[b] Ferramenta para identificar e classificar uma entidade\n\n";
			cout << "\t[c] Uma estrutura organizada, criado em um meio f�sico para armazenar dados.\n";
			cout << "\t[d] � o elo de liga��o entre entidades.\n";
			cout << "\t[e] � um atributo especial que garante a unicidade do registro em tabelas.\n >>> ";
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
			cout << "\t[a] S�o valores que s�o armazenados em banco de dados, mas isolamente o dado n�o remete a uma informa��o.\n";
			cout << "\t[b] Ferramenta para identificar e classificar uma entidade\n\n";
			cout << "\t[c] Uma estrutura organizada, criado em um meio f�sico para armazenar dados.\n";
			cout << "\t[d] � o elo de liga��o entre entidades.\n";
			cout << "\t[e] � um atributo especial que garante a unicidade do registro em tabelas.\n >>> ";
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
            cout << "\t[a] Criar uma lista\n";
			cout << "\t[b] Criar um par�grafo\n";
			cout << "\t[c] Identificar e classificar uma entidade\n";
			cout << "\t[d] Para fazer uma liga��o entre entidades\n";
			cout << "\t[e] Serve para garantir a unicidade do registro em tabelas.\n >>> ";
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
            cout << "\t[a] � um atributo especial que garante a unicidade do registro em tabelas.\n";
			cout << "\t[b] Fun��o para criar uma lista\n";
			cout << "\t[c] Uma estrutura organizada, criada em um meio f�sico para armazenar dados.\n";
			cout << "\t[d] � o elo de liga��o entre entidades.\n";
			cout << "\t[e] Conjunto de dados que remete algo compreendido para as pessoas\n >>> ";
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
