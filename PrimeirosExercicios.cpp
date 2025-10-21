#include <iostream>
using namespace std;

int main() {
    //ler um numero inteiro e informa se é par ou ímpar;
    int numero;
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "o numero digitado é par." << endl;
    } else {
        cout << "o numero digitado é impar" << endl;
    }

    // ler notas ate que o usuario digite -1

    double entradaNotas, somaNotas = 0;
    double contagemNotas;

    while (true) {
        cout << "digite sua nota: ";
        cin >> entradaNotas;
        if (entradaNotas == -1) {
            break;
        }
        
        somaNotas+= entradaNotas;
        contagemNotas++;
    }

    if (contagemNotas > 0) {
        cout << "Média das notas: " << (somaNotas / contagemNotas) << endl;
    } else {
        cout << "Nenhuma nota foi digitada" << endl;
    }

    return 0;
}