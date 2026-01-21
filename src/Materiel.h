#ifndef MATERIEL_H
#define MATERIEL_H

#include <string>
#include "Enum.h"
#include "Emplacement.h"

class Materiel{
    public:
        Materiel(const std::string& nom, TypeMateriel type);
        virtual ~Materiel() = default;
        std::string getNom() const;
        TypeMateriel getType() const;
        Emplacement& getEmplacement();
        void placerDansSalle(Salle* salle);
        void placerDansInventaire();
        virtual void print() const = 0;
    private:
    protected:
        std::string _noms;
        TypeMateriel _types;
        Emplacement _emplacements;
};
#endif