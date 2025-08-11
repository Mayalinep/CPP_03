#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main() {
    std::cout << "\n=== Test 1: Utilisation directe ===\n";
    ScavTrap s("Robot");
    s.attack("Enemy");  // OK, utilise la version ScavTrap

    std::cout << "\n=== Test 2: Utilisation via pointeur ===\n";
    ClapTrap* ptr = new ScavTrap("Robot2");
    ptr->attack("Enemy");  // Sans virtual: utilise la version ClapTrap !
                          // Avec virtual: utiliserait la version ScavTrap
    delete ptr;

    std::cout << "\n=== Fin des tests ===\n";
    return 0;
}