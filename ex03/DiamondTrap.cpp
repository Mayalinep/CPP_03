#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(){
    _name = "";

}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name){
    _name = name;
    // ClapTrap::setName(name + "_clap_name");
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);
}

const std::string DiamondTrap::getName() const
{
    return _name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs){
    *this = rhs;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs){
    if (this != &rhs)
    {
        _name = rhs._name;
        ClapTrap::setName(rhs.ClapTrap::getName());
        setHitPoints(rhs.getHitPoints());
        setEnergyPoints(rhs.getEnergyPoints());
        setAttackDamage(rhs.getAttackDamage());
    }
    return *this;
}

void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name: " << _name << "\n ClapTrap name: " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap " << _name << " is destroyed!" << std::endl;
}