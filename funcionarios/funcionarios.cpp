#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

struct funcionario
{
	string nome;
	double ht, vh, salario;
};

int main() {
	const int qtdfuncionario = 3;
	funcionario funcionarios[qtdfuncionario];
	funcionario f;

	for (int i = 0; i < qtdfuncionario; i++)
	{
		cout << "Digite o nome do funcionario " << i + 1 << ": ";
		cin >> funcionarios[i].nome;
		cout << "Digite a quantidade de horas trabalhadas: ";
		cin >> funcionarios[i].ht;
		cout << "Digite o valor por hora: ";
		cin >> funcionarios[i].vh;
		cout << "------------------------------------------\n";
	}
	system("cls");

	for (int i  = 0; i < qtdfuncionario; i++)
	{
		if (funcionarios[i].ht > 40)
		{
			f.salario = (funcionarios[i].vh * 40) + ( (funcionarios[i].vh +( funcionarios[i].vh * 0.5)) * (funcionarios[i].ht - 40));
		}
		else
		{
			f.salario = funcionarios[i].vh * funcionarios[i].ht;
		}

		cout << "Nome: " << funcionarios[i].nome << endl;
		cout << "Horas trabalhadas: " << funcionarios[i].ht << endl;
		cout << "Valor da hora: RS" << funcionarios[i].vh << endl;
		cout << "Salario: R$" << f.salario << endl;
		cout << "------------------------------------------\n";
	}

	return 0;

}