# Exercices Pratiques - Héritage en C++

## 🎯 Objectif
Ces exercices t'aideront à bien comprendre les concepts d'héritage avant de passer à l'implémentation de `ScavTrap`.

## 📝 Exercice 1 : Compréhension de l'ordre de construction/destruction

### Question
Observe le code suivant et prédit la sortie :

```cpp
class Animal {
public:
    Animal() { std::cout << "Animal constructor" << std::endl; }
    ~Animal() { std::cout << "Animal destructor" << std::endl; }
};

class Dog : public Animal {
public:
    Dog() { std::cout << "Dog constructor" << std::endl; }
    ~Dog() { std::cout << "Dog destructor" << std::endl; }
};

int main() {
    Dog myDog;
    return 0;
}
```

**Ta réponse :** 
```
// Écris ici ce que tu penses être la sortie :
```

## 📝 Exercice 2 : Héritage et constructeurs

### Question
Complète le code suivant pour que `Car` hérite de `Vehicle` :

```cpp
class Vehicle {
protected:
    std::string brand;
public:
    Vehicle(std::string b) : brand(b) {
        std::cout << "Vehicle " << brand << " created" << std::endl;
    }
    virtual ~Vehicle() {
        std::cout << "Vehicle " << brand << " destroyed" << std::endl;
    }
};

// Complète cette classe pour qu'elle hérite de Vehicle
class Car : public Vehicle {
private:
    int doors;
public:
    // Complète le constructeur
    Car(std::string brand, int d) : Vehicle(brand), doors(d) {
        std::cout << "Car with " << doors << " doors created" << std::endl;
    }
    
    ~Car() {
        std::cout << "Car with " << doors << " doors destroyed" << std::endl;
    }
};
```

## 📝 Exercice 3 : Redéfinition de méthodes

### Question
Complète la classe `ElectricCar` qui hérite de `Car` et redéfinit la méthode `start()` :

```cpp
class Vehicle {
public:
    virtual void start() {
        std::cout << "Vehicle starting..." << std::endl;
    }
};

class Car : public Vehicle {
public:
    void start() override {
        std::cout << "Car engine starting..." << std::endl;
    }
};

class ElectricCar : public Car {
public:
    // Redéfinis la méthode start() pour afficher un message spécifique
    void start() override {
        std::cout << "Electric car silently starting..." << std::endl;
    }
};
```

## 📝 Exercice 4 : Analyse de code

### Question
Analyse ce code et identifie les problèmes potentiels :

```cpp
class Base {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;
    
    Base() : privateVar(1), protectedVar(2), publicVar(3) {}
};

class Derived : public Base {
public:
    void accessMembers() {
        // publicVar = 10;        // ✅ OK
        // protectedVar = 20;     // ✅ OK
        // privateVar = 30;       // ❌ ERREUR - membre privé
    }
};
```

**Questions :**
1. Quels membres peuvent être accédés depuis `Derived` ?
2. Pourquoi `privateVar` ne peut-il pas être accédé ?

## 📝 Exercice 5 : Implémentation guidée de ScavTrap

### Instructions
Complète les parties manquantes du code `ScavTrap` :

```cpp
// ScavTrap.hpp
class ScavTrap : public ClapTrap {
public:
    // Constructeurs
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& rhs);
    ScavTrap& operator=(const ScavTrap& rhs);
    
    // Destructeur
    ~ScavTrap();
    
    // Redéfinition de la méthode attack
    void attack(const std::string& target);
    
    // Nouvelle méthode spécifique à ScavTrap
    void guardGate();
};
```

```cpp
// ScavTrap.cpp - Complète les constructeurs
ScavTrap::ScavTrap() : ClapTrap() {
    // Initialise avec les valeurs par défaut de ScavTrap
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    // Initialise avec les valeurs par défaut de ScavTrap
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap " << getName() << " is created!" << std::endl;
}
```

## 🎯 Questions de Réflexion

1. **Pourquoi utiliser l'héritage public ?**
   - Réfléchis à la différence entre `public`, `protected` et `private` dans l'héritage

2. **Quand utiliser l'héritage ?**
   - Dans quels cas l'héritage est-il approprié ?
   - Quelles sont les alternatives à l'héritage ?

3. **Gestion de la mémoire**
   - Pourquoi est-il important d'avoir des destructeurs virtuels dans certains cas ?

## 📊 Auto-évaluation

Après avoir complété ces exercices, évalue ta compréhension :

- [ ] Je comprends l'ordre de construction/destruction
- [ ] Je sais implémenter l'héritage en C++
- [ ] Je peux redéfinir des méthodes
- [ ] Je comprends les niveaux d'accès (public, protected, private)
- [ ] Je peux implémenter ScavTrap sans aide

## 🚀 Prochaines étapes

Une fois ces exercices complétés, tu seras prête à implémenter `ScavTrap` ! 

**Conseil :** Commence par créer les fichiers de base et teste chaque étape avant de passer à la suivante. 