# TestCV
Programme de test pour vérifier si l'installation de la bibliothèque OpenCV est fonctionnelle sous Windows avec CMake.

1. Après avoir cloné ce dépôt, vérifier que le chemin d'accès dans le `CMakeList.txt` correspond bien à votre installation.
2. Après le reload, vous pouvez copier dans le dossier `cmake-build-debug` ou `cmake-build-release` l'image de test `img.png`.
3. Editez la configuration d'exécution dans le menu : `Run / Edit Configurations` et ajoutez au `Program Arguments` le nom du fichier image que vous voulez tester : ici `img.png`. 
4. Compilez puis Exécutez, une fenêtre s'ouvre avec l'image en taille réelle.
