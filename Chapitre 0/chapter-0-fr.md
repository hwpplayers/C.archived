#   Chapitre 0
##  Présentation des interfaces de compilation ([GCC](https://fr.wikipedia.org/wiki/GNU_Compiler_Collection), [Makefile](https://fr.wikipedia.org/wiki/Makefile), par exemple)


### Le compilateur C

Créé en 1972 au sein des laboratoires Bell par Dennis Ritchie et Ken Thompson, 
le langage C est intrinsequement lié à l'implémentation d'UNIX.
Il y a de nombreux compilateurs pour ce langage, et de nombreux outils à travers
l'histoire. 

Les premiers compilateurs sont ceux du C dit "classique", que l'on nomme le K&R, 
originellement conçu par Dennis Ritchie et Brian Kernighan. Ces compilateurs 
avaient l'inconvénients d'être tous incompatibles entre-eux, car il n'y avait 
pas de réel standard. 

Dès 1980, le langage C se stabilisa dans sa forme ANSI C, et les premiers 
compilateurs standardisés firent leur apparition, notamment l'Amsterdam Compiler
Kit d'Andrew Tanenbaum. C'est à cette periode que le projet GNU est lancé par
Richard M. Stallman, et qu'il propose à Andrew Tanenbaum d'intégrer son 
compilateur dans le projet GNU. Ce dernier refuse la proposition, préférant que
son compilateur demeure un logiciel propriétaire. C'est ainsi que GCC est né et
que sa première version est distribuée en 1987.

Aujourd'hui GCC (pour GNU Compiler Collection) supporte de nombreux langages de 
programmation, et est un des compilateurs C les plus utilisés avec Clang (LLVM). 
La différence entre ces deux compilateurs est avant tout une différence de 
licence, GCC étant distribué sous licence GPL et Clang sous licence BSD+Apache,
plus adaptée à une intégration dans des systèmes d'exploitation sous licences 
permissives.

### Les scripts de compilation

Très tôt dans l'histoire, le processus de compilation des programmes est devenu
complexe et beaucoup plus long que par le passé. Les projets devenaient lourds, 
et la séparation de morceaux de code dans différent fichiers devenait chose
nécessaire. Dans les années 1970, la plupart des projets utilisaient des scripts
shell pour compiler leurs codes. Cela avait deux inconvénients : la nécessité de
recompiler tout le projet au moindre changement, et un véritable casse-tête des 
dépendances. 

En 1977, le Dr Stuart Feldman, aux laboratoires Bell, conçoit Make. Ce logiciel
repose sur une syntaxe modifiée des scripts shell et le concept de recettes. Ces
recettes sont des morceaux de code dont le but est de générer des cibles à 
partir de leurs dépendences. 
Ainsi, si pour compiler un projet on avait besoin de cinq fichiers de code C, le
fichier de script Make, appelé un Makefile, contenait alors cinq recettes pour 
chaque fichier C à compiler, puis une sixième recette liant les cinq fichiers en
un exécutable. 
La compilation séparée était née. 

### Utilisation des Makefiles

Les Makefiles utilisent une syntaxe basée sur le rapport cible/dépendance.

```Makefile
cible:  dépendances
    commande pour générer la cible

```

Imaginons que l'on souhaite écrire le Makefile correspondant au projet composé 
de cinq fichiers de code présenté plus tôt. 
Il faut alors cinq recettes pour chaque cibles. Par exemple, pour la première 
cible, cela donne : 

```Makefile
objet1:   fichier1.c
    commande pour compiler le fichier 1 
```

Enfin, il faut une cible générant l'exécutable final :

```Makefile
executable: objet1 objet2 objet3 objet4 objet5
    commande pour lier les cinq objets en un exécutable
```

Nous étudierons par la suite en détail la génération d'un fichier exécutable. 
