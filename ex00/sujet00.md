# Exercice 00 - ClapTrap

## 📁 Dossier de rendu
**Dossier :** `ex00/`

## 📄 Fichiers à rendre
- `Makefile`
- `main.cpp`
- `ClapTrap.h` (ou `ClapTrap.hpp`)
- `ClapTrap.cpp`

## 🚫 Fonctions interdites
Aucune

## 🎯 Objectif

Et... C'est parti !

Vous devez implémenter une classe ! Quelle originalité !

## 📋 Spécifications

### Classe ClapTrap

La classe `ClapTrap` doit avoir les **attributs privés** suivants, initialisés aux valeurs spécifiées entre parenthèses :

- **Name** : passé en paramètre au constructeur
- **Hit points (10)** : représentant la santé du ClapTrap
- **Energy points (10)** : points d'énergie
- **Attack damage (0)** : dégâts d'attaque

### Fonctions membres publiques

Ajoutez les **fonctions membres publiques** suivantes pour que le ClapTrap se comporte de manière plus réaliste :

```cpp
void attack(const std::string& target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);
```

## ⚔️ Comportement

- **Attaque** : Quand un ClapTrap attaque, il fait perdre `<attack damage>` points de vie à sa cible
- **Réparation** : Quand un ClapTrap se répare, il regagne `<amount>` points de vie
- **Coût** : Attaquer et réparer coûtent chacun 1 point d'énergie
- **Limitations** : Le ClapTrap ne peut rien faire s'il n'a plus de points de vie ou d'énergie

> **Note importante :** Comme ces exercices servent d'introduction, les instances ClapTrap ne doivent pas interagir directement entre elles, et les paramètres ne feront pas référence à une autre instance de ClapTrap.

## 📝 Messages d'affichage

Dans toutes ces fonctions membres, vous devez afficher un message pour décrire ce qui se passe. Par exemple, la fonction `attack()` peut afficher quelque chose comme (sans les chevrons) :

```
ClapTrap <nom> attaque <cible>, causant <dégâts> points de dégâts !
```

Les **constructeurs et destructeur** doivent également afficher un message pour que vos pairs-évaluateurs puissent facilement voir qu'ils ont été appelés.

## 🧪 Tests

Implémentez et rendez vos propres tests pour vous assurer que votre code fonctionne comme attendu.

---

## 💡 Conseils pour l'implémentation

1. **Structure de classe** : Commencez par définir la classe avec ses attributs privés
2. **Constructeurs** : Implémentez le constructeur qui prend le nom en paramètre
3. **Fonctions membres** : Ajoutez les trois fonctions publiques demandées
4. **Gestion des états** : Vérifiez les points de vie et d'énergie avant chaque action
5. **Messages** : N'oubliez pas d'afficher les messages appropriés
6. **Tests** : Créez un `main.cpp` pour tester toutes les fonctionnalités

## 🎯 Points clés à retenir

- ✅ Gestion des points de vie et d'énergie
- ✅ Messages d'affichage pour toutes les actions
- ✅ Constructeurs et destructeur avec messages
- ✅ Tests complets dans le main
- ✅ Respect des contraintes (pas d'interaction directe entre instances)