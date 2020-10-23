/*
c++ static cast from https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/
*/

#include <iostream>
#include <vector>
#include <cstring>
#include "media.h"
#include "games.h"
#include "music.h"
#include "movie.h"

//functions
void addMedia(vector<Media*>* media);
void searchMedia(char* title, vector<Media*>* media);
void searchMedia(int year, vector<Media*>* media);

// main method
int main()
{
  // variables
  char input[10];
  char titleS[30];
  int yearS;
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
	  cout << "search by 'title' or 'year'" << endl;
	  cin.get(input, 10);
	  cin.clear();
	  cin.ignore(10, '\n');
	  if (strcmp(input, "title") == 0)
	    {
	      cout << "Input title" << endl;
	      cin.get(titleS, 30);
	      cin.clear();
	      cin.ignore(30, '\n');
	      searchMedia(titleS, &mediaL);
	    }
	  if (strcmp(input, "year") == 0)
	    {
	      cout << "Input a year" << endl;
	      cin >> yearS;
	      cin.clear();
	      cin.ignore(10000, '\n');
	      searchMedia(yearS, &mediaL);
	    }
	}
      //DELETE
      if (strcmp(input, "delete") == 0)
	{
	  cout << "delete function has not been added" << endl;
	}
      // QUIT
      if (strcmp(input, "quit") == 0)
	{
	  running = false;
	}
    }
  return 0;
}

// search by title
void searchMedia(char* title, vector<Media*>* media)
{
  vector<Media*>::iterator it;
  for (it = media->begin(); it !=media->end(); ++it)
    {
      if (strcmp(title, (*it)->getTitle()) == 0)
	{
	  cout << (*it)->getTitle() << ", Year: " << *(*it)->getYear() << ", ";
	  //game
	  if ((*it)->getType() == 0)
	    {
	      cout << "Publisher: " << static_cast<Game*>(*it)->getPublisher() << ", Rating: " << static_cast<Game*>(*it)->getRating() << endl;
	    }
	  //music
	  if ((*it)->getType() == 1)
	    {
	      cout << "Artist: " << static_cast<Music*>(*it)->getArtist() << ", Publisher: " << static_cast<Music*>(*it)->getPublisher() << ", Duration: " << *static_cast<Music*>(*it)->getDuration() <<  " seconds" << endl;
	    }
	  //movie
	  if ((*it)->getType() == 2)
	    {
	      cout << "Director: " << static_cast<Movie*>(*it)->getDirector()<< ", Rating: " << static_cast<Movie*>(*it)->getRating() << ", Duration: " << *static_cast<Music*>(*it)->getDuration() << " minutes" << endl;
	    }
	}
    }
}
//search by year
void searchMedia(int year, vector<Media*>* media)
{
  vector<Media*>::iterator it;
  for (it = media->begin(); it !=media->end(); ++it)
    {
      if (year == *(*it)->getYear())
	{
	  cout << (*it)->getTitle() << ", Year: " << *(*it)->getYear() << ", ";
	  //game
	  if ((*it)->getType() == 0)
	    {
	      cout << "Publisher: " << static_cast<Game*>(*it)->getPublisher() << ", Rating: " << static_cast<Game*>(*it)->getRating() << endl;
	    }
	  //music
	  if ((*it)->getType() == 1)
	    {
	      cout << "Artist: " << static_cast<Music*>(*it)->getArtist() << ", Publisher: " << static_cast<Music*>(*it)->getPublisher() << ", Duration: " << *static_cast<Music*>(*it)->getDuration() <<  " seconds" << endl;
	    }
	  //movie
	  if ((*it)->getType() == 2)
	    {
	      cout << "Director: " << static_cast<Movie*>(*it)->getDirector()<< ", Rating: " << static_cast<Movie*>(*it)->getRating() << ", Duration: " << *static_cast<Music*>(*it)->getDuration() << " minutes" << endl;
	    }
	}
    }
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
      cin.ignore(10000, '\n');
      cout << "Input a publisher" << endl;
      cin.get(game->getPublisher(), 30);
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a rating (everyone, teen, or mature)" << endl;
      cin.get(game->getRating(), 10);
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
      cin.ignore(10000, '\n');
      cout << "Input a year" << endl;
      cin >> *music->getYear();
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a publisher" << endl;
      cin.get(music->getPublisher(), 30);
      cin.clear();
      cin.ignore(10000, '\n');
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
      cin.ignore(10000, '\n');
      cout << "Input a year" << endl;
      cin >> *movie->getYear();
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a rating (everyone, teen, or mature)" << endl;
      cin.get(movie->getRating(), 10);
      cin.clear();
      cin.ignore(30, '\n');
      cout << "Input a duration (in minutes)" << endl;
      cin >> *movie->getDuration();
      cin.clear();
      cin.ignore(10000, '\n');
      media->push_back(movie);
    }
}
