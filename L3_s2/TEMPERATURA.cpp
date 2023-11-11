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

	cout << "Digite a temperatura atual: ";
	cin >> t.temperatura;




	return 0
}