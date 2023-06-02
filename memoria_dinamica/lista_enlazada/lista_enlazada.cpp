#include <iostream>
#include "lista_enlazada.h"
using namespace std;

ListaEnlazada::ListaEnlazada() : _primero(nullptr), _actual(nullptr), _longitud(0) {}

int ListaEnlazada::longitud() {
    return this->_longitud;
}

void ListaEnlazada::agregarAtras(const int elemento) {
    if (this->_primero == nullptr){
        this->_primero = new nodo {elemento, nullptr, nullptr};
        this->_actual = this->_primero;
        }
    else {
        if (this->_longitud == 1){
            _primero -> siguiente = new nodo {elemento, this->_primero, this->_primero};
        }
        else{
            nodo* actual = this->_primero -> siguiente;

        while (actual->siguiente != this->_primero) {
            actual = actual->siguiente;
        }
            actual->siguiente = new nodo {elemento, this->_primero, actual};
            this->_primero -> anterior = actual -> siguiente;       
    }}
    this->_longitud++;
}

int ListaEnlazada::iesimo(const int posicion) {
    // Pre: 0 <= pos < *this.longitud()

    nodo* actual = _primero;
    int i = 0;
    while (i < posicion){
        actual = actual->siguiente;
        i++;
    }
    return actual->elemento;
}

ListaEnlazada::~ListaEnlazada() {
    nodo * actual = this->_primero;
    while (actual != nullptr) {
        // Caso base, 1 elemento
        if(this->_longitud == 1){
            delete actual;
            actual = nullptr;
        }
        // Caso 2 o mas elemntos
        else{
            nodo* sig = actual->siguiente;
            delete actual;
            actual = sig;
            _longitud--;
        }

    }
    this->_primero = nullptr;
    this->_actual = nullptr; 
}

int ListaEnlazada::suma() {
    int res = 0;
    for(int posicion = 0; posicion < this->longitud(); posicion++){
        res = res + this->iesimo(posicion);
    }
    return res;
}

void ListaEnlazada::borrarUltimo() {
    // Pre: 0 < *this.longitud()
    borrarIesimo(this->_longitud-1);
}

void ListaEnlazada::borrarIesimo(const int posicion) {
    // Pre: 0 <= pos < *this.longitud()
    struct nodo * actual = this->_primero;
    // Caso base: Lista de 1 elemento (No hace falta hacer re-conexiones)
    if(this->_longitud == 1){
        this->_primero = nullptr;
        this->_actual = nullptr;
    }
    // Caso mas probable, la lista tiene 2 o mas elementos.
    else{
    // Recorro la lista hasta encontrar el iesimo elemento
        for(int i = 0; i < posicion; i++){
            actual = actual -> siguiente;
        }
    // Creo los nodos anterior y siguiente, para poder reconectar luego   
        struct nodo * next = actual -> siguiente;
        struct nodo * prev = actual -> anterior;
    // Me fijo si el nodo en el que estoy parado son _primero y/o _actual. De ser necesario, los modifico 
        if (actual == this->_primero){
            this->_primero = actual -> siguiente;
        }
        if (actual == _actual){
            this->_actual = _actual -> siguiente;
        }
    // Reconecto los nodos
        actual -> siguiente -> anterior = actual -> anterior;
        actual -> anterior -> siguiente = actual -> siguiente;
    }   
    // Elimino el nodo actual
        delete actual;
        actual = nullptr;
        this->_longitud--;
    
}

int ListaEnlazada::actual() {
    return this->_actual->elemento;
}

void ListaEnlazada::avanzar() {
    this->_actual = this->_actual -> siguiente;
}

void ListaEnlazada::retroceder() {
    this->_actual = this->_actual -> anterior;
}
