#include <iostream>
#include <string> 

using namespace std;

int main() {

	char decisao = 'S';
	int escolha;
	int pc;
	char decisao2 = 'S';



	cout << "Bem vindo ao Jokenpo online" << endl;
	cout << "Pronto para jogar?" << endl;
	cin >> decisao;

	if (decisao == 'N') {

		cout << "Volte quando estiver pronto";
	}
	else
	{
		while (decisao2 == 'S')
		{

			cout << "Muito bem, escolha uma opçao:" << endl;
			cout << "Pedra[1] \nPapel[2] \nTesoura[3] \n";
			cin >> escolha;
			pc = ("%d ", rand() % 4);


			if (escolha == 1 and pc == 1)
			{
				cout << "Você: Pedra" << endl;
				cout << "Computador: Pedra" << endl;
				cout << "Pedra VS Pedra" << endl;
				cout << "---------------------------------------------------" << endl;
				system("pause");
				cout << "++++++++++++++++" << endl;
				cout << "+              +" << endl;
				cout << "+              +" << endl;
				cout << "+    EMPATE    +" << endl;
				cout << "+              +" << endl;
				cout << "++++++++++++++++" << endl;
				system("pause");
				system("cls");
				cout << "Deseja jogar novamente? ";
				cin >> decisao;

			}
			else if (escolha == 1 and pc == 2) {

				cout << "Você: Pedra" << endl;
				cout << "Computador: Papel" << endl;

				cout << "Pedra VS Papel" << endl;
				cout << "---------------------------------------------------" << endl;
				system("pause");
				cout << "++++++++++++++++" << endl;
				cout << "+              +" << endl;
				cout << "+              +" << endl;
				cout << "+    PERDEU    +" << endl;
				cout << "+              +" << endl;
				cout << "++++++++++++++++" << endl;
				system("pause");
				system("cls");
				cout << "Deseja jogar novamente? ";
				cin >> decisao2;
			}
			else if (escolha == 1 and pc == 3) {
				cout << "Você: Pedra" << endl;
				cout << "Computador: Tesoura" << endl;
				cout << "Pedra VS Tesoura" << endl;
				cout << "---------------------------------------------------" << endl;
				system("pause");
				cout << "++++++++++++++++" << endl;
				cout << "+              +" << endl;
				cout << "+              +" << endl;
				cout << "+    GANHOU    +" << endl;
				cout << "+              +" << endl;
				cout << "++++++++++++++++" << endl;
				system("pause");
				system("cls");
				cout << "Deseja jogar novamente? ";
				cin >> decisao2;
			}
			else if (escolha == 2 and pc == 1) {
				cout << "Você: Papel" << endl;
				cout << "Computador: Pedra" << endl;
				cout << "Papel VS Pedra" << endl;
				cout << "---------------------------------------------------" << endl;
				system("pause");
				cout << "++++++++++++++++" << endl;
				cout << "+              +" << endl;
				cout << "+              +" << endl;
				cout << "+    GANHOU    +" << endl;
				cout << "+              +" << endl;
				cout << "++++++++++++++++" << endl;
				system("pause");
				system("cls");
				cout << "Deseja jogar novamente? ";
				cin >> decisao2;
			}
			else if (escolha == 2 and pc == 2) {
				cout << "Você: Papel" << endl;
				cout << "Computador: Papel" << endl;

				cout << "Papel VS Papel" << endl;
				cout << "---------------------------------------------------" << endl;
				system("pause");
				cout << "++++++++++++++++" << endl;
				cout << "+              +" << endl;
				cout << "+              +" << endl;
				cout << "+    EMPATE    +" << endl;
				cout << "+              +" << endl;
				cout << "++++++++++++++++" << endl;
				system("pause");
				system("cls");
				cout << "Deseja jogar novamente? ";
				cin >> decisao2;
			}
			else if (escolha == 2 and pc == 3) {
				cout << "Você: Papel" << endl;
				cout << "Computador: Tesoura" << endl;
				cout << "Papel VS Tesoura" << endl;
				cout << "---------------------------------------------------" << endl;
				system("pause");
				cout << "++++++++++++++++" << endl;
				cout << "+              +" << endl;
				cout << "+              +" << endl;
				cout << "+    PERDEU    +" << endl;
				cout << "+              +" << endl;
				cout << "++++++++++++++++" << endl;
				system("pause");
				system("cls");
				cout << "Deseja jogar novamente? ";
				cin >> decisao2;
			}
			else if (escolha == 3 and pc == 1) {
				cout << ("Você: Tesoura\n");
				cout << ("          +++            +++\n");
				cout << ("           +++          +++\n");
				cout << ("            +++        +++\n");
				cout << ("             +++      +++\n");
				cout << ("              +++    +++\n");
				cout << ("               +++  +++\n");
				cout << ("                ++++++\n");
				cout << ("                 ++++ \n");
				cout << ("                ++++++\n");
				cout << ("                +++ +++\n");
				cout << ("               +++   +++ \n");
				cout << ("              +++     +++\n");
				cout << ("          ++++++      ++++++\n");
				cout << ("         ++++++         ++++++\n");
				cout << ("        +      +       +      *\n");
				cout << ("      ++        ++   ++        ++\n");
				cout << ("      +++      +++   +++      +++\n");
				cout << ("       +++    +++     +++    +++\n");
				cout << ("          ++++           ++++\n");
				cout << "Computador: Pedra" << endl;
				cout << "Tesoura VS Pedra" << endl;
				cout << "---------------------------------------------------" << endl;
				system("pause");
				cout << "++++++++++++++++" << endl;
				cout << "+              +" << endl;
				cout << "+              +" << endl;
				cout << "+    PERDEU    +" << endl;
				cout << "+              +" << endl;
				cout << "++++++++++++++++" << endl;
				system("pause");
				system("cls");
				cout << "Deseja jogar novamente? ";
				cin >> decisao2;
			}
			else if (escolha == 3 and pc == 2) {
				cout << ("Você: Tesoura\n");
				cout << ("          +++            +++\n");
				cout << ("           +++          +++\n");
				cout << ("            +++        +++\n");
				cout << ("             +++      +++\n");
				cout << ("              +++    +++\n");
				cout << ("               +++  +++\n");
				cout << ("                ++++++\n");
				cout << ("                 ++++ \n");
				cout << ("                ++++++\n");
				cout << ("                +++ +++\n");
				cout << ("               +++   +++ \n");
				cout << ("              +++     +++\n");
				cout << ("          ++++++      ++++++\n");
				cout << ("         ++++++         ++++++\n");
				cout << ("        +      +       +      *\n");
				cout << ("      ++        ++   ++        ++\n");
				cout << ("      +++      +++   +++      +++\n");
				cout << ("       +++    +++     +++    +++\n");
				cout << ("          ++++           ++++\n");
				cout << "Computador: Papel" << endl;
				cout << "Tesoura VS Papel" << endl;
				cout << "---------------------------------------------------" << endl;
				system("pause");
				cout << "++++++++++++++++" << endl;
				cout << "+              +" << endl;
				cout << "+              +" << endl;
				cout << "+    GANHOU    +" << endl;
				cout << "+              +" << endl;
				cout << "++++++++++++++++" << endl;
				system("pause");
				system("cls");
				cout << "Deseja jogar novamente? ";
				cin >> decisao2;
			}
			else if (escolha == 3 and pc == 3) {
				cout << ("Você: Tesoura\n");
				cout << ("          +++            +++\n");
				cout << ("           +++          +++\n");
				cout << ("            +++        +++\n");
				cout << ("             +++      +++\n");
				cout << ("              +++    +++\n");
				cout << ("               +++  +++\n");
				cout << ("                ++++++\n");
				cout << ("                 ++++ \n");
				cout << ("                ++++++\n");
				cout << ("                +++ +++\n");
				cout << ("               +++   +++ \n");
				cout << ("              +++     +++\n");
				cout << ("          ++++++      ++++++\n");
				cout << ("         ++++++         ++++++\n");
				cout << ("        +      +       +      *\n");
				cout << ("      ++        ++   ++        ++\n");
				cout << ("      +++      +++   +++      +++\n");
				cout << ("       +++    +++     +++    +++\n");
				cout << ("          ++++           ++++\n");
				cout << "Computador: Tesoura" << endl;
				cout << "Tesoura VS Tesoura" << endl;
				cout << "---------------------------------------------------" << endl;
				system("pause");
				cout << "++++++++++++++++" << endl;
				cout << "+              +" << endl;
				cout << "+              +" << endl;
				cout << "+    EMPATE    +" << endl;
				cout << "+              +" << endl;
				cout << "++++++++++++++++" << endl;
				system("pause");
				system("cls");
				cout << "Deseja jogar novamente? ";
				cin >> decisao2;
			}
		}
	}
	return 0;
}