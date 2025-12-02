Bon je vais essayer de faire un readme sérieux pour une fois : 

C - Listes Chaînées Simples (Singly Linked Lists)

Description du Projet :

Ce projet fait partie du programme d'étude des structures de données en C. L'objectif principal est de comprendre et d'implémenter les opérations de base sur les listes chaînées simples (singly linked lists).

Une liste chaînée est une structure de données linéaire où les éléments ne sont pas stockés de manière contiguë en mémoire. Chaque élément, appelé un nœud (node), contient des données et une référence (ou pointeur) vers le nœud suivant dans la séquence.

Fichiers et Prototypes :

Tous les fichiers de ce répertoire doivent être compilés sur Ubuntu 20.04 LTS en utilisant gcc avec les options suivantes : -Wall -Werror -Wextra -pedantic -std=gnu89.

lists.h

Ce fichier d'en-tête (header file) contient la définition de la structure de la liste chaînée simple (list_t) ainsi que les prototypes de toutes les fonctions utilisées dans le projet.

/**
 * struct list_s - structure d'un nœud de liste chaînée simple
 * @str: La chaîne de caractères (allouée dynamiquement)
 * @len: La longueur de la chaîne
 * @next: Pointeur vers le nœud suivant
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);


0-print_list.c

Ce fichier contient l'implémentation de la fonction de base pour afficher le contenu de la liste.

Fichier :

Fonction

Description :

0-print_list.c

print_list

Imprime tous les éléments d'une liste list_t.

Prototype :

size_t print_list(const list_t *h);


Comportement Spécifique :

1 - Parcours : La fonction parcourt la liste du début (h) jusqu'à ce que le pointeur next soit NULL.

2 - Affichage : Chaque nœud est affiché au format [longueur] chaîne.

3 - Cas NULL : Si l'élément str d'un nœud est NULL, la fonction affiche : [0] (nil).

4 - Retour : La fonction retourne le nombre total de nœuds présents dans la liste (size_t).
