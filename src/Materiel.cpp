#include "Materiel.h"

    Materiel::Materiel(const std::string& nom, TypeMateriel type)
        : _noms(nom), _types(type){}

    std::string Materiel::getNom() const {
        return _noms;
    }
    TypeMateriel Materiel::getType() const {
        return _types;
    }
    Emplacement& Materiel::getEmplacement(){
        return _emplacements;
    }
    void Materiel::placerDansSalle(Salle* salle){
        _emplacements.placerDansSalle(salle);
    }
    void Materiel::placerDansInventaire(){
        _emplacements.placerDansInventaire();
    }
