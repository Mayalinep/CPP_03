# Serena, my love!

## Turn-in directory : ex01/

## Files to turn in : Files from the previous exercise + ScavTrap.{h, hpp}, ScavTrap.cpp

Forbidden functions : None

Because you can never have enough ClapTraps, you will now create a derived robot.
It will be named ScavTrap and will inherit the constructors and destructor from ClapTrap. However, its constructors, destructor, and attack() will print different messages.
After all, ClapTraps are aware of their individuality.
Note that proper construction/destruction chaining must be shown in your tests.
When a ScavTrap is created, the program starts by constructing a ClapTrap. Destruction occurs in reverse order. Why?
ScavTrap will use the attributes of ClapTrap (update ClapTrap accordingly) and
must initialize them to:
• Name, which is passed as a parameter to the constructor
• Hit points (100), representing the health of the ClapTrap
• Energy points (50)
• Attack damage (20)
ScavTrap will also have its own special ability:
void guardGate();
This member function will display a message indicating that ScavTrap is now in Gate
keeper mode.
Don’t forget to add more tests to your program.