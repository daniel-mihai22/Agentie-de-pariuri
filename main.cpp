#include <iostream>
#include <vector>
#include "src/Persoana.h"
#include "src/PariorAngajat.h"
#include "src/Agentie.h"
#include "src/Angajat.h"

int main() 
{
    Agentie a;
    std::cin >> a;
    std::vector <Persoana*> persoane;
    int option = 0;
    do {
        std::cout << "0. Pentru a iesi din program\n";
        std::cout << "1. Adauga persoana la agentie\n";
        std::cout << "2. Da afara persoana din agentie\n";
        std::cout << "3. Afiseaza toate persoanele din agentie\n";
        std::cout << "4. Afiseaza persoanele din agentie care sunt pariori\n";
        std::cout << "5. Afiseaza persoanele din agentie care sunt angajati\n";
        std::cout << "6. Afiseaza persoanele din agentie care sunt pariori angajati\n";
        std::cout << "7. Afiseaza Agentie\n";
        std::cin >> option;
        switch (option) {
        case 0: {
            option = 0;
            break;
        }
        case 1: {
            std::cout << "Selecteaza Persoana [parior/angajat/pariorAngajat] : ";
            std::string tip;
            std::cin >> tip;
            if (tip == "parior") {
                Parior parior;
                std::cin >> parior;
                persoane.push_back(new Parior(parior));
            }
            else if (tip == "angajat") {
                Angajat angajat;
                std::cin >> angajat;
                persoane.push_back(new Angajat(angajat));
            }
            else if (tip == "pariorAngajat") {
                PariorAngajat pariorAngajat;
                std::cin >> pariorAngajat;
                persoane.push_back(new PariorAngajat(pariorAngajat));
            }
            else std::cout << "Comanda invalida!\n";
            break;
        }
        case 2: {
            std::cout << "Ce persoana doriti sa dati afara ? ";
            int nr;
            std::cin >> nr;
            persoane.erase(persoane.begin() + nr - 1);
            break;
        }
        case 3: {
            for (const auto& i : persoane)
                std::cout << *i;
            break;
        }

        case 4: {
            for (const auto& i : persoane)
                if (!dynamic_cast<PariorAngajat*>(const_cast<Persoana*>(i)))
                    if (dynamic_cast<Parior*>(const_cast<Persoana*>(i)))
                        std::cout << *i;
            break;
        }
        case 5: {
            for (const auto& i : persoane)
                if (!dynamic_cast<PariorAngajat*>(const_cast<Persoana*>(i)))
                    if (dynamic_cast<Angajat*>(const_cast<Persoana*>(i)))
                        std::cout << *i;
            break;
        }

        case 6: {
            for (const auto& i : persoane)
                if (dynamic_cast<PariorAngajat*>(const_cast<Persoana*>(i)))
                    std::cout << *i;
            break;
        }

        case 7: {
            std::cout << a;
            break;
        }
        default:
            std::cout << "Optiune incorecta!\n";
        }
    } while (option != 0);

    return 0;
}
