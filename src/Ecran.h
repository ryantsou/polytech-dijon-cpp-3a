#ifndef ECRAN_H
#define ECRAN_H

#include "Materiel.h"
#include <iostream>

class Ecran : public Materiel {
    public:
        Ecran(const std::string& nom, float taille);
        void print() const override;
    private:
        float _tailles;
};
#endif