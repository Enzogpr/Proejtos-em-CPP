#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct carta
{
    std::string nome;
    int idade;
    std::vector<std::string> desejos;
};

void lista_de_desejos(carta& carta, const string& desejo) {
    carta.desejos.push_back(desejo);
}

int main() {
    carta carta;
    char maisum;
    string desejo;
    cout << "Qual o seu nome? ";
    getline(cin, carta.nome);

    cout << "\nQual sua idade? ";
    cin >> carta.idade;

    do
    {
        cout << "\nQual o seu desejo? ";
        cin.ignore();
        getline(cin, desejo);
        lista_de_desejos(carta, desejo);

        cout << "\nDeseja adicionar mais desejos? (s/n): ";
        cin >> maisum;
    } while (maisum == 's' || maisum == 'S');

    cout << "---- Carta para o Papai Noel ----\n";
    cout << "Nome: " << carta.nome << "\n";
    cout << "Idade: " << carta.idade << " anos\n";

    cout << "Lista de Desejos:\n";
    for (const auto& desejo : carta.desejos) {
        std::cout << "- " << desejo << "\n";
    }
    std::cout << "-----------------------------------\n";

    return 0;
}
