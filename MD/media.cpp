#include <iostream>
#include <cstring>
#include "media.h"

Media::Media()
{
  
}

//getters
int* Media::getYear()
{
  return &year;
}

char* Media::getTitle()
{
  return title;
}
