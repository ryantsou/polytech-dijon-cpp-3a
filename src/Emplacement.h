#ifndef EMPLACEMENT_H
#define EMPLACEMENT_H

#include "Salle.h"

class Emplacement {
    public:
        Emplacement();
        void placerDansSalle(Salle* salle);
        void placerDansInventaire();
        bool estDansInventaire() const;
        Salle* getSalle() const;
    private:
        Salle* _salles;
};
#endif