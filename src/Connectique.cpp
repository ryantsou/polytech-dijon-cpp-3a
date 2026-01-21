#include "Connectique.h"
#include <iostream>

    Connectique::Connectique(const std::string& nom)
        :Materiel(_noms, TypeMateriel::CONNECTIQUE){}
    void Connectique::print() const {
        std::cout << "Connectique : " << _noms << std::endl;
    }