#include "ScavTrap.hpp"
#include <iostream>

int main (){
    ClapTrap *ptr[2];
    std::cout << std::endl;
    std::cout <<std::endl;

    ScavTrap robotguard("guard");
    std::cout << std::endl;


    ptr[0] = new ScavTrap("ScavTrap1");
    ptr[1] = new ScavTrap("ScavTrap2");
    std::cout << std::endl;
    
    ptr[0]->attack("ClapTrap2");
    ptr[1]->attack("ClapTrap2");
    robotguard.attack("ClapTrap2");
    std::cout << std::endl;
    robotguard.guardGate();
    delete ptr[0];
    delete ptr[1];
}