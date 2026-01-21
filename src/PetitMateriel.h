#ifndef PETIT_MATERIEL_H
#define PETIT_MATERIEL_H

#include "Materiel.h"
#include <iostream>

class PetitMateriel : public Materiel {
    public:
        PetitMateriel(const std::string& nom);
        void print() const override;
    private:
};
#endif