#include "Ecran.h"

#include <iostream>

    Ecran::Ecran(const std::string& nom, float taille)
        :Materiel(_noms, TypeMateriel::ECRAN), _tailles(taille){}

    void Ecran::print() const {
        std::cout << "Ecran: " << _noms << "| Taille : " << _tailles << "pouces" << std::endl;
    }