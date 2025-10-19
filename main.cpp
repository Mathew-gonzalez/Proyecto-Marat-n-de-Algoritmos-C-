#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
vector<int> a(n);
    cout << "Ingrese los elementos:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
 // Invertir el arreglo
    for (int i = 0; i < n / 2; i++)
        swap(a[i], a[n - i - 1]);
// Mostrar el arreglo invertido
    cout << "Arreglo invertido: ";
    for (int x : a)
        cout << x << " ";
   cout << endl;
  return 0;
}
