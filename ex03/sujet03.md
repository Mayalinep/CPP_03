Now it’s weird!
Turn-in directory : ex03/
Files to turn in : Files from previous exercises + DiamondTrap.{h, hpp},
DiamondTrap.cpp
Forbidden functions : None
In this exercise, you will create a monster: a ClapTrap that’s half FragTrap, half ScavTrap. It will be named DiamondTrap, and it will inherit from both FragTrap AND
ScavTrap. This is so risky!
The DiamondTrap class will have a private attribute named name. This attribute must
have exactly the same variable name as in the ClapTrap base class (without referring to
the robot’s name).
To be clearer, here are two examples:
If ClapTrap’s variable is name, give the DiamondTrap’s variable the name name.
If ClapTrap’s variable is _name, give the DiamondTrap’s variable the name _name.
Its attributes and member functions will be inherited from its parent classes:
• Name, which is passed as a parameter to a constructor
• ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
• Hit points (FragTrap)
• Energy points (ScavTrap)
• Attack damage (FragTrap)
• attack() (ScavTrap)
In addition to the special functions from both parent classes, DiamondTrap will have
its own special ability:
void whoAmI();
This member function will display both its name and its ClapTrap name.
Of course, the ClapTrap instance of DiamondTrap will be created once, and only once.
Yes, there’s a trick.
Again, add more tests to your program.