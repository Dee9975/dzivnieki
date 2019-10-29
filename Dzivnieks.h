//
// Created by matiss on 28.10.19.
//

#ifndef DZIVNIEKI_DZIVNIEKS_H
#define DZIVNIEKI_DZIVNIEKS_H

#include <string>

class Dzivnieks {
protected:
  std::string vards;
public:
  void setVards(std::string vards);
  std::string getVards();

  void est(std::string bariba);
  virtual void izdotSkanu();
};


#endif //DZIVNIEKI_DZIVNIEKS_H
