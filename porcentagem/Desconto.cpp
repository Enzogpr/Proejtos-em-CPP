#include <iostream>
#include <locale.h>
using namespace std;

struct variaveis
{
	double pre�o = 0, pre�of = 0;
	string nome;

};


int main() {
	setlocale(LC_ALL, "Portuguese");
	variaveis v;

	cout << "Qual � o produto? ";
	cin >> v.nome;
	cout << "Qual o pre�o? ";
	cin >> v.pre�o;

	v.pre�of = v.pre�o - (v.pre�o / 10);

	cout << "O novo pre�o do produto " << v.nome << " � " << v.pre�of;

	return 0;
}