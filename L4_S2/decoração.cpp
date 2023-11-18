#include <iostream>
#include <string>
#include <vector>
#include <locale.h>
using namespace std;

struct Item {
    string descricao;
    string local;
};


void adicionar_Decoracao(vector<Item>& Decoracao, const string& descricao, const string& local) {
    Item novoItem;
    novoItem.descricao = descricao;
    novoItem.local = local;
    Decoracao.push_back(novoItem);
}

void mostrarListaDecoracao(const vector<Item>& Decoracao) {
    cout << "---- Lista de Decora��o de Natal ----\n";
    for (const auto& item : Decoracao) {
        cout << "Descri��o: " << item.descricao << "\n";
        cout << "Local: " << item.local << "\n";
        cout << "-----------------------------------\n";
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    vector<Item> listaDecoracao;
    char adicionar;
    string descricao, local;

    do {
        cout << "Digite a descri��o do item: ";
        getline(cin, descricao);

        cout << "Digite o local onde ser� colocado: ";
        getline(cin, local);

       
        adicionar_Decoracao(listaDecoracao, descricao, local);

        cout << "\nDeseja adicionar mais itens de decora��o? (s/n): ";
        cin >> adicionar;
        cin.ignore(); // Limpar o buffer de entrada
    } while (adicionar == 's' || adicionar == 'S');
    mostrarListaDecoracao(listaDecoracao);

    return 0;
}
