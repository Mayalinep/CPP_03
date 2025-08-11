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
    *this = rhs;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs){
    if (this != &rhs){
        ClapTrap::operator=(rhs);
    }
    return *this;
}

void ScavTrap::attack(const std::string& target){
    if (getEnergyPoints() > 0 && getHitPoints() > 0){
        std::cout << "ScavTrap " << getName() << " unleashes a devastating blade attack on " << target << ", slashing for " << getAttackDamage() << " points of damage!" << std::endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }
    else if (getHitPoints() <= 0){
        std::cout << "ScavTrap " << getName() << " lies motionless and cannot attack!" << std::endl;
    }
    else{
        std::cout << "ScavTrap " << getName() << " has run out of energy to attack!" << std::endl;
    }
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << getName() << " has entered Gate keeper mode, standing guard with unwavering vigilance!" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << getName() << " is destroyed!" << std::endl;
}