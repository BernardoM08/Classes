#include <iostream>
#include <cstring>
#include "media.h"
#include "music.h"

using namespace std;

Music::Music()
{

}

//getters
int Music::getType()
{
  return 1;
}

char* Music::getArtist()
{
  return artist;
}

int* Music::getDuration()
{
  return &duration;
}

char* Music::getPublisher()
{
  return publisher;
}
