#include <iostream>
using namespace std;

int main() {
    double peso;
    cout << "Ingrese el peso del animal (kg): ";
    cin >> peso;

    if(peso < 5)
        cout << "Animal pequeño" << endl;
    else if(peso <= 20)
        cout << "Animal mediano" << endl;
    else
        cout << "Animal grande" << endl;

    return 0;
}


