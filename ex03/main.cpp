#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    DiamondTrap test("Didi");
    test.attack("Enemy");
    std::cout << std::endl;
    std::cout << test.getName() << " hit points: " << test.getHitPoints() << std::endl;
    std::cout << "DiamondTrap energy points: " << test.getEnergyPoints() << std::endl;
    std::cout << "DiamondTrap attack damage: " << test.getAttackDamage() << std::endl;
    std::cout << std::endl;
    test.takeDamage(10);
    std::cout << std::endl;
    std::cout << "DiamondTrap hit points: " << test.getHitPoints() << std::endl;
    test.beRepaired(10);
    test.whoAmI();
    return 0;
}