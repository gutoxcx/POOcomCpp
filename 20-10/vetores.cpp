#include <iostream>
#include <windows.h>

using namespace std;

int main () {
    //recebe 8 notas de aluno e calcula a media usando vetores e laço de repetição
    //dizer e foi aprovado ou nao
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

    int notas[8];
    int nota = 0;
    int somatorioDeNotas;

    cout << "DIGITE AS 8 NOTAS DO ALUNO: " << endl;

    for (int i = 0; i < 8; i++) {
        cin >> nota;
        notas[i] = nota;
        somatorioDeNotas += notas[i];
    } double mediaNotas = somatorioDeNotas / 8.0;

    if (mediaNotas >= 7) {
        cout << "O aluno está aprovado" << endl;
    } else {
        cout << "O aluno está reprovado" << endl;
    }

    return 0;
}