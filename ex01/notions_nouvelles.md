# Nouvelles Notions - Exercice 01 : Héritage en C++

## 🎯 Objectif de l'exercice
Créer une classe `ScavTrap` qui hérite de `ClapTrap` et comprendre les mécanismes de l'héritage en C++.

## 📚 Concepts Clés

### 1. L'Héritage en C++

L'héritage est un mécanisme fondamental de la programmation orientée objet qui permet à une classe (classe dérivée) d'hériter des propriétés et méthodes d'une autre classe (classe de base).

#### Syntaxe de base :
```cpp
class ClasseDerivee : public ClasseDeBase
{
    // Membres spécifiques à la classe dérivée
};
```

#### Exemple concret :
```cpp
class ScavTrap : public ClapTrap
{
    // ScavTrap hérite de tous les membres publics de ClapTrap
    // et peut ajouter ses propres membres
};
```

### 2. Les Constructeurs dans l'Héritage

#### Principe important :
- Quand on crée un objet d'une classe dérivée, le constructeur de la classe de base est **toujours** appelé en premier
- L'ordre de construction est : **Classe de base → Classe dérivée**

#### Syntaxe pour appeler le constructeur de la classe de base :
```cpp
// Dans ScavTrap.cpp
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    // Initialisation spécifique à ScavTrap
    _hitPoints = 100;      // Redéfinition des valeurs par défaut
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " is created!" << std::endl;
}
```

### 3. Les Destructeurs dans l'Héritage

#### Principe important :
- L'ordre de destruction est **inverse** de l'ordre de construction
- L'ordre de destruction est : **Classe dérivée → Classe de base**

#### Exemple :
```cpp
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << getName() << " is destroyed!" << std::endl;
    // Le destructeur de ClapTrap sera appelé automatiquement après
}
```

### 4. La Redéfinition de Méthodes

Une classe dérivée peut redéfinir les méthodes de sa classe de base pour adapter leur comportement.

#### Exemple :
```cpp
// Dans ClapTrap
void attack(const std::string& target);

// Dans ScavTrap - redéfinition
void attack(const std::string& target)
{
    // Nouveau comportement spécifique à ScavTrap
    std::cout << "ScavTrap " << getName() << " attacks " << target 
              << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}
```

## 🔍 Points Importants à Comprendre

### Pourquoi cet ordre de construction/destruction ?

1. **Construction** : La classe de base doit être initialisée avant la classe dérivée car la classe dérivée peut dépendre des membres de la classe de base.

2. **Destruction** : La classe dérivée doit être détruite avant la classe de base pour éviter les problèmes de dépendances.

### Exemple d'exécution :
```cpp
ScavTrap scav("Robot1");
// Sortie :
// ClapTrap Robot1 is created!     (constructeur ClapTrap)
// ScavTrap Robot1 is created!     (constructeur ScavTrap)

// À la fin du programme :
// ScavTrap Robot1 is destroyed!   (destructeur ScavTrap)
// ClapTrap Robot1 is destroyed!   (destructeur ClapTrap)
```

## 🛠️ Implémentation Pratique

### Structure de fichiers nécessaire :
- `ScavTrap.hpp` : Déclaration de la classe
- `ScavTrap.cpp` : Implémentation des méthodes
- Mise à jour du `main.cpp` pour tester

### Points d'attention :
1. **Héritage public** : `class ScavTrap : public ClapTrap`
2. **Appel du constructeur de base** : `: ClapTrap(name)`
3. **Redéfinition des valeurs par défaut** dans le constructeur
4. **Nouvelle méthode** : `guardGate()`

## 🎯 Exercices de Compréhension

1. **Question** : Pourquoi l'ordre de destruction est-il inverse de l'ordre de construction ?
2. **Question** : Que se passe-t-il si on n'appelle pas explicitement le constructeur de la classe de base ?
3. **Question** : Peut-on accéder aux membres privés de la classe de base depuis la classe dérivée ?

## 📝 Checklist pour l'exercice

- [ ] Créer la classe `ScavTrap` qui hérite de `ClapTrap`
- [ ] Implémenter les constructeurs avec appel au constructeur de base
- [ ] Redéfinir la méthode `attack()`
- [ ] Ajouter la méthode `guardGate()`
- [ ] Tester l'ordre de construction/destruction
- [ ] Vérifier que les valeurs par défaut sont correctes (100, 50, 20)

## 🔗 Ressources Complémentaires

- [Documentation C++ sur l'héritage](https://en.cppreference.com/w/cpp/language/derived_class)
- [Tutoriel sur les constructeurs et destructeurs](https://www.learncpp.com/cpp-tutorial/constructors-and-initialization-of-derived-classes/) 