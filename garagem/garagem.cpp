#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <windows.h>
#include <algorithm>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	int vagasc, vagasm, escolha, qtd;
	string veiculo;
	int vagascm = 0, vagasmm = 0, vm, vc;


	cout << ("\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	cout << ("\t+                                                         +\n");
	cout << ("\t+               SEJA BEM VINDO A GARAGEM                  +\n");
	cout << ("\t+                                                         +\n");
	cout << ("\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	system("pause");
	system("cls");

	cout << "Digite o numero de vagas para carro: \n";
	cin >> vagascm;
	cout << "Digite o numero de vagas para moto: \n";
	cin >> vagasmm;
	vagasc = vagascm;
	vagasm = vagasmm;
	do
	{
		system("pause");
		system("cls");

		cout << ("                               SELECIONE UMA DAS OPÇÕES DO MENU                          \n");
		cout << ("\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		cout << ("\t+                                                                                     +\n");
		cout << ("\t+     ENTRADA DE VEICULOS   SAIDA DE VEICULOS       VAGAS DISPONIVEIS   SAIR          +\n");
		cout << ("\t+           [1]                     [2]                   [3]           [4]           +\n");
		cout << ("\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		cout << "\n";
		cin >> escolha;

		if (escolha == 1)
		{
			do
			{
				cout << "Deseja inserir um carro ou moto?\n";
				cin >> veiculo;
				transform(veiculo.begin(), veiculo.end(), veiculo.begin(), ::toupper);
				if (veiculo != "CARRO" && veiculo != "MOTO")
				{
					cout << "Veiculo não disponivel\n";
					system("pause");
					system("cls");
				}
			} while (veiculo != "CARRO" && veiculo != "MOTO");
			if (veiculo == "CARRO")
			{
				if (vagascm != 0)
				{
					do
					{
						cout << "Vagas desocupadas:" << vagascm << endl;
						cout << "Deseja inserir quantos carros? \n";
						cin >> qtd;
						if (qtd > vagascm or qtd < 0)
						{
							cout << "Não pode adicionar mais carros do que quantidades de vagas, coloque menos\n";
						}
					} while (qtd > vagascm or qtd < 0);
					vagascm = vagascm - qtd;
					cout << "Vagas disponiveis para carro: " << vagascm << " de " << vagasc << endl;

				}
				else
				{
					cout << "Nenhuma vaga disponivel" << endl;
				}
			}

			if (veiculo == "MOTO")
			{
				if (vagasmm != 0)
				{
					do
					{
						cout << "Vagas desocupadas:" << vagasmm << endl;
						cout << "Deseja inserir quantas motos? \n";
						cin >> qtd;
						if (qtd > vagasmm or qtd < 0)
						{
							cout << "Não pode adicionar mais motos do que quantidades de vagas, coloque menos\n";
						}

					} while (qtd > vagasmm or qtd < 0);
					vagasmm = vagasmm - qtd;
					cout << "Vagas disponiveis para motos: " << vagasmm << " de " << vagasm << endl;
				}
				else
				{
					cout << "Nenhuma vaga disponivel" << endl;
				}
			}
		}
		else if (escolha == 2)
		{
			do
			{
				cout << "Deseja retirar um carro ou moto?\n";
				cin >> veiculo;
				transform(veiculo.begin(), veiculo.end(), veiculo.begin(), ::toupper);
				if (veiculo != "CARRO" and veiculo != "MOTO")
				{

					cout << "Veiculo não disponivel\n";
					system("pause");
					system("cls");
				}
			} while (veiculo != "CARRO" and veiculo != "MOTO");
			if (veiculo == "CARRO")
			{
				if (vagascm != vagasc)
				{
					do
					{
						vc = vagasc - vagascm;
						cout << "Vagas ocupadas:" << vc << endl;
						cout << "Deseja retirar quantos carros? \n";
						cin >> qtd;
						vc = vagasc - vagascm;
						if (qtd > vc or qtd < 0) {
							cout << "Não pode retirar mais carros do que tem\n";
						}
					} while (qtd > vc);
					vagascm = vagascm + qtd;
					cout << "Vagas disponiveis para carro: " << vagascm << " de " << vagasc << endl;
				}
				else
				{
					cout << "Nenhum carro para ser retirado" << endl;

				}

			}
			if (veiculo == "MOTO")
			{
				if (vagasmm != vagasm)
				{
					do
					{
						vm = vagasm - vagasmm;
						cout << "Vagas ocupadas:" << vm << endl;
						cout << "Deseja retirar quantas motos? \n";
						cin >> qtd;
						if (qtd > vm or qtd < 0) {
							cout << "Não pode retirar mais motos do que tem\n";
						}
					} while (qtd > vm);
					vagasmm = vagasmm + qtd;
					cout << "Vagas disponiveis para motos: " << vagasmm << " de " << vagasm << endl;

				}
				else
				{
					cout << "Nenhuma moto para ser retirada" << endl;
				}
			}
		}
		else if (escolha == 3)
		{
			cout << "Existem " << vagascm << " vagas disponiveis para carro" << endl;
			cout << "Existem " << vagasmm << " Vagas disponiveis para moto" << endl;
		}
		else if (escolha == 4)
		{
			cout << "Saindo...";
			system("pause");
			break;
		}
		else
		{
			cout << "Opção não disponivel, escolha outra.";
		}


	} while (escolha != 4);

	return 0;
}