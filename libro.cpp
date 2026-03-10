#include "libro.h"

// Constructor
Libro::Libro(std::string t, std::string a, std::string i) {
    titulo = t;
    autor = a;
    isbn = i;
}

// Mostrar información del libro
void Libro::mostrarInfo() const {
    std::cout << "Titulo: " << titulo << std::endl;
    std::cout << "Autor: " << autor << std::endl;
    std::cout << "ISBN: " << isbn << std::endl;
}

// Obtener ISBN
std::string Libro::getIsbn() const {
    return isbn;
}