#ifndef KLASSEN_H
#define KLASSEN_H

#include<stdlib.h>

using namespace std;

//Angestellentenverwaltungsprogramm für Zeitarbeitsunternehmen
//Begründung für dynamische Verwaltung: häufiger Personalaustausch

class Parkplatz
{
private:
    int stockwerk;
    int pnummer;
    bool belegt;
// ET
protected:

public:
    Parkplatz(int st = 0,int pn = 0;bool b = 0);
    ~Parkplatz();

    void setStock(int st){this->stockwerk = st;}
    void setNummer(int pn){this->pnummer = pn;}
    void setBelegt(bool b){this->belegt = b;}

    int getStock(void){return this->stockwerk;}
    int getNummer(void){return this->pnummer;}
    int getBelegt(void){return this->belegt;}

    void display();

    class friend Fahrzeug;
};

class Fahrzeug
{
private:

protected:
  string kennzeichen;
  int pnummer;
public:
  Fahrzeug(string k = "none", int pn = 0);
  ~Fahrzeug;

  void setKenn(string k){this->kennzeichen = k;}
  void setNummer(int pn){this->pnummer = pn;}

  string getKenn(void){return this->kennzeichen;}
  int getNummer(void){return this->pnummer;}

  void display();
};

class Auto : public Fahrzeug
{
private:
  string marke;
  int baujahr;
public:
  Auto();
  ~Auto();

};

#endif // KLASSEN_H
