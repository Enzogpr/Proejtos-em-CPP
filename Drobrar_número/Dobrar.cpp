
#include <iostream>
#include <locale.h>
using namespace std;


int dobrar_numero(int number) {
	int resultado;

	resultado = number * 2;

	return resultado;

};

int main() {
	setlocale(LC_ALL, "Portuguese");
	int number;

	cout << "Digite um numero inteiro";
	cin >> number;

	cout << dobrar_numero(number);
	return 0;

}



//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int number;
//
//	cout << ("Digite um numero inteiro: ");
//	cin >> number;
//	number = number * 2;
//	cout << ("O dobro desse número é: ") << number;
//
//
//
//	return 0;
//}