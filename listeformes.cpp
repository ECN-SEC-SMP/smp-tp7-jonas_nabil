#include "listeformes.h"
#include <limits> // Pour utiliser numeric_limits (infini)

using namespace std;

// Constructeur
ListeFormes::ListeFormes() {
    // Le vecteur gère sa propre mémoire pour le stockage des pointeurs,
    // mais pas pour les objets pointés.
}

// Destructeur
ListeFormes::~ListeFormes() {
    // Si la ListeFormes est détruite, on vide juste le vecteur de pointeurs.
    // Attention: ça ne supprime pas les objets Forme pointés.
    // Dans ce TP, on suppose que les formes sont gérées ailleurs (ex: dans le main).
    formes.clear();
}

// Ajouter une forme à la liste
void ListeFormes::ajouter(Forme* f) {
    formes.push_back(f); // On ajoute le pointeur à la fin du vecteur
}

// Calculer la surface totale
double ListeFormes::surfaceTotale() const {
    double total = 0;
    // On parcourt toutes les formes de la liste
    for (Forme* f : formes) {
        // Polymorphisme : f appelle la méthode surface() spécifique à son type (Rectangle, Cercle...)
        total += f->surface();
    }
    return total;
}

// Calculer la boîte englobante de toutes les formes
void ListeFormes::boiteEnglobante(double& minX, double& maxX, double& minY, double& maxY) const {
    // Si la liste est vide, on met tout à 0
    if (formes.empty()) {
        minX = 0; maxX = 0; minY = 0; maxY = 0;
        return;
    }

    // On initialise avec les valeurs extrêmes inverses pour être sûr de les écraser
    minX = numeric_limits<double>::max();
    maxX = numeric_limits<double>::lowest();
    minY = numeric_limits<double>::max();
    maxY = numeric_limits<double>::lowest();

    // On parcourt chaque forme
    for (Forme* f : formes) {
        double fxMin, fxMax, fyMin, fyMax;
        // On récupère les bornes de la forme courante
        f->getBornes(fxMin, fxMax, fyMin, fyMax);

        // On met à jour les bornes globales si nécessaire
        if (fxMin < minX) minX = fxMin;
        if (fxMax > maxX) maxX = fxMax;
        if (fyMin < minY) minY = fyMin;
        if (fyMax > maxY) maxY = fyMax;
    }
}

// Obtenir le nombre de formes
int ListeFormes::getNbFormes() const {
    return formes.size();
}
