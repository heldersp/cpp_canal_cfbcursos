// variaveis globais e locais, operadores matematicos

#include <iostream>

using namespace std;

int n1, n2; //variaveis globais

int main(){

    // operadores matematicos: + - / * % ()

    int n3,n4; //variaveis locais
    int res;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = (n1+n2)%n3;

    cout << "O valor da operação é: " << res << "\n\n";

    return 0;
}