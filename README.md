# IoT-Weather-Station-Arduino

# Station Météo Connectée (IoT Weather Station)
**Projet de Conception en Systèmes Embarqués et Acquisition de Données**

## Présentation du projet
Ce projet consiste en la réalisation d'une station de monitoring environnemental autonome basée sur la plateforme Arduino. Le système permet de mesurer en temps réel la température et le taux d'humidité ambiant, d'afficher ces informations sur un écran local et de les transmettre via une interface série pour un suivi informatique.

## Architecture Matérielle
Le dispositif repose sur l'interfaçage de plusieurs composants électroniques :
* **Microcontrôleur :** Arduino UNO R3.
* **Capteur Environnemental :** DHT11 (Capteur numérique de température et d'humidité).
* **Interface d'Affichage :** Écran LCD 16x2 piloté par la bibliothèque LiquidCrystal.
* **Communication :** Liaison série (UART) pour le monitoring de données sur PC.

## Fonctionnement Technique
Le programme exploite un protocole de communication monocâble (One-Wire) pour interroger le capteur DHT11. Les données brutes sont ensuite traitées par le microcontrôleur pour être converties en unités physiques Celsius (°C) et en pourcentage d'humidité (%). 

La logique du code assure :
1. L'initialisation des périphériques de sortie.
2. La lecture cyclique des variables environnementales (toutes les 5 secondes).
3. La gestion d'erreurs en cas de défaillance du capteur (NaN checking).
4. La mise à jour dynamique de l'affichage LCD et du terminal série.

## Compétences Validées
* **Développement C++ :** Gestion des bibliothèques externes et des structures conditionnelles.
* **Instrumentation :** Manipulation de capteurs numériques et étalonnage des lectures.
* **Protocoles de communication :** Utilisation des interfaces de communication série pour le débogage et l'export de données.
* **Ingénierie Système :** Intégration Hardware/Software pour la création d'un produit fini fonctionnel.

## Installation et Utilisation
1. Télécharger le code source situé dans le dossier `src/`.
2. Installer les bibliothèques `DHT.h` et `LiquidCrystal.h` via l'IDE Arduino.
3. Effectuer le câblage selon les définitions de pins présentes dans le fichier source.
4. Téléverser le programme et observer les mesures sur l'écran LCD.

---
**Développeur :** Dylan Bassinga
*Projet réalisé dans le cadre du perfectionnement en électronique et systèmes embarqués (2026).*
