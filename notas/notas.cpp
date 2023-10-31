#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <locale.h>
#include <stdio.h>

using namespace std;


int main() {
	setlocale(LC_ALL, "portuguese");

	int turma;
	float nota;
	float somam = 0;
	float mediaa, mediar;
	int aluno = 0, aprovado = 0, reprovado = 0;
	float grade, sum = 0;

	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "+                                                   +\n";
	cout << "+ BEM VINDO AO CALCULADOR DE APROVA��O E REPROVA��O +\n";
	cout << "+                                                   +\n";
	cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	system("pause");
	system("cls");

	cout << "Digite o tamanho da turma: ";
	cin >> turma;

	for (nota = 1; nota <= turma; nota++)
	{
		cout << "Nota do aluno" << nota << ": ";
		cin >> grade;
		if (grade >= 6)
		{
			aprovado++;
		}
		else
		{
			reprovado++;
		}

	}
	mediaa = (aprovado * 100) / turma;
	cout << "Porcentagem de alunos aprovados: " << mediaa << "%" << endl;

	mediar = (reprovado * 100) / turma;
	cout << "Porcentagem de alunos reprovados: " << mediar << "%";




	return 0;
}