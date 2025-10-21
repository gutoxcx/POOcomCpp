#include <iostream>
#include <string>

using namespace std;

class Animal {
    public:
    string nome;
    string especie;
    string dieta;
    double pesoEmKg;
};

int main(){
    Animal Spike;
    Spike.nome = "Spike";
    Spike.especie = "Cachorro";
    Spike.dieta = "Onívoro";
    Spike.pesoEmKg = 5.67;

    Animal MangaRosa;
    MangaRosa.nome = "Manga Rosa";
    MangaRosa.especie = "Cavalo";
    MangaRosa.dieta = "Herbívoro";
    MangaRosa.pesoEmKg = 667.0;

    Animal NovoAnimal;
    cout << "Digite o nome do animal: " << endl;
    getline(cin, NovoAnimal.nome);
    cout << "Digite a especie do animal: " << endl;
    getline(cin, NovoAnimal.especie);
    cout << "Qual a dieta do animal? : " << endl;
    getline(cin, NovoAnimal.dieta);
    cout << "Por último, informe o peso do animal: ";
    cin >> NovoAnimal.pesoEmKg;

    cout << "=== INFORMAÇÕES SOBRE O ANIMAL INFORMADO: ===" << endl;
    cout << "Nome: " << NovoAnimal.nome << endl;
    cout << "Espécie: " << NovoAnimal.especie << endl;
    cout << "Dieta: " << NovoAnimal.dieta << endl;
    cout << "Peso(kg): " << NovoAnimal.pesoEmKg << endl;

    cout << "O cavalo " << MangaRosa.nome << " pesa: "<< MangaRosa.pesoEmKg << " kg" << endl;
}