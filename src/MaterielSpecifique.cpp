#include "MaterielSpecifique.h"

#include <iostream>

    MaterielSpecifique::MaterielSpecifique(const std::string& nom)
        :Materiel(_noms, TypeMateriel::MATERIEL_SPECIFIQUE){}
    void MaterielSpecifique::print() const{
        std::cout << "Materiel specifique : " << _noms << std::endl;
    }