#ifndef LISTEFORMES_H
#define LISTEFORMES_H

#include <vector>
#include "forme.h"

using namespace std;

// Classe ListeFormes qui sert de conteneur pour stocker plusieurs formes.
// Elle utilise un vecteur de pointeurs vers Forme (Forme*) pour le polymorphisme.
class ListeFormes {
    private:
        // Vecteur qui stocke les adresses des objets Forme (Rectangle, Cercle, etc.)
        vector<Forme*> formes;

    public:
        // Constructeur par défaut
        ListeFormes();
        // Destructeur
        ~ListeFormes();

        // Ajoute une forme à la liste
        void ajouter(Forme* f);
        
        // Calcule la surface totale de toutes les formes de la liste
        double surfaceTotale() const;
        
        // Calcule la boîte qui englobe toutes les formes de la liste
        void boiteEnglobante(double& minX, double& maxX, double& minY, double& maxY) const;

        // Retourne le nombre de formes dans la liste
        int getNbFormes() const;
};

#endif
