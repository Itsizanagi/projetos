#include <iostream>

using namespace std;

typedef struct
{
    string name;
    int age;
}person;


int main() { 
    person types;

    cout << "Enter your name: " << "\n";
    cin >> types.name;
    cout << "Enter your age: " << "\n";
    cin >> types.age;

    cout << "Name: " << types.name << endl;
    cout << "Age: " << types.age << endl;

}