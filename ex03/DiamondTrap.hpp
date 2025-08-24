#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;


    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &rhs);
        DiamondTrap &operator=(const DiamondTrap &rhs);
        void whoAmI();
        void attack(const std::string& target);
        const std::string getName() const;
        ~DiamondTrap();
};