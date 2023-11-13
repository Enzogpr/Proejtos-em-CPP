#include <iostream>
#include <locale.h>

using namespace std;

struct teperatura
{
	double temperatura;
	char unidade;
};

double celsiusParaFahrenheit(double temperatura) {

	double cel;

	cel = (temperatura * 9.0 / 5.0) + 32;

	return cel;
	
}

double fahrenheitParaCelsius(double temperatura) {

	double fah;

	fah = (temperatura -32)  * 5.0 / 9;

	return fah;

}

int main() {
	teperatura t;


	cout << "Digite se quer converter para Celsius [C] ou para Fahrenheit [F]: ";
	cin >> t.unidade;

	
	switch (toupper(t.unidade)){

	case 'C':

		cout << "Digite a temperatura em Fahrenheit: ";
		cin >> t.temperatura;

		cout << "A temperatura convertida para Celsius fica: " << fahrenheitParaCelsius(t.temperatura) << "°";
		break;

		case 'F':
	
		   cout << "Digite a temperatura em Celsius: ";
		   cin >> t.temperatura;

		   cout << "A temperatura convertida para Fahrenheit fica: " << celsiusParaFahrenheit(t.temperatura) << "°";
		  break;

	default: 
		system("cls");
		cout << "Escolha invalida";
		break;
	} 
	return 0;
	}
	
	
	

