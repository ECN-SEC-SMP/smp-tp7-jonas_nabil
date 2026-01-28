#include <iostream>
#include "point.h"

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
}