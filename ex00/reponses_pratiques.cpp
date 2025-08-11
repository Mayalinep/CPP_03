#include "ClapTrap.hpp"
#include <iostream>

int main (){
    ClapTrap Robot("Baymax");

    int bigAttack = Robot.getEnergyPoints();
    for(int i = 0; i <= bigAttack; i++){
        Robot.attack("Enemy");
    }


    std::cout << Robot.getName() << " try to repair himself.." << std::endl;
    if (Robot.getHitPoints() < 10){
        std::cout << Robot.getName() << " is on top of his health" << std::endl;
    }
    else
        Robot.beRepaired(10);

    int bigDamage = Robot.getHitPoints();
    std::cout << "Enemy start to attack " << Robot.getName() << std::endl;
    Robot.takeDamage(bigDamage);
    std::cout << Robot.getName() << " want to revenge" << std::endl;
    Robot.attack("Enemy");

    return(0);
}

// 11. Pourquoi est-il
//  important d'avoir des getters et des setters plutôt 
// que d'accéder directement aux attributs ?

// car ils s agit d attributs privee ils ne peuvent pas etre modifier ainsi.

// 12. Comment pourrait-on améliorer la classe ClapTrap ? 
// Proposez au moins deux améliorations possibles.
// Empecher la reparation qd le compte de hitpoint est au max ou completer la difference
// Empecher le compte de vie ne tombe en neg si hit point atteint 0 mm si amout est sup a hitpoint.