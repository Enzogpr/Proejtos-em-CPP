#include <iostream>
#include <locale.h>
using namespace std;

int main() {
setlocale(LC_ALL, "Portuguese");
	int l, c, matrix[3][3];
	int  soma=0;
	

	for ( l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++) {
			cout << "Informe o valor da matrix " << "[" << l << "]" << "[" << c << "]: ";
			cin >> matrix[l][c];
			
		};
	}

	system("pause");
	system("cls");

	cout << "\tA matrix[3][3] fica: \n";
	cout << "\n";
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++) {
			cout << "\t" << matrix[l][c] << " ";

		};
		cout << endl;
	}

	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++) {
			
			soma = soma + matrix[l][c];

		};
		cout << endl;
	}

	cout << "\tA soma de todos os elementos da matrix é: " << soma << endl;

	return 0;
}