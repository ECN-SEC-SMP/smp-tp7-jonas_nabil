#include "listeformes.h"
#include <limits> // For infinity

using namespace std;

ListeFormes::ListeFormes() {
    // Vector manages its own memory for pointers, 
    // but we need to be careful if we own the objects or not.
    // In this TP context, valid pointers are usually passed from main.
}

ListeFormes::~ListeFormes() {
    // Depending on ownership implementation. 
    // Usually in simple TPs we might not delete pointers if they are stack allocated in main,
    // or we might if they are new'ed.
    // However, given the context of existing code using stack objects often, 
    // we should just clear likely, or assume main manages lifetime if passed by address.
    // BUT, usually "adding" to a list implies shared ownership or simple aggregation.
    // Let's assume aggregation used via `main` stack variables or `new`.
    // If objects are passed as pointers, clearing vector is enough. 
    // If we want to be safe about clean up, we should know ownership policy.
    // Since we don't know, we'll just clear the vector.
    formes.clear();
}

void ListeFormes::ajouter(Forme* f) {
    formes.push_back(f);
}

double ListeFormes::surfaceTotale() const {
    double total = 0;
    for (Forme* f : formes) {
        total += f->surface();
    }
    return total;
}

void ListeFormes::boiteEnglobante(double& minX, double& maxX, double& minY, double& maxY) const {
    if (formes.empty()) {
        minX = 0; maxX = 0; minY = 0; maxY = 0;
        return;
    }

    minX = numeric_limits<double>::max();
    maxX = numeric_limits<double>::lowest();
    minY = numeric_limits<double>::max();
    maxY = numeric_limits<double>::lowest();

    for (Forme* f : formes) {
        double fxMin, fxMax, fyMin, fyMax;
        f->getBornes(fxMin, fxMax, fyMin, fyMax);

        if (fxMin < minX) minX = fxMin;
        if (fxMax > maxX) maxX = fxMax;
        if (fyMin < minY) minY = fyMin;
        if (fyMax > maxY) maxY = fyMax;
    }
}

int ListeFormes::getNbFormes() const {
    return formes.size();
}
