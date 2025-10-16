#include <iostream>
using namespace std;

int main() {
    /* mostre todos os numeros pares de 1 a 50 usando o laço for.  */
	cout << "Números pares: " << endl;
	for (int numPar = 0; numPar <= 51; numPar++) {
	    if (numPar % 2 == 0) {
            cout << numPar << endl;
	    }
	}
	
    return 0;
}