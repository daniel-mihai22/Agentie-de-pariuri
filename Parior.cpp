#include "Parior.h"

Parior::Parior() : Persoana() {
    this->buget = 0;
}

Parior::Parior(std::string nume, std::string prenume, std::string CNP, int varsta, int buget) : Persoana(nume, prenume, CNP, varsta) {
    this->buget = buget;
}

Parior::Parior(const Parior& parior) : Persoana(parior) {
    this->buget = parior.buget;
}

Parior& Parior::operator=(const Parior& parior) {
    if (this != &parior) {
        Persoana::operator=(parior);
        this->buget = parior.buget;
    }
    return *this;
}

void Parior::pariaza(double x) {
    this->buget += x;
}

std::istream& Parior::read(std::istream& in) {
    Persoana::read(in);
    std::cout << "Buget pentru pariat : ";
    in >> this->buget;
    return in;
}

std::ostream& Parior::write(std::ostream& out) const {
    Persoana::write(out);
    out << "Bugetul pentru pariat este : " << this->buget << '\n';
    return out;
}
