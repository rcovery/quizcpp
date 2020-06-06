#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int dd(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");

	char* listaPerguntas[] = {"Marque a opção que é uma tecla de atalho para criação de um novo projeto no Photoshop",
	"Qual o atalho para criação de uma nova camada no Photoshop?",
	"Qual a tecla de atalho para acessar a ferramenta Borracha?",
	"Qual filtro(em inglês) deve ser utilizado caso desejo desfocar a imagem e ao mesmo tempo causar impressão de movimento?",
	"Qual a combinação de teclas que deve ser usada para mesclar muitas camadas em uma única camada preservando as originais?"};

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
			cout << "\t[a] Ctrl + Alt + Shift + N\n";
			cout << "\t[b] Shift + E\n";
			cout << "\t[c] Ctrl + N\n";
			cout << "\t[d] Ctrl + Shift + Alt + E\n";
			cout << "\t[e] Ctrl + Shift + E\n >>> ";
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
			cout << "\t[a] Ctrl + Alt + Shift + N\n";
			cout << "\t[b] Shift + E\n";
			cout << "\t[c] Ctrl + N\n";
			cout << "\t[d] Ctrl + Shift + Alt + E\n";
			cout << "\t[e] Ctrl + Shift + E\n >>> ";
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
			cout << "\t[a] E\n";
			cout << "\t[b] R\n";
			cout << "\t[c] C\n";
			cout << "\t[d] W\n";
			cout << "\t[e] Z\n >>> ";
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
            cout << "\t[a] Water Paper\n";
			cout << "\t[b] Gaussian Blur\n";
			cout << "\t[c] Note Paper\n";
			cout << "\t[d] Patchwork\n";
			cout << "\t[e] Motion Blur\n >>> ";
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
            cout << "\t[a] Ctrl + M\n";
			cout << "\t[b] Shift + E\n";
			cout << "\t[c] Ctrl + N\n";
			cout << "\t[d] Ctrl + Shift + Alt + E\n";
			cout << "\t[e] Ctrl + Shift + E\n >>> ";
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
