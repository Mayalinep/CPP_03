#pragma once

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap
{
    private:
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& rhs);
        ScavTrap& operator=(const ScavTrap& rhs);
        void attack(const std::string& target);
        void guardGate();
        ~ScavTrap();
}; 