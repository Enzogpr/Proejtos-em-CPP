#include <iostream>
#include <vector>
#include<algorithm> 

using namespace std;

struct variaveis{
	int numero;
	vector<int> num;
	int maximo, minimo, cont;

};

int main() {
	setlocale(LC_ALL, "Portuguese");
	variaveis v;

	v.cont = 1;

	while (v.cont <= 10)
	{
		cout << "Digite um n�mero inteiro: " << endl;
		cin >> v.numero;
		v.num.push_back(v.numero);
	

	if (v.cont == 1)
	{
		v.maximo = v.numero;
		v.minimo = v.numero;
	}
	else
	{
		if (v.numero > v.maximo)
		{
			v.maximo = v.numero;
		}
		if (v.numero < v.minimo)
		{
			v.minimo = v.numero;
		}
	}

	v.cont++;
	}
	cout << "O maior n�mero �: " << v.maximo << endl;
	cout << "O menor n�mero �: " << v.minimo << endl;




	return 0;
}