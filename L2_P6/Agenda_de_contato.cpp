#include <iostream>
#include <string>
#include <locale.h>
#include <vector>
#include <algorithm>
using namespace std;


struct agenda
{
	string nome;
	int telefone, dd;
	string email;
};

vector <agenda> contato;

void cadastrar_pessoa() {
	setlocale(LC_ALL, "Portuguese");
	 agenda agenda;

	 cout << "Digite o nome: ";
	 cin.ignore();
	 getline(cin, agenda.nome);
	 transform(agenda.nome.begin(), agenda.nome.end(), agenda.nome.begin(), 
	 ::toupper);
	 cout << "\nDigite o DD: ";
	 cin >> agenda.dd;
	 
	 cout << "\nDigite o número: ";
	 cin >> agenda.telefone;

	 cout << "\nDigite o e-mail:";
	 cin >> agenda.email;

	 contato.push_back(agenda);
	 cout << "\n\nContato adicionado com sucesso" << endl;
}

void lista_contatos() {
	setlocale(LC_ALL, "Portuguese");
	agenda agenda;

		if (contato.empty())
		{
			cout << "Nenhum contato cadastrado.\n";
			return;
		}
	cout << "Contatos cadastradas: \n";
	for (const auto& agenda : contato)
	{
		cout << "Nome: " << agenda.nome << "\n";
		cout << "Telefone: (" << agenda.dd << ") " << agenda.telefone << "\n";
		cout << "E-mail: " << agenda.email << "\n";
	}

}

void pesquisar_conato() {
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
			pesquisar_conato();
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