#include <iostream>

// Exemple 1 : Sans virtual
class Animal {
public:
    void faireBruit() {
        std::cout << "Animal fait un bruit" << std::endl;
    }
};

class Chien : public Animal {
public:
    void faireBruit() {
        std::cout << "Chien fait Wouf!" << std::endl;
    }
};

// Exemple 2 : Avec virtual
class AnimalVirtual {
public:
    virtual void faireBruit() {
        std::cout << "Animal fait un bruit" << std::endl;
    }
};

class ChienVirtual : public AnimalVirtual {
public:
    void faireBruit() override {
        std::cout << "Chien fait Wouf!" << std::endl;
    }
};

int main() {
    std::cout << "=== Sans virtual ===" << std::endl;
    Animal* animal1 = new Chien();
    animal1->faireBruit();  // Affiche "Animal fait un bruit"
    delete animal1;

    std::cout << "\n=== Avec virtual ===" << std::endl;
    AnimalVirtual* animal2 = new ChienVirtual();
    animal2->faireBruit();  // Affiche "Chien fait Wouf!"
    delete animal2;

    return 0;
}