# Questionnaire Avancé sur ScavTrap (Ex01)

## Questions sur l'Héritage

1. Dans la déclaration `class ScavTrap : public ClapTrap`, qu'est-ce que signifie le mot-clé `public` et quelles seraient les implications si on utilisait `private` à la place ?

2. Pourquoi le constructeur de ScavTrap utilise-t-il la syntaxe `: ClapTrap()` ou `: ClapTrap(name)` ? Expliquez l'importance de cette liste d'initialisation.

3. Dans l'opérateur d'assignation de ScavTrap, expliquez la ligne `ClapTrap::operator=(rhs)`. Pourquoi est-elle nécessaire ?

## Questions sur la Redéfinition de Méthodes

4. La méthode `attack` est redéfinie dans ScavTrap. Quelles sont les différences avec celle de ClapTrap ? Pourquoi avoir choisi de la redéfinir ?

5. Comment le compilateur sait-il quelle version de `attack` utiliser quand on appelle cette méthode sur un ScavTrap ?

## Questions sur l'Initialisation

6. Comparez les valeurs par défaut de ScavTrap avec celles de ClapTrap :
   - Quelles sont les différences ?
   - Pourquoi ces valeurs sont-elles initialisées dans le constructeur et non comme attributs de classe ?

## Questions sur la Mémoire et les Ressources

7. Quand on détruit un ScavTrap, dans quel ordre les destructeurs sont-ils appelés ? Pourquoi cet ordre est-il important ?

8. Si on crée un tableau de ScavTrap, que se passe-t-il en mémoire ? Expliquez le processus.

## Questions sur les Fonctionnalités Spécifiques

9. La méthode `guardGate()` est unique à ScavTrap. Pourrait-on l'appeler sur un pointeur de type ClapTrap qui pointe vers un ScavTrap ? Expliquez pourquoi.

10. Comment pourrait-on vérifier à l'exécution si un ClapTrap est en réalité un ScavTrap ?

## Exercice Pratique

Créez un programme qui démontre les concepts suivants :
1. Polymorphisme avec des pointeurs ClapTrap pointant vers des ScavTrap
2. Utilisation de la méthode spécifique guardGate()
3. Comparaison du comportement d'attaque entre ClapTrap et ScavTrap
4. Démonstration de l'ordre de construction et destruction

Sauvegardez votre réponse dans un fichier `heritage_pratique.cpp`

## Questions de Réflexion Avancée

11. Dans quel cas l'héritage public pourrait-il ne pas être le meilleur choix pour ScavTrap ? Proposez un scénario alternatif.

12. Comment pourrait-on améliorer la hiérarchie des classes pour faciliter l'ajout futur d'autres types de Traps ?

---

Pour répondre à ce questionnaire :
1. Créez un fichier `reponses_scavtrap.md` dans le dossier ex01
2. Copiez-y les questions et répondez-y
3. Pour l'exercice pratique, créez un fichier `heritage_pratique.cpp`
4. Une fois terminé, nous pourrons revoir ensemble vos réponses pour approfondir les concepts d'héritage.