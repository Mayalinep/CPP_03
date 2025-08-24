#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void separator(const std::string &title){
    std::cout << std::endl;
    std::cout << " =========================" << title << "========================" << std::endl;
    std::cout << std::endl;
}
int main()
{
    separator( " construction/ destruction");
    std::cout << " creation d'un Scavtrap pour visualiser  l ordre de construction/ destruction" << std::endl;
    {
        ScavTrap robot( "Gardien");
        std::cout << std::endl;
        std::cout << "Scavtrap a ete cree.. maintenant destruction du robot" << std::endl;
    } //destruction de claptrap puis de scavtrap

    separator( "avec differents constructeurs");
    std::cout << "constructeur par defaut " << std::endl;
    ScavTrap defaultRobot;
    std::cout << std::endl;

    std::cout <<"constructeur avec un nom en parametre" << std::endl;
    ScavTrap RobotWithName( "GardienC");
    std::cout << std::endl;

    std::cout << "constructeur par copie" << std::endl;
    ScavTrap copieRobot(RobotWithName);
    std::cout << std::endl;
    std::cout << "operateur d'affectation" << std::endl;
    ScavTrap affectationRobot;
    affectationRobot = copieRobot;
    std::cout << std::endl;

    separator( "Valeurs des attributs ScavTrap");
    std::cout << "Hit points: " << RobotWithName.getHitPoints() << std::endl;
    std::cout << "Energy points: " << RobotWithName.getEnergyPoints() << std::endl;
    std::cout << "Attack damage: " << RobotWithName.getAttackDamage() << std::endl;
    std::cout << std::endl;

    separator( "Message de la fonction attack");
    ClapTrap Claptrapi("Claptrapi");
    std::cout << std::endl;
    std::cout << " attaque de Claptrapi" << std::endl;
    Claptrapi.attack("target");
    std::cout << std::endl;
    std::cout << "attaque de Scavtrap" << std::endl;
    RobotWithName.attack("target");
    std::cout << std::endl;
    //message differents pour les deux classes

    separator( "Polymorphisme");
    std::cout << "Test avec pointeurs pour le poly" << std::endl;
    ClapTrap *ptrRobot1 = new ClapTrap("ViClaptrapi");
    ClapTrap *ptrRobot2 = new ScavTrap("ViScavtrap");

    std::cout << "les deux robots vont attaquer" << std::endl;
    ptrRobot1->attack("target");
    ptrRobot2->attack("target");  //scavtrap va utiliser sa fonction et son message puisque celle du parent est virtuelle
    std::cout << std::endl;

    delete ptrRobot1;
    delete ptrRobot2;

    separator("Fonction guardGate");
    std::cout << "creation d'un Scavtrap" << std::endl;
    ScavTrap robotScav("Gardien");
    std::cout << std::endl;

    std::cout << "activation de la fonction guardGate" << std::endl;
    robotScav.guardGate();
    std::cout << std::endl;
    robotScav.attack("target");
    robotScav.takeDamage(10);
    robotScav.beRepaired(10);
    std::cout << robotScav.getName() << " a " << robotScav.getHitPoints() << " points de vie maintenant" << std::endl;
    std::cout << std::endl;
 
}