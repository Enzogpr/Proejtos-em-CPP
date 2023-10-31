#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <locale.h>
#include <stdio.h>

using namespace std;

struct pessoa
{
	string nome;
	string nome2;
	int idade;
	float peso;
	float altura;
	float IMC;
	string sexo;
	string resultado;
};

vector <pessoa> pessoas;

void cadastrarpessoa() {
	pessoa pessoa;
	setlocale(LC_NUMERIC, "pt_BR");
	cout << "Nome da pessoa: " << endl;
	cin.ignore();
	getline(cin, pessoa.nome);
	transform(pessoa.nome.begin(), pessoa.nome.end(), pessoa.nome.begin(), ::toupper);
	cout << "Sexo biologico [M] [F]: " << endl;
	transform(pessoa.sexo.begin(), pessoa.sexo.end(), pessoa.sexo.begin(), ::toupper);
	cin >> pessoa.sexo;
	cout << "Idade: " << endl;
	cin >> pessoa.idade;
	cout << "Peso da pessoa: " << endl;
	cin >> pessoa.peso;
	cout << "Altura: " << endl;
	cin >> pessoa.altura;
	pessoa.IMC = pessoa.peso / (pessoa.altura * pessoa.altura);
	cout << "IMC:" << pessoa.IMC << "\n";
	if (pessoa.IMC < 18.5)
	{
		pessoa.resultado = "Baixo peso";
		cout << "Classificação: " << pessoa.resultado << endl;
	}
	else if (pessoa.IMC > 18.5 && pessoa.IMC <= 24.9)
	{
		pessoa.resultado = "Peso ideal";
		cout << "Classificação: " << pessoa.resultado << endl;
	}
	else if (pessoa.IMC > 24.9 && pessoa.IMC <= 29.99)
	{
		pessoa.resultado = "Sobre peso";
		cout << "Classificação: " << pessoa.resultado << endl;
	}
	else if (pessoa.IMC > 29.99 && pessoa.IMC <= 34.9)
	{
		pessoa.resultado = "Obesidade 1";
		cout << "Classificação: " << pessoa.resultado << endl;
	}
	else if (pessoa.IMC > 34.99 && pessoa.IMC <= 39.9)
	{
		pessoa.resultado = "Obesidade 2";
		cout << "Classificação: " << pessoa.resultado << endl;
	}
	else if (pessoa.IMC > 40)
	{
		pessoa.resultado = "Obedisade 3";
		cout << "Classificação: " << pessoa.resultado << endl;
	}

	pessoas.push_back(pessoa);
	cout << "Pessoa adicionada com sucesso!\n";

}

void exibirpessoas() {
	if (pessoas.empty())
	{
		cout << "Ninguem cadastrado.\n";
		return;
	}
	cout << "lista de pessoas cadastradas: \n";
	for (const auto& pessoa : pessoas)
	{
		cout << "Nome: " << pessoa.nome << "\n";
		cout << "Idade: " << pessoa.idade << "\n";
		cout << "Peso: " << pessoa.peso << "\n";
		cout << "Altura: " << pessoa.altura << "\n";
		cout << "IMC: " << pessoa.IMC << "\n";
		cout << "Classificação: " << pessoa.resultado << "\n";
		cout << "\n-----------------------------------\n";
	}
}

void pesquisarpessoas() {
	string pessoa2;
	if (pessoas.empty())
	{
		cout << "Ninguem cadastrado.\n";
		return;
	}
	cout << "Digite o nome da pessoa: \n";
	cin >> pessoa2;
	transform(pessoa2.begin(), pessoa2.end(), pessoa2.begin(), ::toupper);
	for (const auto& pessoa : pessoas)
	{
		if (pessoa.nome == pessoa2)
		{


			cout << "Nome: " << pessoa.nome << "\n";
			cout << "Idade: " << pessoa.idade << "\n";
			cout << "Peso: " << pessoa.peso << "\n";
			cout << "Altura: " << pessoa.altura << "\n";
			cout << "IMC: " << pessoa.IMC << "\n";
			cout << "Classificação: " << pessoa.resultado << "\n";
			cout << "\n-----------------------------------\n";
		}
	}
}

int main() {
	setlocale(LC_ALL, "portuguese");
	char confirmar;
	int escolha;
	char confirmar2;
	cout << ("\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	cout << ("\t+                                                         +\n");
	cout << ("\t+          SEJA BEM VINDO AO CÁLCULO DE IMC               +\n");
	cout << ("\t+                                                         +\n");
	cout << ("\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	do
	{
		system("pause");
		system("cls");
		cout << ("                                     SELECIONE UMA DAS OPÇÕES DO MENU                          \n");
		cout << ("\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		cout << ("\t+                                                                                     +\n");
		cout << ("\t+     CADASTRAR PESSOA   LISTAR PESSOAS CADASTRADA   PESQUISAR POR NOME   SAIR        +\n");
		cout << ("\t+           [1]                     [2]                      [3]          [4]         +\n");
		cout << ("\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		cout << "\n";
		cin >> escolha;

		if (escolha == 1)
		{

			system("cls");
			cadastrarpessoa();

		}
		else if (escolha == 2)
		{
			system("cls");
			exibirpessoas();
		}
		else if (escolha == 3)
		{
			system("cls");
			pesquisarpessoas();

		}
		else {
			system("cls");
			cout << "Saindo...\n";
			system("pause");
			break;
		}

	} while (escolha != 4);








	return 0;

};

