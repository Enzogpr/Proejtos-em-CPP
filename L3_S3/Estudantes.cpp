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

void cadastrar_pessoa() {
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

void lista_contatos() {
	setlocale(LC_ALL, "Portuguese");
	agenda agenda;

	if (contato.empty())
	{
		cout << "Nenhum contato cadastrado.\n";
		return;
	}
	cout << "Contatos cadastrados: \n";
	for (const auto& agenda : contato)
	{
		cout << "Nome: " << est.nome << "\n";
		cout << "Telefone: (" << est.dd << ") " << est.telefone << "\n";
		cout << "E-mail: " << est.email << "\n";
	}

}

void pesquisar_contato() {
	setlocale(LC_ALL, "Portuguese");
	string contatop;
	agenda ag;

	if (contato.empty())
	{
		cout << "Nenhum contato cadastrado.\n";
		return;
	}

	cout << "Digite o nome do contato: \n";
	cin.ignore();
	getline(cin, contatop);
	transform(contatop.begin(), contatop.end(), contatop.begin(), ::toupper);

	for (const auto& ag : contato)
	{
		if (ag.nome == contatop)
		{
			cout << "Nome: " << ag.nome << "\n";
			cout << "Telefone: (" << ag.dd << ") " << ag.telefone << "\n";
			cout << "E-mail: " << ag.email << "\n";
			return;
		}
	}

	cout << "Contato inexistente";
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int escolha;

	do
	{

		system("cls");
		cout << "--------------Agenda de contatos--------------" << endl;
		cout << "[1] Cadastrar     [2]Listar        [3] Pesquisar     [4] Sair" << endl;
		cin >> escolha;

		switch (escolha) {

		case 1:
			system("cls");
			cadastrar_pessoa();
			system("pause");
			break;

		case 2:
			system("cls");
			lista_contatos();
			system("pause");
			break;
		case 3:
			system("cls");
			pesquisar_contato();
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