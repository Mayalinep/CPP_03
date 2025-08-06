#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main() {
    std::cout << "=== ROBOT COMBAT SIMULATION ===" << std::endl << std::endl;
    
    // Robot creation
    std::cout << "Creating robots..." << std::endl;
    ClapTrap clap("Soldier");
    ScavTrap scav("Guard");
    
    std::cout << std::endl << "=== COMBAT PHASE ===" << std::endl;
    
    // Combat
    std::cout << "\n Round 1:" << std::endl;
    if (!clap.isNotAlive()) {
        clap.attack("Guard");
        scav.takeDamage(clap.getAttackDamage());
    }
    
    std::cout << "\n Round 2:" << std::endl;
    if (!scav.isNotAlive()) {
        scav.attack("Soldier");
        clap.takeDamage(scav.getAttackDamage());
    }
    
    std::cout << "\n Round 3:" << std::endl;
    if (!clap.isNotAlive()) {
        clap.beRepaired(5);
    } else {
        std::cout << "Soldier is dead, no repair possible!" << std::endl;
    }
    
    if (!scav.isNotAlive()) {
        scav.guardGate();
    }
    
    std::cout << "\n Round 4:" << std::endl;
    if (!scav.isNotAlive() && !clap.isNotAlive()) {
        scav.attack("Soldier");
        clap.takeDamage(scav.getAttackDamage());
    } else if (scav.isNotAlive()) {
        std::cout << "Guard is dead, no attack possible!" << std::endl;
    } else {
        std::cout << "Soldier is already dead!" << std::endl;
    }
    
    std::cout << "\n Final status:" << std::endl;
    std::cout << "Soldier: " << clap.getHitPoints() << " HP, " << clap.getEnergyPoints() << " EP" << std::endl;
    std::cout << "Guard: " << scav.getHitPoints() << " HP, " << scav.getEnergyPoints() << " EP" << std::endl;
    
    std::cout << std::endl << "=== SIMULATION END ===" << std::endl;
    
    return 0;
} 