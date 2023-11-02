#include <iostream>
#include <locale.h>
using namespace std;

struct variaveis
{
	double preço = 0, preçof = 0;
	string nome;

};


int main() {
	setlocale(LC_ALL, "Portuguese");
	variaveis v;

	cout << "Qual é o produto? ";
	cin >> v.nome;
	cout << "Qual o preço? ";
	cin >> v.preço;

	v.preçof = v.preço - (v.preço / 10);

	cout << "O novo preço do produto " << v.nome << " é " << v.preçof;

	return 0;
}