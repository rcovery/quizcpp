#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int ltt(){
	setlocale(LC_ALL, "portuguese");
	srand(time(NULL));
	system("cls");

	char* listaPerguntas[] = {"O que é um resumo?",
	"O que é parafrase?",
	"O que é fichamento?",
	"O que é resenha?",
	"O que é citação?"};

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
			cout << "\t[a] Quando é relatado/explicado algo de forma mais resumida, com outras palavras, outros contextos.\n";
			cout << "\t[b] É exposição breve e opnativa de uma obra.\n";
			cout << "\t[c] É o resumo,resenha crítica ou comentada das ideias principais abordadas por determinada obra.\n";
			cout << "\t[d] Quando indicamos quem disse algo e usamos as mesmas palavras.\n";
			cout << "\t[e] A apresentação dos pontos essênciais de algo.\n >>> ";
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
		}else if (listaMark[rNumber] == 1){
			cout << "\t[a] Quando é relatado/explicado algo de forma mais resumida, com outras palavras, outros contextos.\n";
			cout << "\t[b] É exposição breve e opnativa de uma obra.\n";
			cout << "\t[c] É o resumo,resenha crítica ou comentada das ideias principais abordadas por determinada obra.\n";
			cout << "\t[d] Quando indicamos quem disse algo e usamos as mesmas palavras.\n";
			cout << "\t[e] A apresentação dos pontos essênciais de algo.\n >>> ";
			cin >> op;
			if (op == "b"){
				system("cls");
				cout << "\n\t---Correto!---\n";
				acertos++;
			}else{
				system("cls");
				cout << "\n\t---Errado!---\n";
				erros++;
			}
		}else if (listaMark[rNumber] == 2){
			cout << "\t[a] Quando é relatado/explicado algo de forma mais resumida, com outras palavras, outros contextos.\n";
			cout << "\t[b] É exposição breve e opnativa de uma obra.\n";
			cout << "\t[c] É o resumo,resenha crítica ou comentada das ideias principais abordadas por determinada obra.\n";
			cout << "\t[d] Quando indicamos quem disse algo e usamos as mesmas palavras.\n";
			cout << "\t[e] A apresentação dos pontos essênciais de algo.\n >>> ";
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
		}else if (listaMark[rNumber] == 3){
            cout << "\t[a] Quando é relatado/explicado algo de forma mais resumida, com outras palavras, outros contextos.\n";
			cout << "\t[b] É exposição breve e opnativa de uma obra.\n";
			cout << "\t[c] É o resumo,resenha crítica ou comentada das ideias principais abordadas por determinada obra.\n";
			cout << "\t[d] Quando indicamos quem disse algo e usamos as mesmas palavras.\n";
			cout << "\t[e] A apresentação dos pontos essênciais de algo.\n >>> ";
			cin >> op;
			if (op == "b"){
				system("cls");
				cout << "\n\t---Correto!---\n";
				acertos++;
			}else{
				system("cls");
				cout << "\n\t---Errado!---\n";
				erros++;
			}
		}else if (listaMark[rNumber] == 4){
            cout << "\t[a] Quando é relatado/explicado algo de forma mais resumida, com outras palavras, outros contextos.\n";
			cout << "\t[b] É exposição breve e opnativa de uma obra.\n";
			cout << "\t[c] É o resumo,resenha crítica ou comentada das ideias principais abordadas por determinada obra.\n";
			cout << "\t[d] Quando indicamos quem disse algo e usamos as mesmas palavras.\n";
			cout << "\t[e] A apresentação dos pontos essênciais de algo.\n >>> ";
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
