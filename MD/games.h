#ifndef GAMES_H
#define GAMES_H

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Game : public Media {
 public: //public function prototypes
  Game();
  virtual int getType();
  char* getPublisher();
  char* getRating();
 private: //private variables
  char publisher[30];
  char rating[10];
};
#endif 
