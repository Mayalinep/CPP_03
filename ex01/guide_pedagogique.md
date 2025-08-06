# Guide Pédagogique - Apprendre l'Héritage en C++

## 🎯 Objectif
T'apprendre l'héritage étape par étape, sans faire le travail à ta place.

## 📚 Étape 1 : Comprendre l'Héritage

### Qu'est-ce que l'héritage ?
L'héritage permet à une classe d'hériter des propriétés et méthodes d'une autre classe.

**Exemple simple :**
```cpp
// Classe de base (parent)
class Animal {
public:
    void manger() {
        std::cout << "Je mange" << std::endl;
    }
};

// Classe dérivée (enfant) qui hérite de Animal
class Chien : public Animal {
    // Chien hérite automatiquement de la méthode manger()
};
```

### Syntaxe de base :
```cpp
class ClasseDerivee : public ClasseDeBase {
    // Membres spécifiques à la classe dérivée
};
```

## 🎯 Exercice 1 : Première approche

**Tâche :** Crée une classe simple qui hérite d'une autre.

1. Ouvre ton éditeur
2. Crée un fichier `test_heritage.cpp`
3. Écris ce code de base :

```cpp
#include <iostream>
#include <string>

class Animal {
public:
    Animal() {
        std::cout << "Animal créé" << std::endl;
    }
    
    void parler() {
        std::cout << "Je suis un animal" << std::endl;
    }
};

// À TOI : Complète cette classe pour qu'elle hérite de Animal
class Chien : public Animal {
public:
    Chien(){};
    void parler();
    // À TOI : Ajoute un constructeur qui affiche "Chien créé"
    // À TOI : Redéfinis la méthode parler() pour afficher "Wouf wouf!"
};

int main() {
    Chien monChien;
    monChien.parler();
    return 0;
}
```

**Questions pour toi :**
1. Que penses-tu qu'il va se passer quand tu crées un `Chien` ?
2. Quelle méthode sera appelée : celle d'`Animal` ou celle de `Chien` ?

## 🎯 Exercice 2 : Constructeurs dans l'héritage

### Principe important :
Quand tu crées un objet d'une classe dérivée, le constructeur de la classe de base est **toujours** appelé en premier.

**Exemple :**
```cpp
class Animal {
public:
    Animal() {
        std::cout << "Animal créé" << std::endl;
    }
};

class Chien : public Animal {
public:
    Chien() {
        std::cout << "Chien créé" << std::endl;
    }
};

int main() {
    Chien chien; // Affiche : "Animal créé" puis "Chien créé"
    return 0;
}
```

### Syntaxe pour appeler le constructeur de la classe de base :
```cpp
class Chien : public Animal {
public:
    Chien() : Animal() {  // Appelle le constructeur d'Animal
        std::cout << "Chien créé" << std::endl;
    }
};
```

## 🎯 Exercice 3 : Appliquer à ScavTrap

**Maintenant, à TOI de faire :**

1. **Étape 1 :** Crée le fichier `ScavTrap.hpp`
   - Déclare la classe `ScavTrap` qui hérite de `ClapTrap`
   - Ajoute les constructeurs et destructeur

2. **Étape 2 :** Crée le fichier `ScavTrap.cpp`
   - Implémente les constructeurs en appelant ceux de `ClapTrap`
   - Implémente le destructeur

3. **Étape 3 :** Teste étape par étape

## 🎯 Questions pour te guider :

### Question 1 : Héritage
```cpp
// Comment déclarer que ScavTrap hérite de ClapTrap ?
class ScavTrap : public ClapTrap {
    // ...
};
```

### Question 2 : Constructeur
```cpp
// Comment appeler le constructeur de ClapTrap depuis ScavTrap ?
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    // ...
}
```

### Question 3 : Valeurs par défaut
```cpp
// Comment initialiser les valeurs spécifiques à ScavTrap ?
// (100 HP, 50 EP, 20 AD au lieu de 10, 10, 0)
```

## 🎯 Plan d'action pour toi :

1. **Lis** ce guide attentivement
2. **Essaie** l'exercice 1 avec Animal/Chien
3. **Comprends** l'ordre de construction
4. **Applique** à ScavTrap étape par étape
5. **Pose des questions** si tu bloques

## 🤔 Questions pour toi :

1. **Avant de commencer :** Que comprends-tu de l'héritage maintenant ?
2. **Pendant l'implémentation :** À quelle étape es-tu bloquée ?
3. **Après les tests :** Pourquoi l'ordre de construction est-il important ?

**N'hésite pas à me poser des questions spécifiques !** Je suis là pour te guider, pas pour faire le travail à ta place. 