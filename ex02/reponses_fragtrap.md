1.  ClapTrap est la classe de base, ScavTrap et FragTrap sont des classes dérivées.

2. c est important que les trois classes aient des messages differents pour les memes actions car chaque classe a des caracteristiques et des capacites uniques.

3. ClapTrap a 10 points de vie, 10 points d'energie et 0 points d'attaque.
ScavTrap a 100 points de vie, 50 points d'energie et 20 points d'attaque.
FragTrap a 100 points de vie, 100 points d'energie et 30 points d'attaque.
ils ont des valeurs differentes car ils ont des capacites et des caracteristiques differentes.

4. ScavTrap a guardGate() et FragTrap a highFivesGuys().
guardGate() permet a ScavTrap de se mettre en mode de gardiennage, ce qui lui permet de se defendre contre les attaques.
highFivesGuys() permet a FragTrap de faire un high five.

5. Si on cree un tableau contenant des ClapTrap, ScavTrap et FragTrap, on peut utiliser un pointeur de ClapTrap pour acceder aux methodes de ClapTrap, ScavTrap et FragTrap.
Claptrap *ptr[3];
ptr[0] = new ClapTrap("ClapTrap");
ptr[1] = new ScavTrap("ScavTrap");
ptr[2] = new FragTrap("FragTrap");

ptr[0]->attack("ScavTrap");
ptr[1]->attack("FragTrap");
ptr[2]->attack("ClapTrap");

6. on peut faire un FragTrap qui utilise guardGate() de ScavTrap en creant un objet ScavTrap et en le convertissant en FragTrap avec un cast.
FragTrap *ptr = new ScavTrap("ScavTrap");
ScavTrap *ptr2 = dynamic_cast<ScavTrap*>(ptr);
ptr2->guardGate();

7. quand on detruit un objet de type FragTrap, les destructeurs de FragTrap et ClapTrap sont appeles dans l'ordre:
D'abord le destructeur de FragTrap, puis le destructeur de ClapTrap.

8. quand on copie un FragTrap, les parties de ClapTrap sont copiees et les valeurs de FragTrap sont copiees.

