#ifndef SALLE_H
#define SALLE_H

#include "Enum.h"

#include <string>

class Salle {
    public:
        Salle (const std::string& nom, TypeSalle type);
        std::string getNom() const;
        TypeSalle getType() const;
    private:
        std::string _noms;
        TypeSalle _types;

};

#endif