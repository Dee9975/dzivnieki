#include <iostream>
#include "Dzivnieks.h"
#include "Aita.h"

int main() {
  Dzivnieks *dz = new Dzivnieks;
  dz->izdotSkanu();

  Aita *a = new Aita;
  a->izdotSkanu();

  Dzivnieks *va = new Aita;
  va->izdotSkanu();
  va->est("Salmi");
  return 0;
}