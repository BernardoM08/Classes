#include <iostream>
#include <vector>
#include <cstring>
#include "media.h"
#include "games.h"
#include "music.h"
#include "movie.h"

//functions
void addMedia(vector<Media*>* media);

// main method
int main()
{
  // variables
  char input[10];
  bool running = true;
  vector<Media*> mediaL;
  while (running == true)
    {
      cout << "ADD, SEARCH, DELETE, QUIT" << endl;
      cin.get(input, 10);
      cin.clear();
      cin.ignore(10, '\n');
      // ADD
      if (strcmp(input, "add") == 0)
	{
	  addMedia(&mediaL);
	}
      // SEARCH
      if (strcmp(input, "search") == 0)
	{
	  cout << "search" << endl;
	}
      //DELETE
      if (strcmp(input, "delete") == 0)
	{
	  cout << "delete" << endl;
	}
      // QUIT
      if (strcmp(input, "quit") == 0)
	{
	  running = false;
	}
    }
  return 0;
}

// add funntion
void addMedia(vector<Media*>* media)
{
  char type[10];
  cout << "What media do you wish to add: 'game', 'music', or 'movie'" << endl;
  cin.get(type, 10);
  cin.clear();
  cin.ignore(10, '\n');
  // adds a game object
  if (strcmp(type, "game") == 0)
    {
      Game* game = new Game();
      cout << "Input a title" << endl;
      cin.get(game->getTitle(), 30);
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a year" << endl;
      cin >> *game->getYear();
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a publisher" << endl;
      cin.get(game->getPublisher(), 30);
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a rating (E = everyone, T = teen, M = mature)" << endl;
      cin.get(game->getRating(), 1);
      cin.clear();
      cin.ignore(30, '\n');
      media->push_back(game);
    }
  // adds a music object
  if (strcmp(type, "music") == 0)
    {
      Music* music = new Music();
      cout << "Input a title" << endl;
      cin.get(music->getTitle(), 30);
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input an artist" << endl;
      cin.get(music->getArtist(), 30);
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a year" << endl;
      cin >> *music->getYear();
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a publisher" << endl;
      cin.get(music->getPublisher(), 30);
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a duration (in seconds)" << endl;
      cin >> *music->getDuration();
      cin.clear();
      cin.ignore(30, '\n');
      media->push_back(music);
    }
  // adds a movie object
  if (strcmp(type, "movie") == 0)
    {
      Movie* movie = new Movie();
      cout << "Input a title" << endl;
      cin.get(movie->getTitle(), 30);
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a director" << endl;
      cin.get(movie->getDirector(), 30);
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a year" << endl;
      cin >> *movie->getYear();
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a rating ('E' for everyone, 'T' for teen, 'M' for mature" << endl;
      cin.get(movie->getRating(), 1);
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a duration (in minutes)" << endl;
      cin >> *movie->getDuration();
      cin.clear();
      cin.ignore(30, '\n');
      media->push_back(movie);
    }
}
