#   Chapitre 1
##  Les principes syntaxiques de base de [C](https://fr.wikipedia.org/wiki/C_(langage)), notion de fonction


### Histoire du langage C

Le langage C fut inventé pour la réécriture d'UNIX dans une forme plus lisible 
et plus facilement maintenable pour un programmeur. En ce sens, c'est un 
langage qui comporte des instructions et des structures de haut niveau, 
contairement à un programme qui serait écrit en langage assembleur, tout en 
limitant fortement l'abstraction du matériel, car il est destiné à concevoir un
système d'exploitation et donc manipuler le matériel de l'ordinateur. 

La syntaxe du langage C hérite très fortement de celle des langages B et BCPL, 
inventions respectives de Ken Thompson et Martin Richards. Ce sont des langages
de haut niveau, le B étant la version pour machines PDP et épurée du BCPL. 

Le langage BCPL, créé en 1967, fut une invention novatrice en programmation : 
langage système, il fut un des premiers langages dits _portables_. Cette 
portabilité était du à une idée révolutionnaire : le byte-code ou plutôt nommé à
l'époque _O-code_ (pour Object) et une machine virtuelle. 
C'est ce principe qui fut utilisé en 1995 avec Java et ensuite C#. 

Le C ne garda pas cette spécificité, étant destiné à générer le système UNIX 
pour une seule machine : le PDP-11.
Toutefois, lorsque le compilateur GCC fit son arrivée et que les architectures 
destinées à utiliser le langage C se diversifièrent, le bien connu compilateur 
repris cette idée dans la conception de son système et mis en place le principe
d'un jeu d'instruction virtuel dans lequel les sources sont compilées pour 
ensuite être projetées vers n'importe quelle architecture, c'est-à-dire du 
byte-code temporaire.

Un fichier source écrit en langage C contient diverses expressions. On les 
distingue selon trois types : les directives de préprocesseur, les instructions
et les commentaires.


### Commentaires en langage C

Un commentaire, comme son nom l'indique permet de commenter une ligne, un bloc
voir l'ensemble d'un fichier de code. Son but est de documenter, expliquer le 
fonctionnement du programme et la raison des choix qui sont pris lors d'une 
implémentation. 

Pour créer un commentaire en C, voici quelques exemples.

```C
// Ceci est un commentaire

/* Ceci est un commentaire également ! */

/*  Ceci est un 
    commentaire multiligne ! */
```


### Instructions du langage C

Le langage C a une syntaxe globalement impérative, c'est-à-dire décrivant les 
opérations en séquences d'instructions exécutées par l'ordinateur pour modifier 
l'état du programme. 

On distingue habituellement cinq types d'instructions dans un tel langage.

#### Séquences d'instruction

Une séquence d'instruction, appelée encore bloc d'instruction, est le fait de 
hierarchiser temporairement l'exécution de plusieurs instructions à la suite, 
autrement dit créer une suite d'instructions (la base de ce que l'on appelle un
programme). 

En C il existe plusieurs manières de créer des séquences, la plus connue étant 
le fameux point-virgule. 
Voici par exemple une suite d'instruction en langage C. 

```C
instruction0;
instruction1;
instruction2;
```

Mais, de façon plus subtile, on peut aussi réaliser une séquence avec des 
accolades.

```C
instruction0 {
    instruction1;
    instruction2;
}
```

Notez bien que ce deuxième exemple n'est en rien l'équivalent du premier. Mais 
l'_instruction0_ est bien ici une instruction de la séquence, non signalé par un
point virgule.

Il est également possible de réaliser des blocs de séquence, utilisables par le
compilateur pour améliorer l'optimisation du programme. 
On réalise généralement cela pour signaler que cette séquence ne doit pas être 
éclatée. 
Cela se fait avec des accolades. 

```C
{
    instruction0;
    instruction1;
    instruction2;
}

{
    instruction3;
    instruction4;
    instruction5;
}
```

#### Affectation (ou assignation)

Ce type d'instruction représente une opération de modification sur l'information
 en mémoire de l'ordinateur. 
 
Le langage C fait généralement une abstraction sur les cases mémoires par le 
biais de variables. Cette affectation necessite également de définir le type de 
la variable (le type étant la référence indiquant la structure de données à 
laquelle cette structure appartient : entier, flottant, tableau, charactère...)

Par exemple on réalise ici l'affectation du nombre 14 dans une variable nommée
_nombre_ et de type _int_ (pour Integer, soit nombre entier)

```C
int nombre = 14;
```

Il également possible d'affecter à une variable la valeur d'une autre.

```C
int nombre = 14;
int nombre2 = nombre;
```

#### Conditions

Première catégorie des instructions dites _de contrôle_, les instructions 
conditionnelles ne sont pas destinées à traiter l'information (contrairement à
l'affectation par exemple). 

Les conditions sont des instructions permettant de changer le comportement du 
déroulement du programme en fonction de valeurs. 

Par exemple, imaginons un programme naïf d'une porte de coffre fort à 
combinaison. Ce type de programme doit donc vérifier que l'utilisateur du coffre
a bien tapé le bon code pour ouvrir la porte. _Si_ le code est bon, _alors_ la
porte peut s'ouvrir. 

En C voici ce que cela donne. 

```C
int code_porte = 1234;                  // Le code de la porte enregistré
int code_saisi_par_utilisateur = 6666;  // Le code que l'utilisateur tape
int porte_ouverte = 0;                  // A 1 si la porte est ouverte, 0 sinon

if (code_porte == code_saisi_par_utilisateur) {
    porte_ouverte = 1;                  // La porte s'ouvre !
}
```

Plus généralement. 

```C
if (condition) {
    instruction;
}
```

Il est également possible de prévoir un second cas lorsque la condition est non
respectée.

```C
if (condition) {
    instruction_si_respecté;
} else {
    instruction_sinon;
}
```
