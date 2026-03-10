#include <iostream>
#include "Biblioteca.h"

int main(){

    Biblioteca bib;

    // Libros iniciales
    bib.agregarLibro(Libro("Cien años de soledad", "Gabriel Garcia Marquez", "9780307474728"));
    bib.agregarLibro(Libro("1984", "George Orwell", "9780451524935"));
    bib.agregarLibro(Libro("Dune", "Frank Herbert", "9780441172719"));
    bib.agregarLibro(Libro("El principito", "Antoine de Saint Exupery", "9788499086637"));

    int opcion;

    do{

        std::cout << "\n===== GESTOR DE BIBLIOTECA =====\n";
        std::cout << "1. Agregar libro\n";
        std::cout << "2. Listar libros\n";
        std::cout << "3. Buscar libro por ISBN\n";
        std::cout << "4. Eliminar libro\n";
        std::cout << "5. Salir\n";
        std::cout << "Seleccione una opcion: ";

        std::cin >> opcion;

        if(opcion == 1){

            std::string titulo, autor, isbn;

            std::cin.ignore();

            std::cout << "Titulo: ";
            getline(std::cin, titulo);

            std::cout << "Autor: ";
            getline(std::cin, autor);

            std::cout << "ISBN: ";
            getline(std::cin, isbn);

            bib.agregarLibro(Libro(titulo, autor, isbn));

            std::cout << "Libro agregado correctamente.\n";

        }

        else if(opcion == 2){

            bib.listarLibros();

        }

        else if(opcion == 3){

            std::string isbn;

            std::cout << "Ingrese ISBN a buscar: ";
            std::cin >> isbn;

            size_t index = bib.findByIsbn(isbn);

            if(index != static_cast<size_t>(-1)){
                std::cout << "Libro encontrado en posicion: " << index << std::endl;
            }
            else{
                std::cout << "Libro no encontrado.\n";
            }

        }

        else if(opcion == 4){

            std::string isbn;

            std::cout << "Ingrese ISBN a eliminar: ";
            std::cin >> isbn;

            if(bib.eliminarLibro(isbn)){
                std::cout << "Libro eliminado correctamente.\n";
            }
            else{
                std::cout << "Libro no encontrado.\n";
            }

        }

    }while(opcion != 5);

    std::cout << "Programa finalizado.\n";

    return 0;
}