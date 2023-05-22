# Reverse Bin Challenge 3

Ce chellenge consiste à analyser et comprendre le fonctionnement interne d'un fichier binaire, souvent un exécutable, afin d'obtenir des informations sur son fonctionnement, son comportement ou ses vulnérabilités.

### Étape 1

``strings ./bin``
``Chercher dans l'output de strings le flag``

### Étape 2

``Comprendre que les flags ont été obfusqué``
``Utiliser gdb``
``Comprendre que gdb a été bloqué``

### Étape 2

``Analyser le code assembleur du binaire``
``Trouver la fonction qui bloque GDB``
``Réécrire sur l'appel de la fonction, pour qu'elle ne soit plus appelée.``
``Éxecuter le programme``

### Étape 3

``Trouver la fonction qui obfusque et qui désobfusque.``
``Se servir de cette fonction pour décoder ce qu'il y a dans strings avec la clée qui est aussi donnée.``
``Comprendre que ce qui en résulte sont en binaire et en Hexadécimal.``
``Aller sur un site pour décoder mot par mot jusqu'à trouver un résultat.``


## Auteurs
* **SizzleUnrlsd** _alias_ [@SizzleUnrlsd](https://github.com/SizzleUnrlsd)
