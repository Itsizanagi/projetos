#include <iostream>
#include <queue>
#define LINE cout << "\n\n";

using namespace std;

int main() {

    queue<string> fila;

    fila.push("Elemento 1");
    fila.push("Elemento 2");
    fila.push("Elemento 3");
    LINE;

    cout << "Tamanho da queue: " << fila.size() << "\n";

    cout << "Primeiro elemento " << fila.front() << "\n";

    cout << "Ultimo elemento " << fila.back() << "\n";

    cout << "Preenchida: "<<fila.empty() << "\n";

    cout << "Elementos da pilha: \n";
    while (true){
        cout << fila.front() << "\n";
        fila.pop();
    }
    return 0;
}
