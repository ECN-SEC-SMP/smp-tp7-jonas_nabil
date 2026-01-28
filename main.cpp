#include <iostream>
#include "point.h"

using namespace std;

int main() {
    cout << "=== TEST DES CONSTRUCTEURS ===" << endl;
    point p1;               // Par défaut (0,0)
    point p2(3.5, 2.0);     // Avec paramètres
    point p3(p2);           // Par recopie
    
    cout << "p1 (defaut) : " << p1 << endl;
    cout << "p2 (param)  : " << p2 << endl;
    cout << "p3 (recopie de p2) : " << p3 << endl;
    cout << "-----------------------------" << endl;

    cout << "\n=== TEST DES GETTERS ET SETTERS ===" << endl;
    p1.setX(10.0);
    p1.setY(-5.0);
    cout << "p1 apres setters : (" << p1.getX() << " , " << p1.getY() << ")" << endl;
    cout << "-----------------------------" << endl;

    cout << "\n=== TEST DES TRANSLATIONS ===" << endl;
    // Test translation par valeurs
    p1.translater(2.0, 5.0); 
    cout << "p1 apres translater(2, 5) : " << p1 << " (Attendu: 12, 0)" << endl;

    // Test translation par un autre Point
    point p_offset(1.0, 1.0);
    p1.translater(p_offset);
    cout << "p1 apres translater(p_offset) : " << p1 << " (Attendu: 13, 1)" << endl;
    cout << "-----------------------------" << endl;

    cout << "\n=== TEST DE L'OPERATEUR += ===" << endl;
    p2 += p_offset;
    cout << "p2 apres p2 += p_offset : " << p2 << " (Attendu: 4.5, 3)" << endl;
    cout << "-----------------------------" << endl;

    cout << "\n=== TEST DE LA CONST-CORRECTNESS ===" << endl;
    const point p_const(100, 100);
    cout << "Affichage d'un point constant : " << p_const << endl;
    cout << "Acces getX() sur point constant : " << p_const.getX() << endl;
    // p_const.setX(10); // Cette ligne doit generer une erreur si tu la decommentes !
    cout << "-----------------------------" << endl;

    cout << "\nFIN DES TESTS : Si tout s'affiche sans crash, bravo !" << endl;

    return 0;
}