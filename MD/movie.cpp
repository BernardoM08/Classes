#include <iostream>
#include <cstring>
#include "media.h"
#include "movie.h"

using namespace std;

Movie::Movie()
{

}

//getters
char* Movie::getDirector()
{
  return director;
}

char* Movie::getRating()
{
  return rating;
}

int* Movie::getDuration()
{
  return &duration;
}
