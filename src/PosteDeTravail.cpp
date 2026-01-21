#include "PosteDeTravail.h"

#include <iostream>

    PosteDeTravail::PosteDeTravail(const std::string& nom, const std::string& os)
        : Materiel(_noms, TypeMateriel::POSTE_DE_TRAVAIL), _systemeExploitation(os){}

    void PosteDeTravail::print() const  {
        std::cout << "Poste de travail : " << _noms << "| os : " << _systemeExploitation << std::endl;
    }