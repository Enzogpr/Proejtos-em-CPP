#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	double number1, number2;

	cout << "Digite o primeiro n�mero:  ";
	cin >> number1;
	cout << ("Digite o segundo n�mero:  ");
	cin >> number2;
	system("cls");
	if (number1 > number2)
	{
		cout << "o n�mero " << number1 << " � maior do que o n�mero " << number2;
	}
	else if (number2 > number1)
	{
		cout << "o n�mero " << number2 << " � maior do que o n�mero " << number1;
	}
	else
	{
		cout << "Os n�meros s�o iguais";
	}
	return 0;
}