# Points Clés à Retenir de l'Exercice 00 - ClapTrap

## 1. Concepts Fondamentaux
- **Encapsulation** : Utilisation d'attributs privés avec getters/setters
- **Convention de Coplien** : Implémentation des constructeurs et destructeur essentiels
- **Gestion des ressources** : Points de vie et points d'énergie

## 2. Bonnes Pratiques Apprises
- Vérification des conditions avant les actions (points de vie, énergie)
- Protection des attributs via l'encapsulation
- Messages d'information clairs pour suivre l'état du programme
- Gestion des cas d'erreur (mort, plus d'énergie)

## 3. Structure de Base d'une Classe
```cpp
class ClapTrap {
private:
    // Attributs privés
    
public:
    // Constructeurs (défaut, paramétré, copie)
    // Opérateur d'assignation
    // Méthodes publiques
    // Destructeur
};
```

## 4. Points Importants pour la Suite (ex01, ex02, ex03)
- Cette classe servira de base pour l'héritage
- Les mécanismes de vérification (isNotAlive, hasNotEnergy) seront réutilisés
- La structure des méthodes (attack, takeDamage, beRepaired) sera héritée

## 5. Ce Qu'il Faut Retenir pour l'Héritage
- Les attributs sont privés : les classes filles ne pourront pas y accéder directement
- Les méthodes sont publiques : elles seront accessibles aux classes filles
- Le constructeur initialise les attributs avec des valeurs par défaut
- Chaque action (attack, repair) consomme de l'énergie

## 6. Astuces de Débogage
- Utiliser les getters pour vérifier l'état
- Afficher des messages clairs pour suivre le déroulement
- Vérifier les conditions avant chaque action

---

Ces concepts seront essentiels pour comprendre les exercices suivants qui introduiront l'héritage avec ScavTrap, FragTrap et DiamondTrap.