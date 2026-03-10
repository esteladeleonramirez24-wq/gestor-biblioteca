#include <iostream>
#include <vector>
#include "Libro.h"


int main() {

    std::vector<Libro> misLibros;

    misLibros.emplace_back("1984", "George Orwell", "978-0451524935");
    misLibros.emplace_back("Dune", "Frank Herbert", "978-0441172719");

    for(const auto& libro : misLibros) {
        libro.mostrarInfo();
    }

    return 0;
}