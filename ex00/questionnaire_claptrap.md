# Questionnaire sur ClapTrap (Ex00)

## Questions Théoriques

1. Quels sont les 4 attributs privés de la classe ClapTrap et leurs types ?

2. Quelles sont les valeurs par défaut de ces attributs lors de la création d'un ClapTrap ?

3. Expliquez la différence entre le constructeur par défaut et le constructeur avec paramètre.

4. Pourquoi avons-nous besoin d'un constructeur de copie et d'un opérateur d'assignation ?

5. Que vérifie la condition `if (this != &rhs)` dans l'opérateur d'assignation ?

## Questions sur le Comportement

6. Dans quelles conditions un ClapTrap ne peut-il pas attaquer ? (citez les 2 cas)

7. Que se passe-t-il quand un ClapTrap attaque en termes de points d'énergie ?

8. Expliquez le fonctionnement de la méthode `beRepaired`. Quelles sont les conditions nécessaires pour qu'un ClapTrap puisse se réparer ?

9. Pourquoi avons-nous les méthodes `isNotAlive()` et `hasNotEnergy()` ? Quel est leur rôle ?

10. Comment le destructeur de ClapTrap nous informe-t-il de la destruction d'une instance ?

## Exercice Pratique

Créez un petit programme qui démontre les comportements suivants :
1. Créez un ClapTrap nommé "Warrior"
2. Faites-le attaquer une cible jusqu'à ce qu'il n'ait plus de points d'énergie
3. Essayez de le faire se réparer
4. Faites-le subir des dégâts jusqu'à ce qu'il soit détruit
5. Essayez de le faire attaquer une fois mort

Sauvegardez votre réponse dans un fichier `reponses_pratiques.cpp`

## Questions de Réflexion

11. Pourquoi est-il important d'avoir des getters et des setters plutôt que d'accéder directement aux attributs ?

12. Comment pourrait-on améliorer la classe ClapTrap ? Proposez au moins deux améliorations possibles.

---

Pour répondre à ce questionnaire :
1. Créez un fichier `reponses_claptrap.md` dans le dossier ex00
2. Copiez-y les questions et répondez-y
3. Pour l'exercice pratique, créez un fichier `reponses_pratiques.cpp`
4. Une fois terminé, nous pourrons revoir ensemble vos réponses pour clarifier les points qui ne sont pas clairs.