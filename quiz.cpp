#include <iostream>
#include <locale.h>
#include <string.h>;
#include "modules/ltt.cpp"
#include "modules/bd.cpp"
#include "modules/pw.cpp"
#include "modules/tp.cpp"
#include "modules/pa.cpp"
#include "modules/fi.cpp"
#include "modules/dd.cpp"
#include "modules/aps.cpp"
using namespace std;

int execute(){
	setlocale(LC_ALL, "portuguese");
	system("color F0");
	int resp;
	while (true){
		cout << "\n -=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
		cout << " .oPYo.    o    o   o   oooooo \n";
		cout << " 8    8    8    8   8       d' \n";
		cout << " 8    8    8    8   8      d'  \n";
		cout << " 8  d.8    8    8   8     d'   \n";
		cout << " 8  `b8.   8    8   8    d'    \n";
		cout << " `YooP'P   `YooP'   8   dooooo \n";
		cout << " :....:.::::.....:::..::.......\n";
		cout << " ::::::::::::::::::::::::::::::\n";
		cout << " ::::::::::::::::::::::::::::::\n";
		cout << "\n -=-=-=-=-=-=-=-=-=-=-=-=-=-=-";
		cout << "\n [1] Programação Web";
		cout << "\n [2] Banco de dados";
		cout << "\n [3] Linguagem, trabalho, tecnologia";
		cout << "\n [4] Técnicas de programação";
		cout << "\n [5] Programação e algoritmos";
		cout << "\n [6] Fundamentos da informática";
		cout << "\n [7] Análise e projeto de sistemas";
		cout << "\n [8] Design digital";
		cout << "\n -=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n >>> ";
		cin >> resp;
		while (cin.fail()){
			cin.clear();
			cin.ignore();
			cout << ">>> ";
			cin >> resp;
		}
		if (resp == 1){
			pw();
		}else if (resp == 2){
			bd();
		}else if (resp == 3){
			ltt();
		}else if (resp == 4){
			tp();
		}else if (resp == 5){
			pa();
		}else if (resp == 6){
			fi();
		}else if (resp == 7){
			aps();
		}else if (resp == 8){
			dd();
		}system("cls");
	}

}

int main(){

	string user, pass;
	cout << "Informe o usuário\n> ";
	cin >> user;
	cout << "[!] Checking user...\n";

	if (user == "qu1z"){
		cout << "[OK]\n";

		cout << "Informe a senha\n> ";
		cin >> pass;
		cout << "[!] Checking pass...\n";

		if (pass == "runqu1z"){
			execute();
		}else{cout << "[!] Disconnected\n";}
	}else{
		cout << "[!] Disconnected\n";
	}

	system("pause"); 
	return 0;
}
