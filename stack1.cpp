#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack <string> pilha;

    pilha.push("numero 1");
    pilha.push("numero 2");
    pilha.push("numero 3");
    pilha.push("numero 4");

    cout << "tamanho da pilha: " << pilha.size() << "\n";

    cout << "Elemento do topo: " << pilha.top() << "\n";

    cout << "Elementos da pilha: \n";
    while (true){
        cout << pilha.top() << "\n";
        pilha.pop();
    }

    

    return 0;
}