#include <iostream>
#include <locale.h>
using namespace std;
struct raio
{
	float raio;
};

double calculaArea(float raio) {
	float pi = 3.14;
	float area;

	area = pi * (raio * raio);
	
	return area;

}

int main() {
	setlocale(LC_ALL, "Portuguese");
	raio r;

	cout << "Informe o raio: ";
	cin >> r.raio;

	cout << "\n A area é: " << calculaArea(r.raio);

	return 0;
}