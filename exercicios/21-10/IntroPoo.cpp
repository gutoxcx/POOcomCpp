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

    cout << "O cavalo " << MangaRosa.nome << " pesa: "<< MangaRosa.pesoEmKg << " kg" << endl;
}