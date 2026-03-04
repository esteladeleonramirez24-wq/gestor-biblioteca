#include <iostream>
#include <vector>
#include <string>

int main() {

    std::vector<std::string> frutas = {"manzana", "pera", "banana"};

    std::cout << "Número de frutas: " << frutas.size() << "\n";

    std::cout << "Frutas:\n";

    // Range-based for
    for(const auto& fruta : frutas) {
        std::cout << "- " << fruta << "\n";
    }

    frutas.push_back("naranja");

    std::cout << "\nDespués de agregar naranja:\n";

    // For con índice
    for(size_t i = 0; i < frutas.size(); ++i) {
        std::cout << i << ": " << frutas.at(i) << "\n";
    }

    return 0;
}