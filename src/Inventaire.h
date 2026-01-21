#ifndef INVENTAIRE_H
#define INVENTAIRE_H

#include "Materiel.h"
#include <vector>

class Inventaire {
    public:
        void ajouterMateriel(Materiel* materiel);
        void print() const;
    private:
        std::vector<Materiel*> _materiels;
};

#endif