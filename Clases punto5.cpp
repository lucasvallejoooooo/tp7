#include <iostream>
#include <vector>

using namespace std;

class CNumeros {
public:
    CNumeros() {}

    void obtenerNumerosPerfectosHasta(int N) {
        for (int i = 2; i <= N; ++i) {
            if (esNumeroPerfecto(i)) {
                numerosPerfectos.push_back(i);
            }
        }
    }

    bool esNumeroPerfecto(int num) {
        int sumaDivisores = 1; 

        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                sumaDivisores += i;
                if (i != num / i) {
                    sumaDivisores += num / i;
                }
            }
        }

        return sumaDivisores == num;
    }
    void imprimirNumerosPerfectos(int N) {
        cout << "Los números perfectos hasta " << N << " son:" << endl;
        vector<int>::iterator it;
        for (it = numerosPerfectos.begin(); it != numerosPerfectos.end(); ++it) {
            cout << *it << endl;
        }
    }

private:
    vector<int> numerosPerfectos;
};

int main() {
    int N;
    cout << "Ingrese un numero: ";
    cin >> N;

    CNumeros numeros;
    numeros.obtenerNumerosPerfectosHasta(N);
    numeros.imprimirNumerosPerfectos(N);

    return 0;
}

