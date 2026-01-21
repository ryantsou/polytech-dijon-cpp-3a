#include <string>
#include "Salle.h"

    Salle::Salle(const std::string& nom, TypeSalle type)
        : _noms(nom), _types(type){}

    std::string Salle::getNom() const {
        return _noms;
    }
    TypeSalle Salle::getType() const{
        return _types;
    }