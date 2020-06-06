#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int bd(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");

	char* listaPerguntas[] = {"O que é um atributo?",
	"O que é a chave primária?",
	"O que são dados?",
	"Para que serve uma chave primária?",
	"O que é um relacionamento?"};

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
			cout << "\t[a] É o elo de ligação entre entidades.\n";
			cout << "\t[b] Definir o título da página\n";
			cout << "\t[c] São dados que identificam e classificam a entidade.\n";
			cout << "\t[d] É uma cópia da chave primária que é inserida em outra entidade criando um compartilhamento de dados entre entidades.\n";
			cout << "\t[e] Ferramenta para criar um formulário\n >>> ";
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
			cout << "\t[a] São dados que identificam e classificam a entidade.\n";
			cout << "\t[b] Ferramenta para identificar e classificar uma entidade\n\n";
			cout << "\t[c] Uma estrutura organizada, criado em um meio físico para armazenar dados.\n";
			cout << "\t[d] É o elo de ligação entre entidades.\n";
			cout << "\t[e] É um atributo especial que garante a unicidade do registro em tabelas.\n >>> ";
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
			cout << "\t[a] São valores que são armazenados em banco de dados, mas isolamente o dado não remete a uma informação.\n";
			cout << "\t[b] Ferramenta para identificar e classificar uma entidade\n\n";
			cout << "\t[c] Uma estrutura organizada, criado em um meio físico para armazenar dados.\n";
			cout << "\t[d] É o elo de ligação entre entidades.\n";
			cout << "\t[e] É um atributo especial que garante a unicidade do registro em tabelas.\n >>> ";
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
			cout << "\t[b] Criar um parágrafo\n";
			cout << "\t[c] Identificar e classificar uma entidade\n";
			cout << "\t[d] Para fazer uma ligação entre entidades\n";
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
            cout << "\t[a] É um atributo especial que garante a unicidade do registro em tabelas.\n";
			cout << "\t[b] Função para criar uma lista\n";
			cout << "\t[c] Uma estrutura organizada, criada em um meio físico para armazenar dados.\n";
			cout << "\t[d] É o elo de ligação entre entidades.\n";
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
