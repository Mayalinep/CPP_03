#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap() : ClapTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs){
    *this = rhs;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs){
    if (this != &rhs){
        ClapTrap::operator=(rhs);
    }
    return *this;
}


void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << getName() << " is requesting a high five!" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}