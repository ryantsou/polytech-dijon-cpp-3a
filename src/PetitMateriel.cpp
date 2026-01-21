#include "PetitMateriel.h"

    PetitMateriel::PetitMateriel(const std::string& nom)
        : Materiel(_noms, TypeMateriel::PETIT_MATERIEL){}
    void PetitMateriel::print() const {
        std::cout << "Petit materiel :" << _noms << std::endl;
    }