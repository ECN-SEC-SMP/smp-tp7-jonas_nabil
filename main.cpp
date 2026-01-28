#include <iostream>
#include "point.h"

using namespace std;

int main(){
    cout << "\n--- 1. Test Constructeur par defaut (p1) ---" << endl;
    Point p1; 
    p1.getX(); // Doit afficher 0
    p1.getY(); // Doit afficher 0

    // 2. Test du Constructeur avec paramètres
    cout << "\n--- 2. Test Constructeur parametre (p2) ---" << endl;
    Point p2(15.5, 20.5);
    p2.getX(); // Doit afficher 15.5
    p2.getY(); // Doit afficher 20.5

    // 3. Test du Constructeur de copie
    cout << "\n--- 3. Test Constructeur de copie (p3 copie de p2) ---" << endl;
    Point p3(p2);
    p3.getX(); // Doit afficher 15.5 (comme p2)

    // 4. Test des Setters
    cout << "\n--- 4. Test des Setters sur p1 ---" << endl;
    cout << "Modification de p1 vers (5.0, 5.0)..." << endl;
    p1.setX(5.0);
    p1.setY(5.0);
    p1.getX(); // Doit afficher 5
    p1.getY(); // Doit afficher 5

    // 5. Test de translater(double, double)
    cout << "\n--- 5. Test translater(double, double) sur p1 ---" << endl;
    // Attention: Ton code remplace les valeurs (set) au lieu d'additionner
    p1.translater(100.0, 200.0);
    p1.getX(); // Doit afficher 100
    p1.getY(); // Doit afficher 200

    // 6. Test de translater(Point)
    cout << "\n--- 6. Test translater(Point) sur p1 ---" << endl;
    // On applique les coordonnées de p2 (15.5, 20.5) à p1
    p1.translater(p2);
    p1.getX(); // Doit afficher 15.5
    p1.getY(); // Doit afficher 20.5
}