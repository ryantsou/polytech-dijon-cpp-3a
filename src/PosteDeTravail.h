#ifndef POSTE_DE_TRAVAIL_H
#define POSTE_DE_TRAVAIL_H

#include "Materiel.h"

#include <iostream>

class PosteDeTravail : public Materiel {
    public:
        PosteDeTravail(const std::string& nom, const std::string& os);
        void print() const override;
    private:
        std::string _systemeExploitation;
};
#endif