#include "Angajat.h"
#include <iostream>

Angajat::Angajat() : Persoana() {
    this->salariu = 0;
}

Angajat::Angajat(std::string nume, std::string prenume, std::string CNP, int varsta, int salariu) : Persoana(nume, prenume, CNP, varsta) {
    this->salariu = salariu;
}

Angajat::Angajat(const Angajat& angajat) : Persoana(angajat) {
    this->salariu = angajat.salariu;
}

Angajat& Angajat::operator=(const Angajat& angajat) {
    if (this != &angajat) {
        Persoana::operator=(angajat);
        this->salariu = angajat.salariu;
    }
    return *this;
}

void Angajat::random(double x) {
    this->salariu += x;
}

std::istream& Angajat::read(std::istream& in) {
    Persoana::read(in);
    std::cout << "Salariu : ";
    in >> this->salariu;
    return in;
}

std::ostream& Angajat::write(std::ostream& out) const {
    Persoana::write(out);
    out << "Salariul este : " << this->salariu << '\n';
    return out;
}
