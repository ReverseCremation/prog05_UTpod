#ifndef SONG_H
#define SONG_H
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Song{

    private:

        string title;
        string artist;
        int    size;

    public:
        Song();

        Song(string title, string artist, int size);

        void setTitle(string new_Title);

        void setArtist(string new_Artist);

        void setSize(int new_Size);

        string getTitle() const;

        string getArtist() const;

        int getSize() const;

        bool operator==(Song const &s2);
};

#endif