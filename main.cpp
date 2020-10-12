
/*
Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.
Ej: si se ingresa B se debe imprimir:
Letra convertida: b
y si se ingresa k se debe imprimir:
Letra convertida: K
 */

#include <iostream>

using namespace std;

int main(){

    char letra;

    cout << "Ingrese una letra: ";
    cin >> letra;

    if(letra >='A' && letra <='Z'){
        letra += 'a' - 'A';
        cout << "Letra convertida: " << letra << endl;
    }

    else if (letra >='a' && letra <='z') {
        letra -= 'a' - 'A';
        cout << "Letra convertida: " << letra << endl;
    }

    else{
        cout << "El caracter ingresado no es una letra" << endl;
    }

    return 0;
}
