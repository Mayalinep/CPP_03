#include "FragTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== FRAGTRAP CONSTRUCTOR/DESTRUCTOR CHAINING DEMONSTRATION ===" << std::endl;
    std::cout << std::endl;
    
    FragTrap fragTrap("FragTrap");
    fragTrap.attack("target");
    fragTrap.takeDamage(5);
    fragTrap.beRepaired(2);
    fragTrap.highFivesGuys();
    
    return 0;
}