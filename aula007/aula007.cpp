#include <iostream>
using namespace std;


// incremento e decremento de variaveis

int main(){

    int n1, n2;

    n1 = 0;
    n2 = 10;

    cout << n1 << "\n\n";
    //n1 = n1 + 1; ou
    //n1+=1; ou vai incrementar ou decrementar mais de uma unidade se necessario; pode usar todos os operadorees matematicos 
    n1--; // para adicionar, se quiser decrementar em 1 é só usar --; vai incrementar ou decrementar apnas uma unidade
    //n1++ se for encremento dentro do comando ex cout << n1++ ,,,, primeiro ele usa o valor da variavel e depois faz o incremento. o inverso se for ++n1 [isso inline]
    cout << n1 << "\n\n";

}