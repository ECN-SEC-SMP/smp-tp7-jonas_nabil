#include <iostream>
#include "point.h"
#include "rectangle.h"
#include "carre.h"
#include "cercle.h"
#include "listeformes.h"

using namespace std;

int main(){
// 1. Test du Constructeur par défaut
    cout << "\n--- 1. Test Constructeur par defaut (p1) ---" << endl;
    Point p1; 
    // On affiche ce que la fonction retourne
    cout << "x : " << p1.getX() << endl; // Affiche 0
    cout << "y : " << p1.getY() << endl; // Affiche 0

    // 2. Test du Constructeur avec paramètres
    cout << "\n--- 2. Test Constructeur parametre (p2) ---" << endl;
    Point p2(15.5, 20.5);
    cout << "x : " << p2.getX() << endl; // Affiche 15.5
    cout << "y : " << p2.getY() << endl; // Affiche 20.5

    // 3. Test du Constructeur de copie
    cout << "\n--- 3. Test Constructeur de copie (p3 copie de p2) ---" << endl;
    Point p3(p2);
    cout << "x : " << p3.getX() << endl; // Affiche 15.5
    cout << "y : " << p3.getY() << endl; // Affiche 20.5

    // 4. Test des Setters
    cout << "\n--- 4. Test des Setters sur p1 ---" << endl;
    cout << "Modification de p1 vers (5.0, 5.0)..." << endl;
    p1.setX(5.0);
    p1.setY(5.0);
    cout << "x : " << p1.getX() << endl; // Affiche 5
    cout << "y : " << p1.getY() << endl; // Affiche 5

    // 5. Test de translater(double, double)
    cout << "\n--- 5. Test translater(double, double) sur p1 ---" << endl;
    // Note: Ton code actuel remplace (set) les valeurs.
    p1.translater(100.0, 200.0);
    cout << "x : " << p1.getX() << endl; // Affiche 100
    cout << "y : " << p1.getY() << endl; // Affiche 200

    // 6. Test de translater(Point)
    cout << "\n--- 6. Test translater(Point) sur p1 ---" << endl;
    // On applique les coordonnées de p2 (15.5, 20.5) à p1
    p1.translater(p2);
    cout << "x : " << p1.getX() << endl; // Affiche 15.5
    cout << "y : " << p1.getY() << endl; // Affiche 20.5

    // test operator

    cout << p1 << endl;


    p1+=p2;
    cout << p1 << endl;

    // ==========================================
    //           NOUVEAUX TESTS (FORMES)
    // ==========================================
  

    // --- TEST RECTANGLE ---
    cout << "\n--- Test Rectangle ---" << endl;
    Rectangle r(10, 5); // Largeur 10, Hauteur 5
    cout << r; // Affiche 10 et 5
    cout << "Surface : " << r.surface() << endl; // Affiche 50

    // --- TEST CARRE ---
    cout << "\n--- Test Carre ---" << endl;
    Carre k(4); // Côté 4
    cout << k; // Affiche 4
    cout << "Surface : " << k.surface() << endl; // Affiche 16

    // --- TEST CERCLE ---
    cout << "\n--- Test Cercle ---" << endl;
    Cercle c(3); // Rayon 3
    cout << c; // Affiche 3
    cout << "Surface : " << c.surface() << endl; // Affiche ~28.26

    // ==========================================
    //      TESTS METHODE TRANSLATER
    // ==========================================

    cout << "\n--- Test Translater sur Rectangle ---" << endl;
    Rectangle r2(8, 4);
    cout << "Rectangle avant translater :" << endl;
    cout << r2;
    cout << "Rectangle après translater(10, 5) :" << endl;
    r2.translater(10, 5);
    cout << r2;

    cout << "\n--- Test Translater sur Carre ---" << endl;
    Carre k2(3);
    cout << "Carré avant translater :" << endl;
    cout << k2;
    cout << "Carré après translater(7, 2) :" << endl;
    k2.translater(7, 2);
    cout << k2;

    cout << "\n--- Test Translater sur Cercle ---" << endl;
    Cercle c2(5);
    cout << "Cercle avant translater :" << endl;
    cout << c2;
    cout << "Cercle après translater(Point(15, 10)) :" << endl;
    Point pTranslate(15, 10);
    c2.translater(pTranslate);
    cout << c2;


    // ==========================================
    //      TESTS LISTE FORMES (EX 5)
    // ==========================================
    cout << "\n--- Test ListeFormes ---" << endl;
    ListeFormes liste;
    
    // On ajoute les formes existantes (attention elles ont ete modifiees par les tests precedents)
    // r2 (Rectangle 8x4) translate de (10,5)
    // k2 (Carre 3) translate de (7,2)
    // c2 (Cercle R=5) translate de (15,10)
    
    cout << "Ajout de r2, k2, c2 a la liste..." << endl;
    liste.ajouter(&r2);
    liste.ajouter(&k2);
    liste.ajouter(&c2);
    
    cout << "Nombre de formes : " << liste.getNbFormes() << endl;
    
    double surfTot = liste.surfaceTotale();
    cout << "Surface totale de la liste : " << surfTot << endl;
    // Verification manuelle : 
    // r2 : 8*4 = 32
    // k2 : 3*3 = 9
    // c2 : PI*5*5 = 78.5
    // Total attendu approx : 119.5
    
    double minX, maxX, minY, maxY;
    liste.boiteEnglobante(minX, maxX, minY, maxY);
    cout << "Boite englobante : " << endl;
    cout << "Min X : " << minX << " Max X : " << maxX << endl;
    cout << "Min Y : " << minY << " Max Y : " << maxY << endl;


    return 0;
}