#include <iostream>
using namespace std;

class ComparadorEnteros {
private:
    int num1;
    int num2;

    int encontrarMayor(int a, int b) {
        return (a > b) ? a : b;
    }

public:
    void cargarEnteros() {
        cout << "Ingrese el primer entero: ";
        cin >> num1;
        cout << "Ingrese el segundo entero: ";
        cin >> num2;
    }

    void mostrarMayor() {
        int mayor = encontrarMayor(num1, num2);
        cout << "El mayor de " << num1 << " y " << num2 << " es: " << mayor << endl;
    }
};

int main() {
    ComparadorEnteros comparador;
    comparador.cargarEnteros();
    comparador.mostrarMayor();

    return 0;
}

