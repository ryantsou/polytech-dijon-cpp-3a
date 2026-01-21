#include "MaterielReseau.h"

#include<iostream>

    MaterielReseau::MaterielReseau(const std::string& nom)
        :Materiel(_noms, TypeMateriel::MATERIEL_RESEAU){}
    void MaterielReseau::print() const {
        std::cout << "Materiel reseau : " << _noms << std::endl;
    }