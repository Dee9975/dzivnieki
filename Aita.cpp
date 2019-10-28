//
// Created by matiss on 28.10.19.
//
#include <iostream>
#include "Aita.h"
Aita::Aita() {
  this->vards = "Shaun";
  this->svars = 60;
}

void Aita::printAitasDati() {
  std::cout << "\nVards: " << this->vards << " svars: " << this->svars << " kg" << std::endl;
}

float Aita::dotVilnu() {
  return this->svars / 100;
}