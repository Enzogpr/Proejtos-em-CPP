#include <iostream>
#include <string>
#include <locale.h>
#include <vector>
#include <algorithm>

using namespace std;


struct estudantes
{
	string nome;
	int idade, matricula;
};

vector <estudantes> estudante;

void adicionarEstudante() {
	setlocale(LC_ALL, "Portuguese");
	estudantes est;

	cout << "Digite o nome: ";
	cin.ignore();
	getline(cin, est.nome);
	transform(est.nome.begin(), est.nome.end(), est.nome.begin(),::toupper);
	cout << "\nDigite a idade: ";
	cin >> est.idade;

	cout << "\nDigite a matricula: ";
	cin >> est.matricula;

	estudante.push_back(est);

	cout << "\n\nAluno adicionado com sucesso" << endl;
}

void lista_estudantes() {
	setlocale(LC_ALL, "Portuguese");
	estudantes est;

	if (estudante.empty())
	{
		cout << "Nenhum contato cadastrado.\n";
		return;
	}
	cout << "Contatos cadastrados: \n";
	for (const auto& est : estudante)
	{
		cout << "Nome: " << est.nome << "\n";
		cout << "Idade: " << est.idade << "\n";
		cout << "Matricula: " << est.matricula << "\n";
		cout << "-------------------------------------\n";
	}

}

void buscarEstudante() {
	setlocale(LC_ALL, "Portuguese");
	string nome;
	estudantes est;

	if (estudante.empty())
	{
		cout << "Nenhum estudante matriculado.\n";
		return;
	}

	cout << "Digite o nome do estudante: \n";
	cin.ignore();
	getline(cin, nome);
	transform(nome.begin(), nome.end(), nome.begin(), ::toupper);

	for (const auto& est : estudante)
	{
		if (est.nome == nome)
		{
			system("cls");
			cout << "Aluno encontrado: " << endl;
			cout << "Nome: " << est.nome << "\n";

			cout << "Idade: " << est.idade << "\n" ;

			cout << "Matricula: " << est.matricula << "\n";
			return;
		}
	}

	cout << "Aluno inexistente";
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int escolha;

	do
	{

		system("cls");
		cout << "--------------Agenda de contatos--------------" << endl;
		cout << "[1] Matricular    [2]Listar        [3] Pesquisar     [4] Sair" << endl;
		cin >> escolha;

		switch (escolha) {

		case 1:
			system("cls");
			adicionarEstudante();
			system("pause");
			break;

		case 2:
			system("cls");
			lista_estudantes();
			system("pause");
			break;
		case 3:
			system("cls");
			buscarEstudante();
			system("pause");
			break;

		case 4:
			break;

		default:
			system("cls");
			cout << "Escolha invalida";
		}
	} while (escolha != 4);

	return 0;
}