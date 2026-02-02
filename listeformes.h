#ifndef LISTEFORMES_H
#define LISTEFORMES_H

#include <vector>
#include "forme.h"

using namespace std;

class ListeFormes {
    private:
        vector<Forme*> formes;

    public:
        ListeFormes();
        ~ListeFormes();

        void ajouter(Forme* f);
        double surfaceTotale() const;
        void boiteEnglobante(double& minX, double& maxX, double& minY, double& maxY) const;

        int getNbFormes() const;
};

#endif
