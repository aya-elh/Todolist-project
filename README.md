# 📌 Smart Task Manager – Gestionnaire de Tâches en C++

## 📖 Description

Smart Task Manager est une application console développée en **C++** permettant de gérer efficacement des tâches personnelles et professionnelles.

Le projet a été réalisé dans le cadre d’un mini-projet visant à appliquer les concepts avancés de **Programmation Orientée Objet (POO)** ainsi que les bonnes pratiques de développement avec **Git/GitHub** et **CMake**.

L’application permet :

✅ Ajouter des tâches  
✅ Supprimer des tâches  
✅ Afficher toutes les tâches  
✅ Trier les tâches selon leur urgence  
✅ Filtrer les tâches par catégorie  
✅ Sauvegarder les tâches dans un fichier  
✅ Charger les tâches enregistrées  
✅ Gérer plusieurs types de tâches grâce au polymorphisme  

---

# 🚀 Fonctionnalités

## Gestion des tâches

Chaque tâche possède :

- Titre
- Catégorie
- Priorité (LOW / MEDIUM / HIGH)
- Statut
- Type de tâche
- Niveau d'urgence

Exemple :

```text
TASK ID : 0

+----------------------------------+
| Type      : Work
| Title     : Finish Project
| Category  : School
| Priority  : HIGH
| Status    : Urgent
| Urgency   : 6
+----------------------------------+
```

---

## Types de tâches

Le projet implémente plusieurs types :

### WorkTask

Tâches professionnelles :

Exemples :

- Travail
- Études
- Projets

---

### PersonalTask

Tâches personnelles :

Exemples :

- Sport
- Santé
- Vie quotidienne

---

Chaque type calcule son **urgence différemment via polymorphisme**.

Le gestionnaire de tâches ne connaît pas le type concret.

---

# 🧠 Concepts C++ utilisés

Ce projet utilise :

✔ Classes & Objets

✔ Encapsulation

✔ Héritage

✔ Polymorphisme

✔ Fonctions virtuelles

✔ Classes abstraites

✔ Gestion dynamique mémoire (`new/delete`)

✔ Surcharge potentielle

✔ STL (`vector`, `sort`)

✔ Manipulation fichiers (`fstream`)

✔ Architecture modulaire

✔ Compilation avec CMake

---

# 📁 Structure du projet

```text
Todolist-project/
│
├── include/
│   ├── Task.h
│   ├── WorkTask.h
│   ├── PersonalTask.h
│   ├── TaskManager.h
│   └── FileManager.h
│
├── src/
│   ├── main.cpp
│   ├── Task.cpp
│   ├── WorkTask.cpp
│   ├── PersonalTask.cpp
│   ├── TaskManager.cpp
│   └── FileManager.cpp
│
├── build/
│
├── tasks.txt
│
├── CMakeLists.txt
│
└── README.md
```

---

# ⚙ Installation

## 1. Cloner le projet

```bash
git clone https://github.com/VOTRE-USERNAME/Todolist-project.git
```

Entrer dans le dossier :

```bash
cd Todolist-project
```

---

## 2. Créer le dossier build

```bash
mkdir build
cd build
```

---

## 3. Générer les fichiers CMake

```bash
cmake ..
```

---

## 4. Compiler

Sous Visual Studio :

```bash
cmake --build . --config Debug
```

---

## 5. Exécuter

```bash
cd Debug
.\TodoList.exe
```

---

# 📌 Utilisation

Au lancement :

```text
=========================================
SMART TASK MANAGER
=========================================

1. Add Task
2. Show Tasks
3. Delete Task
4. Sort Tasks by Urgency
5. Filter by Category
6. Save Tasks
7. Load Tasks
0. Exit
```

---

## Ajouter une tâche

L’utilisateur renseigne :

Exemple :

```text
Title : Study
Category : School
Priority : 3
Status : Urgent
Type : Work
```

---

## Afficher les tâches

Affiche :

- Type
- Titre
- Catégorie
- Priorité
- Statut
- Urgence

---

## Trier les tâches

Le tri est effectué selon :

```text
Urgence décroissante
```

Les tâches les plus urgentes apparaissent en premier.

---

## Filtrer

Permet d’afficher uniquement :

Exemple :

```text
Category : School
```

---

## Sauvegarder

Les tâches sont enregistrées dans :

```text
tasks.txt
```

---

## Charger

Recharge automatiquement les tâches sauvegardées.

---

# 🔥 Exemple d’exécution

```text
TASK ID : 0

+----------------------------------+
| Type      : Work
| Title     : Finish Project
| Category  : School
| Priority  : HIGH
| Status    : Urgent
| Urgency   : 6
+----------------------------------+
```

---

# 🛠 Outils utilisés

- C++
- CMake
- Git
- GitHub
- Visual Studio
- PowerShell

---

# 👨‍💻 Auteur

Projet réalisé par :
- AYA EL HALLABI
- BOUDERQA ABDESSAMAD
- OUCHEN YOUNES


