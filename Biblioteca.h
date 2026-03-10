#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include <string>
#include "Libro.h"

class Biblioteca {

private:
    std::vector<Libro> libros;

public:

    void agregarLibro(const Libro& libro);

    void listarLibros() const;

    size_t findByIsbn(const std::string& isbn) const;

    bool eliminarLibro(const std::string& isbn);

};

#endif