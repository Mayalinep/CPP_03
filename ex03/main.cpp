#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n=== DIAMONDTRAP TESTS ===\n" << std::endl;
    
    // Test constructeur
    DiamondTrap diamond("Didi");
    std::cout << std::endl;

    // Vérification des valeurs héritées
    std::cout << "=== INHERITED VALUES ===\n";
    std::cout << "Hit points (should be FragTrap 100): " << diamond.getHitPoints() << std::endl;
    std::cout << "Energy points (should be ScavTrap 50): " << diamond.getEnergyPoints() << std::endl;
    std::cout << "Attack damage (should be FragTrap 30): " << diamond.getAttackDamage() << std::endl;
    std::cout << std::endl;

    // Test des capacités héritées
    std::cout << "=== INHERITED ABILITIES ===\n";
    diamond.attack("Enemy");        // De ScavTrap
    diamond.guardGate();           // De ScavTrap
    diamond.highFivesGuys();       // De FragTrap
    std::cout << std::endl;

    // Test de la capacité spéciale
    std::cout << "=== SPECIAL ABILITY ===\n";
    diamond.whoAmI();              // Spécifique à DiamondTrap
    std::cout << std::endl;

    // Test des fonctionnalités de base
    std::cout << "=== BASIC FUNCTIONALITIES ===\n";
    diamond.takeDamage(30);
    diamond.beRepaired(20);
    std::cout << std::endl;

    return 0;
}