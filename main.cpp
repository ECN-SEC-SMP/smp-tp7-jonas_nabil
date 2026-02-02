#include <iostream>
#include "point.h"
#include "rectangle.h"
#include "carre.h"
#include "cercle.h"
#include "listeformes.h"

using namespace std;

int main(){
    // ==========================================
    //           TESTS DE LA CLASSE POINT
    // ==========================================
    
    // 1. Test du Constructeur par défaut
    cout << "\n--- 1. Test Constructeur par defaut (p1) ---" << endl;
    Point p1; // On crée un point p1 sans rien préciser, il doit être à (0,0)
    cout << "x : " << p1.getX() << endl; // Vérification : Doit afficher 0
    cout << "y : " << p1.getY() << endl; // Doit afficher 0

    // 2. Test du Constructeur avec paramètres
    cout << "\n--- 2. Test Constructeur parametre (p2) ---" << endl;
    Point p2(15.5, 20.5); // On crée un point p2 directement aux coordonnées voulues
    cout << "x : " << p2.getX() << endl; // Vérif x
    cout << "y : " << p2.getY() << endl; // Vérif y

    // 3. Test du Constructeur de copie
    cout << "\n--- 3. Test Constructeur de copie (p3 copie de p2) ---" << endl;
    Point p3(p2); // On crée p3 en copiant toutes les infos de p2
    cout << "x : " << p3.getX() << endl; // Doit être identique à p2
    cout << "y : " << p3.getY() << endl; 

    // 4. Test des Setters (modificateurs)
    cout << "\n--- 4. Test des Setters sur p1 ---" << endl;
    cout << "Modification de p1 vers (5.0, 5.0)..." << endl;
    p1.setX(5.0); // On change X manuellement
    p1.setY(5.0); // On change Y manuellement
    cout << "x : " << p1.getX() << endl; // Doit être 5
    cout << "y : " << p1.getY() << endl; // Doit être 5

    // 5. Test de la méthode translater (avec des valeurs brutes)
    cout << "\n--- 5. Test translater(double, double) sur p1 ---" << endl;
    // Note : Actuellement, le code 'translater' remplace les coordonnées (set) au lieu d'ajouter.
    // Si c'était une vraie translation mathématique, ce serait p1.x + 100...
    p1.translater(100.0, 200.0); 
    cout << "x : " << p1.getX() << endl; // Affiche 100
    cout << "y : " << p1.getY() << endl; // Affiche 200

    // 6. Test de translater (avec un Point vecteur)
    cout << "\n--- 6. Test translater(Point) sur p1 ---" << endl;
    // On déplace p1 à la position de p2 (car 'translater' fait une affectation ici)
    p1.translater(p2);
    cout << "x : " << p1.getX() << endl; // Devrait être 15.5
    cout << "y : " << p1.getY() << endl; // Devrait être 20.5

    // 7. Test de l'opérateur d'affichage <<
    cout << "\n--- Test affichage (operator<<) ---" << endl;
    cout << "Affichage de p1 via cout : " << p1 << endl;

    // 8. Test de l'opérateur +=
    cout << "\n--- Test operateur += ---" << endl;
    cout << "On ajoute p2 a p1..." << endl;
    p1+=p2; // p1.x = p1.x + p2.x, etc.
    cout << "Resultat p1 : " << p1 << endl;

    // ==========================================
    //           TESTS DES FORMES
    // ==========================================
  
    // --- TEST RECTANGLE ---
    cout << "\n--- Test Rectangle ---" << endl;
    Rectangle r(10, 5); // Création d'un rectangle de 10x5
    cout << r; // Affichage (utilise l'opérateur << de Rectangle)
    cout << "Surface : " << r.surface() << endl; // Calcul surface

    // --- TEST CARRE ---
    cout << "\n--- Test Carre ---" << endl;
    Carre k(4); // Création d'un carré de côté 4
    cout << k; 
    cout << "Surface : " << k.surface() << endl;

    // --- TEST CERCLE ---
    cout << "\n--- Test Cercle ---" << endl;
    Cercle c(3); // Création d'un cercle de rayon 3
    cout << c;
    cout << "Surface : " << c.surface() << endl;

    // ==========================================
    //      TESTS METHODE TRANSLATER SUR FORMES
    // ==========================================
    // On vérifie que translater une Forme déplace bien son point d'ancrage

    cout << "\n--- Test Translater sur Rectangle ---" << endl;
    Rectangle r2(8, 4);
    cout << "Avant : " << r2;
    r2.translater(10, 5); // On déplace le rectangle à la position (10, 5)
    cout << "Apres translater(10, 5) : " << r2;

    cout << "\n--- Test Translater sur Carre ---" << endl;
    Carre k2(3);
    cout << "Avant : " << k2;
    k2.translater(7, 2); // On déplace le carré à (7, 2)
    cout << "Apres translater(7, 2) : " << k2;

    cout << "\n--- Test Translater sur Cercle ---" << endl;
    Cercle c2(5);
    cout << "Avant : " << c2;
    Point pTranslate(15, 10);
    c2.translater(pTranslate); // On déplace le cercle avec un objet Point
    cout << "Apres translater avec Point(15, 10) : " << c2;


    // ==========================================
    //      TESTS LISTE FORMES (Polymorphisme)
    // ==========================================
    cout << "\n--- Test ListeFormes ---" << endl;
    ListeFormes liste;
    
    // On ajoute les pointeurs vers nos formes existantes dans la liste.
    // Attention : on passe l'adresse (&) car la liste stocke des Forme*
    cout << "Ajout de r2, k2, c2 a la liste..." << endl;
    liste.ajouter(&r2);
    liste.ajouter(&k2);
    liste.ajouter(&c2);
    
    cout << "Nombre de formes dans la liste : " << liste.getNbFormes() << endl;
    
    // Calcul de la surface totale en utilisant le polymorphisme
    double surfTot = liste.surfaceTotale();
    cout << "Surface totale de la liste : " << surfTot << endl;
    
    // Calcul de la boîte englobante
    double minX, maxX, minY, maxY;
    liste.boiteEnglobante(minX, maxX, minY, maxY);
    cout << "Boite englobante (Bounding Box) : " << endl;
    cout << "Min X : " << minX << " | Max X : " << maxX << endl;
    cout << "Min Y : " << minY << " | Max Y : " << maxY << endl;


    return 0; // Fin du programme, tout s'est bien passé
}