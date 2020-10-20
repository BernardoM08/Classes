#include <iostream>
#include <cstring>
#include "media.h"
#include "games.h"

Game::Game()
{

}

//getters

char* Game::getPublisher()
{
  return publisher;
}

char* Game::getRating()
{
  return rating;
}
