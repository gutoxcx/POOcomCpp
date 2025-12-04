#include <iostream>
#include <string>
using namespace std;

class Pessoa {
    string nome;

    public:
        void setNome(const string n) {
            nome = n;
        }

        string getNome() {
            return nome;
        }
};

int main() {
    Pessoa p;
    p.setNome("Ariana");
    cout << "Nome é: " << p.getNome() << endl;
    
    return 0;
}