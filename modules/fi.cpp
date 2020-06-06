#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int fi(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");

	char* listaPerguntas[] = {"Qual sistema operacional não é da Microsoft?",
	"O que é antivírus de computador?",
	"O que é Windows da Microsoft?",
	"O que é um navegador?",
	"Qual componente não faz parte do pacote Office?"};

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
			cout << "\t[a] É um antivírus contra malária, febre amarela e tosse\n";
			cout << "\t[b] É um software que protege os seres humanos contra vírus\n";
			cout << "\t[c] É um hardware contra vírus\n";
			cout << "\t[d] É um programa que prejudica o computador\n";
			cout << "\t[e] É um software contra vírus\n >>> ";
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
			cout << "\t[a] É um sistema operacional\n";
			cout << "\t[b] É um Driver\n";
			cout << "\t[c] Não serve para ser instalado\n";
			cout << "\t[d] É um componente do pacote office\n";
			cout << "\t[e] É um navegador de internet\n >>> ";
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
            cout << "\t[a] Guia o usuário a realizar todas as tarefas no PC\n";
			cout << "\t[b] É um programa que permite acessar a internet\n";
			cout << "\t[c] Permite fazer navegação em águas\n";
			cout << "\t[d] Faz a edição de fotografias e vídeos\n";
			cout << "\t[e] É um programa que permite acessar a internet\n >>> ";
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
