#pragma once
#include <string>

class IOInterface {
public:
    virtual std::istream& read(std::istream& in) = 0;
    virtual std::ostream& write(std::ostream& out) const = 0;
};

class Persoana : public IOInterface {
protected:
    std::string nume;
    std::string prenume;
    std::string CNP;
    int varsta;
public:
    Persoana();
    Persoana(std::string nume, std::string prenume, std::string CNP, int varsta);
    Persoana(const Persoana& persoana);
    Persoana& operator=(const Persoana& persoana);

    void setNume(std::string nume);
    std::string getNume() const;
    void setPrenume(std::string prenume);
    std::string getPrenume() const;
    void setCNP(std::string CNP);
    std::string getCNP() const;
    void setVarsta(int varsta);
    int getVarsta() const;

    friend std::istream& operator>>(std::istream& in, Persoana& persoana);
    friend std::ostream& operator<<(std::ostream& out, Persoana& Persoana);

    virtual std::istream& read(std::istream& in);
    virtual std::ostream& write(std::ostream& out) const;

    virtual ~Persoana() = 0;
};