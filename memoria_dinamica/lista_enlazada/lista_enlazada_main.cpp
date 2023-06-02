#include <iostream>

#include "lista_enlazada.h"

using namespace std;

int main() {
    ListaEnlazada lista_enlazada;
    lista_enlazada.agregarAtras(2);

    cout << lista_enlazada.longitud();

    lista_enlazada.agregarAtras(10);
    cout << lista_enlazada.longitud();
}