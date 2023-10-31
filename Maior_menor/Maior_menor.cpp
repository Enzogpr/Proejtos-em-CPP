#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	double number1, number2;

	cout << ("Digite o primeiro número:  ");
	cin >> number1;
	cout << ("Digite o segundo número:  ");
	cin >> number2;
	system("cls");
	if (number1 > number2)
	{
		cout << "o número " << number1 << " é maior do que o número " << number2;
	}
	else if (number2 > number1)
	{
		cout << "o número " << number2 << " é maior do que o número " << number1;
	}
	else
	{
		cout << "Os números são iguais";
	}




	return 0;
}