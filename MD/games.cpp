#include <iostream>
#include <cstring>
#include "media.h"
#include "games.h"

Game::Game()
{

}

int Game::getType()
{
  return 0;
}

char* Game::getPublisher()
{
  return publisher;
}

char* Game::getRating()
{
  return rating;
}
