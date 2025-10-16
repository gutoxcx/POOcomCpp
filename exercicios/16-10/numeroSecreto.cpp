#include <iostream>
#include <cstdlib>
#include  <ctime>
using namespace std;

int main() {
	srand(time(0));
	int numeroSecreto = rand() % 10 + 1;
	int palpite;
	 
	cout << "adivinhe o numero secreto de 1 a 10: " << endl;
	 
	while (true) {
		cin >> palpite;
		 
		if (palpite == numeroSecreto) {
			cout << "parabéns, você acertou!" <<  endl;
			break;
		} else {
			cout << "tente novamente." << endl;
		}
	 }
}
