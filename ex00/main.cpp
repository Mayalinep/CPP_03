#include "ClapTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== BIG HERO 6 - BAYMAX BATTLE SIMULATOR ===" << std::endl;
  
    std::cout << std::endl;
    std::cout << "Creating robots" << std::endl;
    ClapTrap baymax("Baymax");
    ClapTrap wasabi("Wasabi");

    std::cout << std::endl;
    std::cout << "Testing initial states" << std::endl;
    std::cout << baymax.getName() << ": HP=" << baymax.getHitPoints() 
              << ", EP=" << baymax.getEnergyPoints() 
              << ", AD=" << baymax.getAttackDamage() << std::endl;
    
     
    std::cout << std::endl;
    std::cout << "Testing setters" << std::endl;
    wasabi.setAttackDamage(5);
    std::cout << wasabi.getName() << " now has " << wasabi.getAttackDamage() << " attack damage points!" << std::endl;
    
    baymax.attack("Wasabi");
    std::cout << std::endl;
    wasabi.takeDamage(3);
    wasabi.beRepaired(2);
    wasabi.attack("Baymax");
    std::cout << std::endl;
    baymax.takeDamage(9);
    baymax.beRepaired(0);
    baymax.attack("Wasabi");
    wasabi.takeDamage(3);
    wasabi.beRepaired(2);

    std::cout << std::endl;
    std::cout << "Testing final states" << std::endl;
    std::cout << baymax.getName() << ": HP=" << baymax.getHitPoints() 
              << ", EP=" << baymax.getEnergyPoints() 
              << ", AD=" << baymax.getAttackDamage() << std::endl;
    std::cout << wasabi.getName() << ": HP=" << wasabi.getHitPoints() 
              << ", EP=" << wasabi.getEnergyPoints() 
              << ", AD=" << wasabi.getAttackDamage() << std::endl;
    return 0;
}