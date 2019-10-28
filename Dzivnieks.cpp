//
// Created by matiss on 28.10.19.
//

#include <iostream>
#include "Dzivnieks.h"

void Dzivnieks::setVards(std::string vards) {
  this->vards = vards;
}

std::string Dzivnieks::getVards() {
  return this->vards;
}

void Dzivnieks::est(std::string bariba) {
  std::cout << std::endl << this->vards << "ed" << bariba << std::endl;
}

void Dzivnieks::izdotSkanu() {
  std::cout << std::endl << this->vards << "izdod skanu";
  std::cin.get();
}