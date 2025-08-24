#include "ClapTrap.hpp"
#include <iostream>


//constructor default
ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "ClapTrap default constructor called" << std::endl;
}

//constructor with name
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "ClapTrap " << _name << " is created!" << std::endl;
}

//copy constructor
ClapTrap::ClapTrap(const ClapTrap& rhs): _name(rhs._name), _hitPoints(rhs._hitPoints), _energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage){
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

//copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs){
    if (this != &rhs){
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
        std::cout << "ClapTrap copy assignment operator called" << std::endl;
    }
    return *this;
}

//setters
void ClapTrap::setName(std::string name){
    _name = name;
}
void ClapTrap::setHitPoints(int hitPoints){
    _hitPoints = hitPoints;
}
void ClapTrap::setEnergyPoints(int energyPoints){
    _energyPoints = energyPoints;
}
void ClapTrap::setAttackDamage(int attackDamage){
    _attackDamage = attackDamage;
}

// Getters
const std::string ClapTrap::getName() const{
    return _name;
}
int ClapTrap::getHitPoints() const{
    return _hitPoints;
}
int ClapTrap::getEnergyPoints() const{
    return _energyPoints;
}
int ClapTrap::getAttackDamage() const{
    return _attackDamage;
}

//check if the ClapTrap has hit points or energy points left
bool ClapTrap::isNotAlive() const{
    return _hitPoints <= 0;
}
bool ClapTrap::hasNotEnergy() const{
    return _energyPoints <= 0;
}

//attack function
void ClapTrap::attack(const std::string& target){
    if (_energyPoints > 0 && _hitPoints > 0){
        std::cout << "ClapTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else if (_hitPoints <= 0){
        std::cout << "ClapTrap " << getName() << " is dead and cannot attack!" << std::endl;
    }
    else{
        std::cout << "ClapTrap " << getName() << " has no energy points left!" << std::endl;
    }
}   

//take damage function
void ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoints > 0){
        _hitPoints -= amount;
        std::cout << "ClapTrap " << getName() << " takes " << amount << " points of damage!" << std::endl;
        if (isNotAlive()){
            std::cout << "ClapTrap " << getName() << " is dead!" << std::endl;
        }
    }
    else{
        std::cout << "ClapTrap " << getName() << " is already dead!" << std::endl;
    }
}

//be repaired function
void ClapTrap::beRepaired(unsigned int amount){
    if (amount <= 0){
        std::cout << "ClapTrap " << getName() << " could not be repaired (invalid amount: " << amount << ")" << std::endl;
        return;
    }

    if (_energyPoints > 0 && _hitPoints > 0){
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << getName() << " is repaired for " << amount << " points of hit points!" << std::endl;
    }
    else if (_hitPoints <= 0){
        std::cout << "ClapTrap " << getName() << " is dead and cannot be repaired!" << std::endl;
    }
    else{
        std::cout << "ClapTrap " << getName() << " has no energy points left!" << std::endl;
    }
}

//destructor
ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << getName() << " is destroyed!" << std::endl;
}