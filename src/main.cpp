#include "Inventaire.h"
#include "PosteDeTravail.h"
#include "Ecran.h"
#include "Salle.h"

int main() {
    Salle s1("Salle 1", TypeSalle::SALLE_INFORMATIQUE);
    Salle s2("Salle 2", TypeSalle::SALLE_TECHNIQUE);
    std::cout << "OK SALLE" << std::endl;

    return 0;
}
