#pragma once
#include <string>

class Agentie {
private:
    std::string numeAgentie;
    int vechime;
    double medieCastigLunar; ///care este castigul mediul lunar
    double impozitCastig;
    double taxaRetragere;
public:
    Agentie();
    Agentie(std::string numeAgentie, int vechime, double medieCastigLunar, double impozitCastig, double taxaRetragere);
    Agentie(const Agentie& agentie);
    Agentie& operator=(const Agentie& agentie);

    friend std::istream& operator>>(std::istream& in, Agentie& agentie);
    friend std::ostream& operator<<(std::ostream& out, const Agentie& agentie);

    ~Agentie() {};
};