#include "Persoana.h"
#include <iostream>


Persoana::Persoana() {
    this->nume = "Anonim";
    this->prenume = "Anonim";
    this->CNP = "Anonim";
    this->varsta = 0;
}

Persoana::Persoana(std::string nume, std::string prenume, std::string CNP, int varsta) {
    this->nume = nume;
    this->prenume = prenume;
    this->CNP = CNP;
    this->varsta = 0;
}

Persoana::Persoana(const Persoana& persoana) {
    this->nume = persoana.nume;
    this->prenume = persoana.prenume;
    this->CNP = persoana.CNP;
    this->varsta = persoana.varsta;
}

Persoana& Persoana::operator=(const Persoana& persoana) {
    if (this != &persoana) {
        this->nume = persoana.nume;
        this->prenume = persoana.prenume;
        this->CNP = persoana.CNP;
        this->varsta = persoana.varsta;
    }
    return *this;
}

void Persoana::setNume(std::string nume) {
    this->nume = nume;
}

std::string Persoana::getNume() const {
    return this->nume;
}

void Persoana::setPrenume(std::string prenume) {
    this->prenume = prenume;
}

std::string Persoana::getPrenume() const {
    return this->prenume;
}

void Persoana::setCNP(std::string CNP) {
    this->CNP = CNP;
}

std::string Persoana::getCNP() const {
    return this->CNP;
}

void Persoana::setVarsta(int varsta) {
    this->varsta = varsta;
}

int Persoana::getVarsta() const {
    return this->varsta;
}

std::istream& Persoana::read(std::istream& in) {
    std::cout << "Nume : ";
    in >> this->nume;
    std::cout << "Prenume : ";
    in >> this->prenume;
    std::cout << "CNP : ";
    in >> this->CNP;
    std::cout << "Varsta : ";
    in >> this->varsta;
    return in;
}

std::ostream& Persoana::write(std::ostream& out) const {
    out << "Nume : " << this->nume << '\n';
    out << "Prenume : " << this->prenume << '\n';
    out << "CNP : " << this->CNP << '\n';
    out << "Varsta : " << this->varsta << '\n';
    return out;
}

std::istream& operator>>(std::istream& in, Persoana& persoana) {
    return persoana.read(in);
}

std::ostream& operator<<(std::ostream& out, Persoana& persoana) {
    return persoana.write(out);
}

Persoana::~Persoana() {}