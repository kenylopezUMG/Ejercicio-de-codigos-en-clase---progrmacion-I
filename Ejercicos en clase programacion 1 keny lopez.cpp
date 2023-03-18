/*
//codigo numero 1 Factoriales

#include <iostream>
using namespace std;

int main(){
    int num, factorial = 1;

    cout << "ingresa un numero: ";
    cin >> num;

    for (int i= 1; i <= num; i++) {
            factorial *= i;
}

    cout << "El factorial de " << num << " es " << factorial << endl;

    return 0;
}
*/

/*
//codigo 2 serie fibonacci
#include <iostream>
using namespace std;

 int main() {
    int n, numero1 = 0, numero2 = 1, siguiente;

    cout << "ingresa el numero de terminos de la serie fibonacci: ";
    cin >> n;

    cout << "serie fibonacci ";

    for (int i = 1; i <= n; ++i) {
        cout << numero1 << " + ";

        siguiente = numero1 + numero2;
        numero1 = numero2;
        numero2 = siguiente;
    }
    return 0;
}
*/

/*
//Codigo 3 verificar si es primo o no

#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int num, i;
    bool es_primo = true;

    cout << "ingresa un numero: ";
    cin >> num;

    //para verificar si es primo
    for (i = 2; i <= sqrt(num); i++){
        if (num % i == 0) {
            es_primo = false;
            break;
        }
    }
    // resultado
    if (es_primo)
        cout << num << " es numero primo " << endl;
    else
        cout << num << " no es un numero primo" << endl;
    return 0;
}
*/

/*
//codigo 4 verificar si el numero es par o no

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingresa un numero : ";
    cin >> num;

    // Para Verificar si el número es par
    if (num % 2 == 0)
        cout << num << " es par." << endl;
    else
        cout << num << " es impar." << endl;

    return 0;
}
*/

/*
// tabla de multiplicar para numero ingresado
#include <iostream>

int main() {
    int num, i=1;

    std::cout << " ingrese un numero: ";
    std::cin >> num;

    std::cout << "tabla de multiplicar de" << num << ":" << std::endl;

    while (i<=10) {
        std::cout << num << "x" << i << "=" << num*i << std::endl;
        i++;
    }

    return 0;
}
*/