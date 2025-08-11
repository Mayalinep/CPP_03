# Questionnaire sur FragTrap (Ex02)

## Questions sur l'Héritage Multiple

1. Maintenant que nous avons ClapTrap, ScavTrap et FragTrap, dessinez un diagramme de leur relation d'héritage. Quelle est la structure ?

2. Pourquoi est-il important que les trois classes aient des messages différents pour les mêmes actions ?

## Questions sur les Différences

3. Comparez les valeurs de base des trois classes :
   - ClapTrap (HP, Energy, Attack)
   - ScavTrap (HP, Energy, Attack)
   - FragTrap (HP, Energy, Attack)
   Pourquoi ces différences ?

4. Comparez les capacités spéciales :
   - ScavTrap : guardGate()
   - FragTrap : highFivesGuys()
   Quelle est la différence conceptuelle entre ces deux capacités ?

## Questions Techniques

5. Si on crée un tableau contenant des ClapTrap, ScavTrap et FragTrap, comment s'assurer que chaque classe utilise sa propre version des méthodes ?

6. Comment pourrait-on faire pour qu'un FragTrap puisse utiliser guardGate() de ScavTrap ? Serait-ce une bonne idée ?

## Questions sur la Gestion de la Mémoire

7. Quand on détruit un objet de type FragTrap, expliquez l'ordre exact des destructeurs appelés.

8. Si on copie un FragTrap, quelles parties de ClapTrap sont copiées et comment ?

## Exercice Pratique

Créez un programme qui démontre :
1. La création des trois types de Traps
2. L'utilisation de leurs capacités spéciales
3. Une comparaison de leurs attaques
4. La destruction dans le bon ordre

Sauvegardez votre réponse dans un fichier `test_all_traps.cpp`

## Questions de Réflexion

9. Comment pourrait-on améliorer le design de ces classes pour éviter la répétition de code ?

10. Si on voulait ajouter une nouvelle capacité commune à ScavTrap et FragTrap mais pas à ClapTrap, quelle serait la meilleure approche ?

---

Pour répondre à ce questionnaire :
1. Créez un fichier `reponses_fragtrap.md`
2. Pour l'exercice pratique, créez `test_all_traps.cpp`
3. N'oubliez pas de tester tous les comportements dans votre programme

Ce questionnaire vous aidera à comprendre les concepts plus avancés de l'héritage et à voir les différences entre les trois classes.
