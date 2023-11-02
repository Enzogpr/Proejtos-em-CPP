#include <iostream>
#include <vector>
#include<algorithm> 

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int numero;
	vector<int>num;
	int impar = 0, par = 0, cont;

	for(int i = 0; i<=9 ; i++)
	{
		cout << "Digite um numero inteiro: ";
		cin >> numero;
		num.push_back(numero);

		if (numero % 2 == 0) {
			par++;
		}else{
			impar++;
		}
	}

	int n = num.size();
	for ( int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++) {
			if (num[j] % 2 == 0 && num[j] < num[j+1])
			{
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	

	cout << "numeros ordenados: ";
	for (int i : num)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
		
	}
	
	cout << "\nQuantidade de números pares: " << par << endl;
	cout << "Quantidade de números ímpares: " << impar << endl;
	


	return 0;
}