1. Les 4 attributs privés de la classe ClapTrap sont :
- _name : std::string
- _hitPoints : int
- _energyPoints : int
- _attackDamage : int

2. Les valeurs par défaut de ces attributs lors de la création d'un ClapTrap sont :
- _name : ""
- _hitPoints : 10
- _energyPoints : 10
- _attackDamage : 0

3. le constructeur par defaut va juste initialiser les attributs avec des valeurs par defaut. le constructeur avec le parametre va permettre de construire la classe en initialisant le ou les attributs avec le ou les parametres definis

4. les deux font partie de la convention de copelen, mm s il ne sont pas utiliser ils doivent etre present. il permettre une application faciliter lorsque l on souhaite reproduire une classe ou un element de la classe a l identique.

5. il permet de verifier que l element en cours n est pas deja une copis de rhs avant de faire une copie inutile. si c est le cas on retourne le this sinn on definit les attributs a copier.

6. Claptrtap ne peut pas attaquer si le hitpoint est a 0 ( il est mort) ou si son energy point est a 0

7. qd un claptrap attaque il perd un point d energie.

8. beRepaired permet de reparer le claptrap avec un amout passer en paramettre qui viendront incrementer le hitpoint. on doit pas verifier que le claptrap n est pas mort dinn la reparation ne se fait pas et on doit verifier qu il a tjrs des point d energie.

9. isNotAlive permet de savoir si hitpoint est a 0 et hasnotenergy si le energypoint est a 0. ce sont des boolens qui permette une verification avant une attack ou avant berepaired.

10. le destructeur est activer lors de la fin du main et il peut contenir un std::cout.

