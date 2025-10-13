#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuantos juegos desea ingresar? ";
    cin >> n;

    string juego, masLargo = "";
    for(int i = 0; i < n; i++){
        cout << "Nombre del juego " << i+1 << ": ";
        cin >> juego;
        if(juego.length() > masLargo.length()) masLargo = juego;
    }

    cout << "Juego con nombre mas largo: " << masLargo << endl;
    return 0;
}

