# 🚗 Smart Car — Driver Safety System

## 📌 Présentation
Ce projet est un système de sécurité embarqué multi-modal conçu pour améliorer la sécurité routière. Il combine la **vision par ordinateur** et des **capteurs de gaz** pour protéger le conducteur en temps réel.

## 🚀 Fonctionnalités Clés
* **Détection de somnolence** : Analyse faciale en temps réel via Python et OpenCV pour surveiller l'état des yeux.
* **Alerte Alcoolémie** : Intégration d'un capteur MQ-3 avec l'Arduino UNO pour détecter la présence d'alcool.
* **Interface Matérielle** : Alertes visuelles et sonores immédiates via Buzzer, LED et écran LCD.
* **Communication Inter-système** : Établissement d'une liaison série fluide entre la couche vision (Python) et la couche hardware (Arduino).

## 🛠️ Technologies Utilisées
* **Langages** : Python, C++ (Arduino IDE)
* **Bibliothèques** : OpenCV (Haar Cascade)
* **Hardware** : Arduino UNO, Capteur MQ-3, Buzzer, LCD
* **Conception** : Design de PCB personnalisé (Outils CAD)

## 📁 Structure du projet
* `/python_vision` : Scripts de détection de somnolence.
* `/arduino_code` : Code source pour le microcontrôleur.
* `/hardware_design` : Schémas et fichiers du PCB.

---
*Étudiante en L2 TIC à l'ISIMM (Tunisie)*
