#include <iostream>
#include "Dzivnieks.h"
#include "Aita.h"

int main() {
  /**
   * Bazes klasei virtualas funkcijas neko nemaina
   */
  Dzivnieks *dz = new Dzivnieks;
  dz->setVards("Tofiks");
  dz->est("Baribu");
  dz->izdotSkanu();

  /**
   * Atvasinataja klase tiek parrakstitas funkcijas
   */
  Aita *a = new Aita;
  a->est("sienu");
  a->izdotSkanu();
  a->dotVilnu();

  /**
   * Bazes klase, kas izmanto atvasinatas klases funkcijas
   */
  Dzivnieks *va = new Aita;
  va->setVards("Shawny");
  va->izdotSkanu();
  va->est("Salmi");
  return 0;
}
