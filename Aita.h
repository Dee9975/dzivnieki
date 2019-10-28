//
// Created by matiss on 28.10.19.
//

#ifndef DZIVNIEKI_AITA_H
#define DZIVNIEKI_AITA_H

#include "Dzivnieks.h"

class Aita : public Dzivnieks {
private:
  float svars;
public:
  Aita();
  void printAitasDati();
  float dotVilnu();
  void izdodSkanu();
  void est(std::string bariba);
};


#endif //DZIVNIEKI_AITA_H
