#include "PariorAngajat.h"

PariorAngajat::PariorAngajat() {
    this->bonus = 0;
}

PariorAngajat::PariorAngajat(std::string nume, std::string prenume, std::string CNP, int varsta, int buget, int salariu, double bonus) : Persoana(nume, prenume, CNP, varsta), Parior(nume, prenume, CNP, varsta, buget), Angajat(nume, prenume, CNP, varsta, salariu) {
    this->bonus = bonus;
}

PariorAngajat::PariorAngajat(const PariorAngajat& pariorAngajat) : Persoana(pariorAngajat), Parior(pariorAngajat), Angajat(pariorAngajat) {
    this->bonus = pariorAngajat.bonus;
}

PariorAngajat& PariorAngajat::operator=(const PariorAngajat& pariorAngajat) {
    if (this != &pariorAngajat) {
        Angajat::operator=(pariorAngajat);
        this->buget = pariorAngajat.buget;
        this->bonus = pariorAngajat.bonus;
    }
    return *this;
}

void PariorAngajat::adaugaBonus(double x) {
    for (int i = 1000; i <= this->buget; i += 1000)
        this->bonus += x;
}

std::istream& PariorAngajat::read(std::istream& in) {
    Parior::read(in);
    std::cout << "Salariu : ";
    in >> this->salariu;
    std::cout << "Bonus pentru a face reclama : ";
    in >> this->bonus;
    return in;
}

std::ostream& PariorAngajat::write(std::ostream& out) const {
    Parior::write(out);
    out << "Salariu : " << this->salariu << '\n';
    out << "Bonus pentru a face reclama : " << this->bonus << '\n';
    return out;
}