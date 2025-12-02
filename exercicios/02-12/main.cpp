#include <iostream>
using namespace std;

/*
Crie um programa que:
	Possua um vetor de 5 numeros inteiros
	Peça ao usuário para digitar os valores
	Exciba todos os valores digitados
*/

int main()
{
    int vetInt[5];
    int entradaNum;
    
    cout << "Digite 5 numeros: ";
    for (int i = 0; i < 5; i++){
		cin >> entradaNum;
		vetInt[i] = entradaNum;
	}
	
	cout << "Os numeros digitados foram: " << endl;
	for (int i = 0; i < 5; i++){
		cout << vetInt[i] << endl;
	}
	
	/*
	Usando o vetor do exercicio anterior, calcule e exiba:
	A soma total dos nmeros do vetor
	A média aritmética dos valores 
	 */
	 
	int soma = 0;
	for (int i = 0; i < 5; i++) {
        soma += vetInt[i];
    }

    float media = soma / 5.0; 

    cout << "\nA soma dos numeros é: " << soma << endl;
    cout << "A média dos numeros é: " << media << endl;

    return 0;
}
