#pragma once
#include "Persoana.h"

class Angajat : virtual public Persoana {
protected:
    int salariu;
public:
    Angajat();
    Angajat(std::string nume, std::string prenume, std::string cnp, int varsta, int salariu);
    Angajat(const Angajat& angajat);
    Angajat& operator=(const Angajat& angajat);

    std::istream& read(std::istream& in);
    std::ostream& write(std::ostream& out) const;

    ///functionalitate : primeste un bonus / ii scade din salariu
    void random(double);

    ~Angajat() {};
};
