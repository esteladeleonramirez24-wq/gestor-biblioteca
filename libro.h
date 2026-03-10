#ifndef LIBRO_H
#define LIBRO_H

#include <string>
#include <iostream>

class Libro {

private:
    std::string titulo;
    std::string autor;
    std::string isbn;

public:
    // Constructor
    Libro(std::string t, std::string a, std::string i);

    // Métodos
    void mostrarInfo() const;

    // Getters
    std::string getIsbn() const;
};

#endif