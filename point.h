#ifndef POINT_H // Protection contre l'inclusion multiple : si POINT_H n'est pas défini, on le définit et on inclut tout ce qui suit.
#define POINT_H

using namespace std;

// On inclut les librairies nécessaires. Ici string et iostream pour les chaînes de caractères et les entrées/sorties.
#include <string> 
#include <iostream>

// Définition de la classe Point qui représente un point dans un espace 2D.
class Point{
    private:
        // Coordonnées du point. Elles sont privées pour l'encapsulation (on ne peut pas y accéder directement de l'extérieur).
        double x;
        double y;
    public: 
        // Constructeur par défaut : initialise un point à (0,0).
        Point();
        // Constructeur avec paramètres : permet de créer un point avec des coordonnées spécifiques.
        Point(double _x, double _y);
        // Constructeur de copie : crée un nouveau point à partir d'un point existant.
        Point(Point const &a);

        // Destructeur : appelé quand l'objet est détruit. Ici il ne fait rien de spécial.
        ~Point();

        // Méthode pour déplacer le point.
        // Soit en utilisant un autre point comme vecteur de translation.
        void translater(Point p);
        // Soit en donnant directement les valeurs de déplacement en x et y.
        void translater(double _x, double _y);

        // Accesseurs (Getters) : pour récupérer les valeurs de x et y.
        // Le mot clé 'const' signifie que ces méthodes ne modifient pas l'objet.
        double getX() const; 
        double getY() const;

        // Mutateurs (Setters) : pour modifier les valeurs de x et y.
        void setX(double x);
        void setY(double y);

        // Surcharge de l'opérateur += pour ajouter un autre point à ce point (translation).
        void operator+=(Point p);

};

// Surcharge de l'opérateur << pour pouvoir afficher un objet Point directement avec cout (ex: cout << p).
ostream& operator<<(ostream&s,Point const& c);

#endif // Fin de la protection contre l'inclusion multiple. 