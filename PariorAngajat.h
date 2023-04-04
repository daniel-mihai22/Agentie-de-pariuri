#pragma once
#include "Parior.h"
#include "Angajat.h"

class PariorAngajat : public Parior, public Angajat {
private:
    double bonus; ///Pe langa salariu, primeste un bonus pentru ca face reclama
public:
    PariorAngajat();
    PariorAngajat(std::string nume, std::string prenume, std::string CNP, int varsta, int buget, int salariu, double bonus);
    PariorAngajat(const PariorAngajat& pariorAngajat);
    PariorAngajat& operator=(const PariorAngajat& pariorAngajat);

    std::istream& read(std::istream& in);
    std::ostream& write(std::ostream& out) const;

    ///Functionalitate : pentru fiecare 1000 de lei ramasi din banii dati de agentie primeste cate x lei
    void adaugaBonus(double x);

    ~PariorAngajat() {}
};
