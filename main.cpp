#include <iostream>

using namespace std;

int main()
{
    int opcion;
    int num1;
    int num2;
    int resultado;
    char sino;

do{
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Division" << endl;
    cout << "4. Multiplicacion" << endl;
    cout << "Ingrese una Opcion: ";
    cin >> opcion;

    switch(opcion)
    {
        case 1:
        cout << "Ingrese primer Numero: ";
        cin >> num1;
        cout << "Ingrese segundo Numero: ";
        cin >> num2;
            resultado = num1 + num2;
            break;

        case 2:
        cout << "Ingrese primer Numero: ";
        cin >> num1;
        cout << "Ingrese segundo Numero: ";
        cin >> num2;
            resultado = num1 - num2;
            break;

        case 3:
        cout << "Ingrese primer Numero: ";
        cin >> num1;
        cout << "Ingrese segundo Numero: ";
        cin >> num2;
            resultado = num1 * num2;
            break;

        case 4:
        cout << "Ingrese primer Numero: ";
        cin >> num1;
        cout << "Ingrese segundo Numero: ";
        cin >> num2;
            resultado = num1 % num2;
            break;
    }

    cout << " El resultado de la opercion es: " << resultado << endl;
    cout << "Quiere realizar otra operacion? S/N ";
    cin >> sino;

}while (sino == 's');

    return 0;
}
