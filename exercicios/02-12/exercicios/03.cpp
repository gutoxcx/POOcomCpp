#include <iostream>
using namespace std;

/*
crie um vetor com 10 números digitados pelo usuário.
peça um número x e informe se o x está no vetor e
em qual posição ele aparece pela primeira vez.
*/

int main()
{
    int vetor[10];
    int x;

    for (int i = 0; i < 10; i++) {
        cout << "digite o valor " << i << ": ";
        cin >> vetor[i];
    }

    cout << "digite x: ";
    cin >> x;

    int posicaoNum = -1; 
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == x) {
            posicaoNum = i;
            break;
        }
    }

    if (posicaoNum == -1) {
        cout << "x nao esta no vetor";
    } else {
        cout << "x encontrado pela primeira vez na posicao " << posicaoNum;
    }

    return 0;
}
