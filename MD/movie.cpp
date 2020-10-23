#include <iostream>
#include <cstring>
#include "media.h"
#include "movie.h"

using namespace std;

Movie::Movie()
{

}

// getters
int Movie::getType()
{
  return 2;
}

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
