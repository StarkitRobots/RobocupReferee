# Referee Client

## Problèmes à résoudre
- Appel ambigu à start dans main.cpp
- Utilisation de la méthode getNode(string,string) qui est déclarée mais pas implémentée (Utils/configfile/ConfigFile.h)

## Build

Pour build les tests, il faut utiliser cmake en se plaçant dans le dossier
build.

```
cd build
cmake ..
make
```

Cela produira l'exécutable Test, permettant d'illustrer le fonctionnement d'un
RefereeClient.

## GameController

Il peut être téléchargé à l'adresse suivante :
http://www.informatik.uni-bremen.de/humanoid/pub/Website/Downloads/GameController-HL-Brazil-20140626.zip

## Utilisation du test

Lancement du game controller

> java -jar -l hl_kid

Lancement du test (affichage des données)

> ./Test

