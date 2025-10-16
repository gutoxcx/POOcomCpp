#include <iostream>
using namespace std;

int main() {
	/* - calcule a soma de todos os números ímpares entre 1 e 100 */
	int soma = 0;
	for (int num = 1; num <= 100; num++) {
		if (num % 2 != 0) {
			soma += num;
		}
	}
}
