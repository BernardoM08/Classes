#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Movie : public Media
{
 public: //public function prototypes
  Movie();
  virtual int getType();
  char* getDirector();
  int* getDuration();
  char* getRating();
 private: //private variables
  char director[30];
  int duration;
  char rating[10];
};

#endif
