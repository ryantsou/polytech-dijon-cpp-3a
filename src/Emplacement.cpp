#include "Emplacement.h"


    Emplacement::Emplacement() 
        :_salles(nullptr){}
    void Emplacement::placerDansSalle(Salle* salle){
        _salles = salle;
    } 
    void Emplacement::placerDansInventaire(){
        _salles = nullptr;
    }
    bool Emplacement::estDansInventaire() const{
        return _salles == nullptr;
    }
    Salle* Emplacement::getSalle() const {
        return _salles;
    }
    