#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <cstring>

using namespace std;

class Media {
 public: // public function prototypes
  Media();
  int* getYear();
  char* getTitle();
 private: // private variables
  int year;
  char title[30];
};
#endif
