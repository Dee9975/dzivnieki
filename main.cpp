#include <iostream>
#include "Dzivnieks.h"
#include "Aita.h"

int main() {
  Dzivnieks *dz = new Dzivnieks;
  dz->setVards("Tofiks");
  dz->est("Baribu");
  dz->izdotSkanu();

  Aita *a = new Aita;
  a->est("sienu");
  a->izdotSkanu();
  a->dotVilnu();

  Dzivnieks *va = new Aita;
  va->izdotSkanu();
  va->est("Salmi");
  return 0;
}
