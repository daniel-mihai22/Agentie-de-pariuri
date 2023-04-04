#pragma once
#include "Persoana.h"
#include <iostream>

class Parior : virtual public Persoana {
protected:
    double buget; ///Cat isi permite sa parieze
public:
    Parior();
    Parior(std::string nume, std::string prenume, std::string cnp, int varsta, int buget);
    Parior(const Parior& parior);
    Parior& operator=(const Parior& parior);

    std::istream& read(std::istream& in);
    std::ostream& write(std::ostream& out) const;

    ///functionalitate pariaza(x) - scade/creste din buget
    void pariaza(double x);

    ~Parior() {};
};
