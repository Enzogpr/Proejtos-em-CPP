#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

struct variaveis
{
	int idade;
	string nome;
};

int main() {
	setlocale(LC_ALL, "portuguese");
	variaveis v;

	cout << "Qual o seu nome? ";
	cin.ignore();
	getline(cin, v.nome);

	
	cout << "\nQual sua idade? ";
	cin >> v.idade;

	system("cls");

	cout << "Seu nome �: " << v.nome << " e sua idade �: " << v.idade;

	return 0;
}