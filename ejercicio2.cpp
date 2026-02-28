#include <iostream>
#include <string>

// Definición de la clase Libro con Encapsulación
class Libro {
private:
    // Atributos privados: No accesibles directamente desde fuera de la clase
    std::string titulo;
    std::string autor;
    std::string isbn;
    int anioPublicacion;

public:
    // Constructor con lista de inicialización
    Libro(std::string t, std::string a, std::string i, int anio) 
        : titulo(t), autor(a), isbn(i), anioPublicacion(anio) {
        std::cout << "-> Objeto Libro creado: " << titulo << std::endl;
    }

    // Destructor: Se ejecuta cuando el objeto sale de memoria
    ~Libro() {
        std::cout << "-> Objeto Libro '" << titulo << "' destruido." << std::endl;
    }

    // --- MÉTODOS ACCESSORES (Getters y Setters) ---

    // Título
    std::string getTitulo() const { return titulo; }
    void setTitulo(const std::string& t) { titulo = t; }

    // Autor
    std::string getAutor() const { return autor; }
    void setAutor(const std::string& a) { autor = a; }

    // ISBN
    std::string getIsbn() const { return isbn; }
    void setIsbn(const std::string& i) { isbn = i; }

    // Año de Publicación
    int getAnioPublicacion() const { return anioPublicacion; }
    void setAnioPublicacion(int anio) { anioPublicacion = anio; }

    // Método para mostrar información
    void mostrarInfo() const {
        std::cout << "===========================" << std::endl;
        std::cout << "Título: " << titulo << std::endl;
        std::cout << "Autor:  " << autor << std::endl;
        std::cout << "ISBN:   " << isbn << std::endl;
        std::cout << "Año:    " << anioPublicacion << std::endl;
        std::cout << "===========================" << std::endl;
    }
};

int main() {
    // 1. Crear un objeto inicial
    Libro libro1("C++ Primer", "Stanley Lippman", "978-0321714114", 2012);

    std::cout << "\n--- Datos iniciales ---" << std::endl;
    libro1.mostrarInfo();

    // 2. Probar el uso de Setters (Modificación de datos)
    std::cout << "\nModificando el titulo y el año..." << std::endl;
    libro1.setTitulo("C++ Primer - Edición Especial");
    libro1.setAnioPublicacion(2024);

    // 3. Probar el uso de Getters (Acceso a datos individuales)
    std::cout << "\nConfirmando cambio con Getter:" << std::endl;
    std::cout << "Nuevo Título: " << libro1.getTitulo() << std::endl;
    std::cout << "Nuevo Año:    " << libro1.getAnioPublicacion() << std::endl;

    std::cout << "\n--- Datos actualizados ---" << std::endl;
    libro1.mostrarInfo();

    std::cout << "\nPresiona Enter para salir..." << std::endl;
    std::cin.get();

    return 0;
}