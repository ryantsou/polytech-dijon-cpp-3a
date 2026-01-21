#ifndef MATERIEL_SPECIFIQUE_H
#define MATERIEL_SPECIFIQUE_H

#include "Materiel.h"
#include <iostream>

class MaterielSpecifique : public Materiel{
    public:
        MaterielSpecifique(const std::string& nom);
        void print() const override;
    private:
};
#endif