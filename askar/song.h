// song.h

#ifndef SONG_H
#define SONG_H

#include <iostream>

using namespace std;

// Song is a simple class that stores a title and artist as strings
// it just provides i/o operators, == operator, constructors and Set function
class Song
{
  // output the song in the format:
  // title, artist
<<<<<<< HEAD
  //friend ostream& operator<<(ostream& os, const Song& song);
  void input(char *s);
  // input the song in the format:
  // title, artist
  //friend istream& operator>>(istream& is, Song& song);

  // compare two song objects for equality
  //friend bool operator==(const Song& lhs, const Song& rhs);
=======
  friend ostream& operator<<(ostream& os, const Song& song);

  // input the song in the format:
  // title, artist
  friend istream& operator>>(istream& is, Song& song);

  // compare two song objects for equality
  friend bool operator==(const Song& lhs, const Song& rhs);
>>>>>>> temp

  public:
    // constructors
    Song( );
    Song(const char* t, const char* a);

    // set the song
    void Set(const char* t, const char* a);

  private:
<<<<<<< HEAD
    static const int MAX_CHARS;
=======
    static const int MAX_CHARS = 64;
>>>>>>> temp

    char title[MAX_CHARS];
    char artist[MAX_CHARS];
};

#endif
