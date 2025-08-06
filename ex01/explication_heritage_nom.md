# Comment ScavTrap peut avoir un nom ? 🎯

## 🔍 Explication détaillée

### 1. **Héritage des membres privés**

Même si `_name` est **privé** dans `ClapTrap`, ScavTrap peut y accéder indirectement grâce aux **méthodes publiques** de la classe parent :

```cpp
// Dans ClapTrap.hpp (membre privé)
private:
    std::string _name;  // ← Privé, mais accessible via les méthodes publiques

// Méthodes publiques pour accéder au nom
public:
    void setName(std::string name);           // ← Setter
    const std::string getName() const;        // ← Getter
```

### 2. **Comment ScavTrap obtient son nom**

#### **Constructeur avec nom :**
```cpp
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    // ↑ Ici, on appelle le constructeur de ClapTrap avec le nom
    //   ClapTrap(name) initialise _name = name dans la classe parent
    
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap " << getName() << " is created!" << std::endl;
    //                                    ↑ Utilise la méthode publique getName()
}
```

#### **Ordre d'exécution :**
1. `ClapTrap(name)` → Initialise `_name = name` dans la classe parent
2. `setHitPoints(100)` → Modifie les HP spécifiques à ScavTrap
3. `setEnergyPoints(50)` → Modifie les EP spécifiques à ScavTrap
4. `setAttackDamage(20)` → Modifie l'AD spécifique à ScavTrap
5. `getName()` → Récupère le nom via la méthode publique de ClapTrap

### 3. **Accès au nom dans ScavTrap**

ScavTrap peut utiliser le nom de plusieurs façons :

```cpp
// ✅ Via la méthode publique (recommandé)
std::cout << "ScavTrap " << getName() << " attacks!" << std::endl;

// ✅ Via le setter si besoin de changer le nom
setName("NouveauNom");

// ❌ Accès direct impossible (membre privé)
// std::cout << _name << std::endl;  // ERREUR !
```

### 4. **Pourquoi cette approche ?**

#### **Avantages :**
- **Encapsulation** : Les données restent protégées
- **Flexibilité** : Peut changer l'implémentation sans casser les classes dérivées
- **Cohérence** : Interface uniforme via les getters/setters

#### **Alternative possible :**
Si tu voulais un accès direct, tu pourrais rendre `_name` **protected** :

```cpp
// Dans ClapTrap.hpp
protected:  // ← Au lieu de private
    std::string _name;
```

Mais l'approche actuelle avec les getters/setters est **meilleure** car elle respecte l'encapsulation.

### 5. **Test pratique**

Voici un petit test pour vérifier que ça fonctionne :

```cpp
int main() {
    ScavTrap scav("Bob");  // ← Crée un ScavTrap nommé "Bob"
    
    scav.attack("Target");  // ← Utilise le nom "Bob" dans le message
    scav.guardGate();       // ← Utilise le nom "Bob" dans le message
    
    return 0;
}
```

**Sortie attendue :**
```
ClapTrap Bob is created!
ScavTrap Bob is created!
ScavTrap Bob attacks Target, causing 20 points of damage!
ScavTrap Bob is now in Gate keeper mode
ScavTrap Bob is destroyed!
ClapTrap Bob is destroyed!
```

## 🎯 Conclusion

**ScavTrap a un nom grâce à :**
1. **Héritage** : Il hérite de tous les membres de ClapTrap
2. **Constructeur** : Il passe le nom au constructeur parent
3. **Méthodes publiques** : Il accède au nom via `getName()`

C'est un excellent exemple de **réutilisation de code** et d'**encapsulation** ! 💪 