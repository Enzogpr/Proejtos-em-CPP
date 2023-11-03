#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

struct carro
{
	string marca, modelo;
	int ano;
	double pre�o;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	const int qtdcarro = 3;
	carro carros[qtdcarro];
	carro c;



	for (int i = 0; i < qtdcarro; i++)
	{
		cout << "--------Insira os dados do carro " << i + 1 << "--------" << endl;
		cout << "Marca: ";
		cin >> carros[i].marca;
		cout << "Modelo: ";
		cin >> carros[i].modelo;
		cout << "Ano: ";
		cin >> carros[i].ano;
		cout << "Pre�o: ";
		cin >> carros[i].pre�o;
	
		
		
	}

	carro carromaisantigo = carros[0];
	carro carromaiscaro = carros[0];

	for (int i = 0; i < qtdcarro; i++)
	{
		if (carros[i].ano < carromaisantigo.ano)
		{
			carromaisantigo = carros[i];
		}

		if (carros[i].pre�o > carromaiscaro.pre�o)
		{
			carromaiscaro = carros[i];
		}
	}

	system("cls");

	cout << "-----Carro mais antigo-----\n";
	cout << "Marca: " << carromaisantigo.marca << endl;
	cout << "Modelo: " << carromaisantigo.modelo << endl;
	cout << "Ano: " << carromaisantigo.ano << endl;
	cout << "Pre�o: " << carromaisantigo.pre�o << endl;


	cout << "-----Carro mais caro-----\n";
	cout << "Marca: " << carromaiscaro.marca << endl;
	cout << "Modelo: " << carromaiscaro.modelo << endl;
	cout << "Ano: " << carromaiscaro.ano << endl;
	cout << "Pre�o: " << carromaiscaro.pre�o << endl;
	
	return 0;


}