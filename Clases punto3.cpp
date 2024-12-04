#include <iostream>
using namespace std;

class CNumeros {
private:
    int n1, n2, n3;

public:
    CNumeros(int num1, int num2, int num3) {
        n1 = num1;
        n2 = num2;
        n3 = num3;
    }
    int encontrarMaximo() {
        int maximo = n1;
        if (n2 > maximo) {
            maximo = n2; 
        }
        if (n3 > maximo) {
            maximo = n3; 
        }
        return maximo;
    }
    int encontrarMinimo() {
        int minimo = n1;
        if (n2 < minimo) {
            minimo = n2;
        }
        if (n3 < minimo) {
            minimo = n3;
        }
        return minimo;
    }
};

int main() {
    int numero1, numero2, numero3;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;
    CNumeros numeros(numero1, numero2, numero3);
    cout << "El maximo de los numeros es: " << numeros.encontrarMaximo() << endl;
    cout << "El minimo de los numeros es: " << numeros.encontrarMinimo() << endl;

    return 0;
}

