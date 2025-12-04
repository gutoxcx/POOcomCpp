#include <iostream>
#include <string>
using namespace std;

/*
crie um vetor de 6 nomes (strings). o programa deve:
ler os nomes e perguntar um nome a ser buscado, informar
se ele existe no vetor
*/

int main()
{
    string nomes[6];
    string busca;
    bool encontrado = false;

    for (int i = 0; i < 6; i++) {
        cout << "digite o nome " << i << ": ";
        cin >> nomes[i];
    }

    cout << "digite o nome para buscar: ";
    cin >> busca;

    for (int i = 0; i < 6; i++) {
        if (nomes[i] == busca) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "o nome existe no vetor";
    } else {
        cout << "o nome nao existe no vetor";
    }

    return 0;
}
