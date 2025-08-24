#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap(){
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap " << getName() << " is created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs){
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs){
    if (this != &rhs){
        ClapTrap::operator=(rhs);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target){
    if (getEnergyPoints() > 0 && getHitPoints() > 0){
        std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }
    else if (getHitPoints() <= 0){
        std::cout << "ScavTrap " << getName() << " is dead and cannot attack!" << std::endl;
    }
    else{
        std::cout << "ScavTrap " << getName() << " has no energy points left!" << std::endl;
    }
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << getName() << " is destroyed!" << std::endl;
}