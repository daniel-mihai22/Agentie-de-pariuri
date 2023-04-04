#include "Agentie.h"
#include <iostream>

Agentie::Agentie() {
    this->numeAgentie = "Anonim";
    this->vechime = 0;
    this->medieCastigLunar = 0;
    this->impozitCastig = 0;
    this->taxaRetragere = 0;
}

Agentie::Agentie(std::string numeAgentie, int vechime, double medieCastigLunar, double impozitCastig, double taxaRetragere) {
    this->numeAgentie = numeAgentie;
    this->vechime = vechime;
    this->medieCastigLunar = medieCastigLunar;
    this->impozitCastig = impozitCastig;
    this->taxaRetragere = taxaRetragere;
}

Agentie::Agentie(const Agentie& agentie) {
    this->numeAgentie = agentie.numeAgentie;
    this->vechime = agentie.vechime;
    this->medieCastigLunar = agentie.medieCastigLunar;
    this->impozitCastig = agentie.impozitCastig;
    this->taxaRetragere = agentie.taxaRetragere;
}

Agentie& Agentie::operator=(const Agentie& agentie) {
    if (this != &agentie) {
        this->numeAgentie = agentie.numeAgentie;
        this->vechime = agentie.vechime;
        this->medieCastigLunar = agentie.medieCastigLunar;
        this->impozitCastig = agentie.impozitCastig;
        this->taxaRetragere = agentie.taxaRetragere;
    }
    return *this;
}

std::istream& operator>>(std::istream& in, Agentie& agentie) {
    std::cout << "Nume agentie : ";
    in >> agentie.numeAgentie;
    std::cout << "Vechime : ";
    in >> agentie.vechime;
    std::cout << "Medie castig lunar : ";
    in >> agentie.medieCastigLunar;
    std::cout << "Impozit castig : ";
    in >> agentie.impozitCastig;
    std::cout << "Taxa retragere : ";
    in >> agentie.taxaRetragere;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Agentie& agentie) {
    out << "Nume agentie : " << agentie.numeAgentie << '\n';
    out << "Vechime : " << agentie.vechime << '\n';
    out << "Medie castig lunar : " << agentie.medieCastigLunar << '\n';
    out << "Impozit castig : " << agentie.impozitCastig << '\n';
    out << "Taxa retragere : " << agentie.taxaRetragere << '\n';
    return out;
}