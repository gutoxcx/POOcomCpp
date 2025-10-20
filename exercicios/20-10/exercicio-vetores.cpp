#include <iostream>
using namespace std;
int main() {
    int numeros[5];
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    } for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    return 0;
}

int exercicio2 () {
    
    int numeros[10];

    cout << "Digite numeros, e serão imprimidos apenas os pares: " << endl;
    
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
        if (numeros[i] % 2 == 0) {
            cout << numeros[i] << " ";
        }
    } return 0;
}

int exercicio3() {

    int notas[4];
    int nota = 0;
    int somatorioDeNotas;

    cout << "DIGITE AS 4 NOTAS DO ALUNO: " << endl;

    for (int i = 0; i < 4; i++) {
        cin >> nota;
        notas[i] = nota;
        somatorioDeNotas += notas[i];
    } double mediaNotas = somatorioDeNotas / 4.0;

    if (mediaNotas >= 7) {
        cout << "O aluno está aprovado" << endl;
    } else {
        cout << "O aluno está reprovado" << endl;
    }
}

int exercicio4() {
    int numeros[6];

    for (int i = 0; i < 6; i++){
        cin >> numeros[i];
    }

    int maior = numeros[0];
    int menor = numeros[0];

    for (int i = 1; i < 6; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        } if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    cout << "Maior numero: " << maior << endl;
    cout << "Menor numero: " << menor << endl;

}