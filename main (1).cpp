#include <iostream>
int main() {
	int n, suma = 0;
	std::cout << "Ingresa un nC:mero entero positivo: ";
	std::cin >> n;

	if (n < 0) {
		std::cout << "Error: El nC:mero debe ser positivo." << std::endl;
		return 1;
	}

	while (n > 0) {
		suma += n % 10;
		n /= 10;
	}

	std::cout << "La suma de los dC-gitos es: " << suma << std::endl;
	return 0;
}
