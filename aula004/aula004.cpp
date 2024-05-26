//trabalhando com variaveis em c++

#include <iostream>

using namespace std;

int main(){

    int vidas = 50;
    char letra = 'b';
    char letras[20]= {"oioioioiio oi"}; // passa a ser um vetor que aceita até 20 letras
    double decimal = 4.995555;
    float decimal2 = 4.995555; // igual double mas com menor precisão
    bool vivo = false;
    string texto = "Helder";

    /*cout << vidas << "\n";
    cout << letra << "\n";
    cout << letras << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << texto << "\n";*/

    //inserindo dados pelo teclado

    cout << "Digite o numero de vidas: ";
    cin >> vidas; //leu o valor do teclado e armazenou o valor na variavel vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Digite uma quantidade decimal: ";
    cin >> decimal;
    cout << "Digite seu nome: ";
    cin >> texto;

    return 0;
}
