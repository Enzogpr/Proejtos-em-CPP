#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

struct aluno
{
	double n1, n2, media;
	string nome;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	const int numalunos = 5;
	aluno al;
	
	aluno alunos[numalunos];


	for (int i = 0; i < numalunos; i++)
	{
		cout << "Digite o nome do aluno" << i + 1 << ": ";
		cin >> alunos[i].nome;
		cout << "Digite a 1° nota do aluno" << i + 1 << ": ";
		cin >> alunos[i].n1;
		cout << "Digite a 2° nota do aluno" << i + 1 << ": ";
		cin >> alunos[i].n2;
		cout << "\n-----------------------------------------------\n";

	}
	system("cls");

	for ( int i = 0; i < numalunos; i++)
	{
		al.media = (alunos[i].n1 + alunos[i].n2) / 2;

		cout << "Aluno: " << alunos[i].nome << endl;
		cout << "Nota 1: " << alunos[i].n1 << endl;
		cout << "Nota 2: " << alunos[i].n2 << endl;
		cout << "Media: " << al.media << endl;
		cout << "\n-----------------------------------------------\n";
	}
	

	return 0;
}