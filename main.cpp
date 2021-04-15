#include <iostream>
using namespace std;

int main() {
float altura, base, area;

cout << "Area de un triagulo \n";// descripcion de del problema.//
cout << "Escriba el dato de la altura \n";// Digo al usuario que hacer.
cin >> altura; // ingreso datos a la variable altura
cout << "Escriba el dato de la  base \n";
cin >> base; // ingreso datos a la variable base 
area = base * altura / 2; // ingreso datos a la variable area 
cout << "El resultado del area es: \n"<< area; // muestra el resultado del area 

return 0;

}