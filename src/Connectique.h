#ifndef CONNECTIQUE_H
#define CONNECTIQUE_H

#include "Materiel.h"
#include <iostream>

class Connectique : public Materiel {
    public:
        Connectique(const std::string& nom);
        void print() const override;
    private:

};
#endif