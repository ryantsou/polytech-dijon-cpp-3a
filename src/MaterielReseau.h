#ifndef MATERIEL_RESEAU_H
#define MATERIEL_RESEAU_H

#include "Materiel.h"
#include <iostream>

class MaterielReseau : public Materiel{
    public:
        MaterielReseau(const std::string& nom);
        void print() const override;
    private:
};

#endif