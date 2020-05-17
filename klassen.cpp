#include "klassen.h"

void Parkplatz::display()
{
  cout << this->stockwerk << endl;
  cout << this->pnummer << endl;
  if (this->belegt == 1)
  cout << "Parkplatz belegt" << endl;
  else
  cout << "Parkplatz frei" << endl;
}
void Fahrzeug::display(void)
{
    cout << this->kennzeichen << endl;
}
