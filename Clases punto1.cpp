#include <iostream>
using namespace std;

class CargadorEntero {
private:
    int valor;

public:
    CargadorEntero() {
        valor = 0;
    }

    void cargarEntero() {
        cout << "Ingrese un valor entero: ";
        cin >> valor;
    }

    void mostrarEnterosHasta() {
        if (valor <= 0) {
            cout << "El valor ingresado debe ser mayor que cero." << endl;
            return;
        }

        cout << "Valores enteros desde 1 hasta " << valor << ":" << endl;
        for (int i = 1; i <= valor; ++i) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    CargadorEntero cargador;
    cargador.cargarEntero();
    cargador.mostrarEnterosHasta();

    return 0;
}
