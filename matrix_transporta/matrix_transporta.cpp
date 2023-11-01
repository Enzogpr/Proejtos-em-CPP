#include <iostream>
#include <locale.h>

using namespace std;


void matrix_trasposta(int matrix[3][3]) {

	int mt[3][3];

		for ( int l = 0; l < 3; l++)
		{
			for (int c = 0; c < 3; c++)
			{
				mt[l][c] = matrix[l][c];
			}
		}

		cout << "\nA matrix transposta fica: " << endl;
		for ( int l  = 0; l < 3; l++)
		{
			for (int c = 0; c < 3; c++) {

				cout << "\t" << mt[c][l] << " ";
			}
			cout << endl;
		}
}



int main() {
	setlocale(LC_ALL, "Portuguese");
	int l, c, matrix[3][3];
	int soma = 0;


	for (l = 0; l < 3; l++) {
		for (c = 0; c < 3; c++) {

			cout << "Informe o valor da matrix" << "[" << l << "]" << "[" << c << "]: ";
			cin >> matrix[l][c];
			if (l == c)
			{
				soma = soma + (matrix[l][c]);
			}
		}
	}

	system("cls");
	
	cout << "A soma da diagonal principal é: " << soma << endl;

	if (soma % 2 != 0)
	{

		matrix_trasposta(matrix);
	}

	else
	{
		cout << "A matriz é: " << endl;
		for ( l = 0; l < 3; l++)
		{
			for (c = 0; c < 3; c++) {

				cout << "\t" << matrix[l][c] << " ";
			}
			cout << endl;
		}
		
		
	}
	

	return 0;
}