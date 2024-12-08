/*
 * cutie.hpp
 *
 *  Created on: Dec 5, 2024
 *      Author: Turbo
 */

#ifndef CUTIE_HPP_
#define CUTIE_HPP_

#include <string>
using namespace std;

class Cutie {
  virtual string description() = 0;     // All cuties need to have a description of what makes them cute.
  virtual int cuteness_rating() = 0; // All cuties get a cuteness rating out of ten.
}
#endif /* CUTIE_HPP_ */
