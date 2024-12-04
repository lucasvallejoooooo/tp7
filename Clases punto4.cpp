#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class CEmpleados {
private:
    string nombre;
    double salario;
    int horasPorDia;

public:
    CEmpleados(string _nombre, double _salarioInicial, int _horasPorDia) {
        nombre = _nombre;
        salario = _salarioInicial;
        horasPorDia = _horasPorDia;
    }

    void aumentarSalario() {
        if (horasPorDia == 8) {
            salario += 250000;
        } else if (horasPorDia == 10) {
            salario += 300000;
        } else if (horasPorDia >= 12) {
            salario += 350000;
        } else {
            cout << "No se aplicara aumento de salario para " << nombre << endl;
        }
    }

    string getNombre() const {
        return nombre;
    }

    double getSalario() const {
        return salario;
    }
};

int main() {
    string nombre1, nombre2, nombre3;
    int horas1, horas2, horas3;

    cout << "Ingrese el nombre del primer empleado: ";
    getline(cin, nombre1);
    cout << "Ingrese las horas de trabajo por dia para " << nombre1 << ": ";
    cin >> horas1;
    cin.ignore(); 

    cout << "Ingrese el nombre del segundo empleado: ";
    getline(cin, nombre2);
    cout << "Ingrese las horas de trabajo por dia para " << nombre2 << ": ";
    cin >> horas2;
    cin.ignore();

    cout << "Ingrese el nombre del tercer empleado: ";
    getline(cin, nombre3);
    cout << "Ingrese las horas de trabajo por dia para " << nombre3 << ": ";
    cin >> horas3;
    cin.ignore();

    CEmpleados empleado1(nombre1, 250000, horas1);
    CEmpleados empleado2(nombre2, 300000, horas2);
    CEmpleados empleado3(nombre3, 350000, horas3);

    empleado1.aumentarSalario();
    empleado2.aumentarSalario();
    empleado3.aumentarSalario();

    cout << empleado1.getNombre() << ": $" << fixed << setprecision(2) << empleado1.getSalario() << endl;
    cout << empleado2.getNombre() << ": $" << fixed << setprecision(2) << empleado2.getSalario() << endl;
    cout << empleado3.getNombre() << ": $" << fixed << setprecision(2) << empleado3.getSalario() << endl;
    
    return 0;
}
// profesora: para este punto tuve que investigar como arreglar el salario porque me daba de resultado una notación cientifica y lo queria en
// formato estándar y encontre una libreria <iomanip> la cual use fixed ( es una funcion la cual se asegura que se impriman los numeros en decimal)
// y setprecision() (asegura que se mostraran n veces de digitos decimales despues del punto decimal en este caso elegi 2)
