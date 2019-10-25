#include "Song.h"

Song::Song(){}

Song::Song(string artist, string title, int size) {

    this->title = title;
    this->artist = artist;
    this->size = size;

}

void Song::swap(Song &p) {

    Song temp = p;
    p = *this;
    *this = temp;
}

void Song::setArtist(string new_Artist) {
    artist = new_Artist;
}

void Song::setTitle(string new_Title) {
    title = new_Title;
}

void Song::setSize(int new_Size) {
    size = new_Size;
}

string Song::getArtist() const {
    return artist;
}

int Song::getSize() const {
    return size;
}

string Song::getTitle() const {
    return title;
}

bool Song::operator==(Song const &s2) {
    if(this != &s2){
        if(this->size == s2.size && this->artist == s2.artist && this->title == s2.title){
            return true;
        }else{
            return false;
        }
    }else{
        return true;
    }
}

bool Song::operator<(Song const &s2) {
    if(artist < s2.artist && title < s2.title && ){
        return true;
    }else{
        return false;
    }
    if(title < s2.title){
        return
    }
}

bool Song::operator>(Song const &s2) {

}

//Song::~Song() {
//}