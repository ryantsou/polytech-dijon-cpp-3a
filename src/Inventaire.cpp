#include "Inventaire.h"

#include <iostream>
#include <vector>

    void Inventaire::ajouterMateriel(Materiel* materiel){
        _materiels.push_back(materiel);
    }
    void Inventaire::print() const {
        for (const auto& materiel : _materiels){
            materiel -> print();
            if (materiel-> getEmplacement().estDansInventaire()){
                std::cout << " -> Emplacement : Inventaire" << std::endl;
            } else {
                std::cout << " -> Salle : " << materiel->getEmplacement().getSalle()->getNom() << std::endl;
            }
        }
    }