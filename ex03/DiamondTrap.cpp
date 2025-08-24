#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(): ClapTrap("_clap_name"), FragTrap(), ScavTrap(){
    _name = "";
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);

}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name){
    _name = name;
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);
}

const std::string DiamondTrap::getName() const
{
    return _name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs): ClapTrap(rhs), FragTrap(rhs), ScavTrap(rhs){
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs){
    if (this != &rhs)
    {
        _name = rhs._name;
        ClapTrap::setName(rhs.ClapTrap::getName());
        setHitPoints(100);
        setEnergyPoints(50);
        setAttackDamage(30);
        std::cout << "DiamondTrap copy assignment operator called" << std::endl;
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