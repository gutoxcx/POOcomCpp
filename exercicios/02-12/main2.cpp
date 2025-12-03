#include <iostream>
using namespace std;

/*
Leia 8 numeros inteiros para dentro de um vetor e determine:
    O maior valor e em qual posição ele está
    O menor valor e em qual posição ele está
*/

int main()
{
    int vetor[8];
    
    cout << "Digite 8 números inteiros:\n";
    for (int i = 0; i < 8; i++) {
        cin >> vetor[i];
    }

    int maior = vetor[0];
    int posicaoMaior = 0;
    int menor = vetor[0];
    int posicaoMenor = 0;

    for (int i = 1; i < 8; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posMaior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            posMenor = i;
        }
    }

    cout << "\nMaior valor: " << maior << " na posição " << posMaior << endl;
    cout << "Menor valor: " << menor << " na posição " << posMenor << endl;

    return 0;
}
