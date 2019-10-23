#include "UtPod.h"


//Default constructor
//set the memory size to MAX_MEMORY
UtPod::UtPod() {
    memSize = MAX_MEMORY;

    songs = NULL;

};

//Constructor with size parameter
//The user of the class will pass in a size.
//If the size is greater than MAX_MEMORY or less than or equal to 0,
//set the size to MAX_MEMORY.
UtPod::UtPod(int size){
    if(size <= 0 || size > MAX_MEMORY){
        size = MAX_MEMORY;
    }
    this->memSize = size;
}

/* FUNCTION - int addSong
      * attempts to add a new song to the UtPod
          o returns a 0 if successful
          o returns -1 if not enough memory to add the song

      precondition: s is a valid Song

      input parms -

      output parms -
     */

int UtPod::addSong(Song const &s){

    // Checking if song can be added
    if(this->getRemainingMemory() >= s.getSize()) {
        SongNode *temp = new SongNode;
        temp->s = s;
        temp->next = songs;
        songs = temp;

        return 0;
    }else{
        return -1;
    }
}

/* FUNCTION - int removeSong
     * attempts to remove a song from the UtPod
     * removes the first instance of a song that is in the the UtPod multiple times
         o returns 0 if successful
         o returns -2 if nothing is removed


       input parms -free(): invalid pointer
Signal: SIGABRT (Aborted)

       output parms -
    */

int UtPod::removeSong(Song const &s) {

    int output = NOT_FOUND;

    SongNode *temp1;
    SongNode *temp2;

    temp1 = songs;
    temp2 = songs->next;

    // If song is first in list
    if(temp1->s == s){
        songs = songs->next;
        delete temp1;
        return SUCCESS;
    }

    // Traverse Linked List to find song for when song neither first nor last in list
    while(temp2 != NULL){

        if(temp2->s == s){

            //make song behind deleted song point to the song after the deleted song
            temp1->next = temp2->next;

            //delete song
            delete temp2;

            output = SUCCESS;
            return output;
        }

        temp1 = temp2;
        temp2 = temp2->next;
    }

    return output;
}

/* FUNCTION - void shuffle
 *  shuffles the songs into random order
    o will do nothing if there are less than two songs in the current list

   input parms -

   output parms -
*/

void UtPod::shuffle() {

    for(int numShuffles = 0; numShuffles < (this->getNumSongs())*100; numShuffles++) {

        srand(static_cast<unsigned int>(time(NULL)));

        int song1_Index = rand() % (this->getNumSongs()+1);
        int song2_Index = rand() % (this->getNumSongs()+1);
        if(song1_Index == song2_Index){
            song1_Index++;
        }

        SongNode *temp1 = songs; // song1 is first in list
        SongNode *temp2 = songs;

        //making temp1 point to first song to swtich
        for(int i =0; i < song1_Index; i++){
            if(temp1->next != NULL) {
                temp1 = temp1->next;
            }
        }
        // making temp2 point to second song to switch
        for (int j = 0; j < song2_Index; j++) {
            if(temp2->next != NULL) {
                temp2 = temp2->next;
            }
        }

        int size1;
        int size2;
        string artist1;
        string artist2;
        string title1;
        string title2;

        size1 = temp1->s.getSize();
        size2 = temp2->s.getSize();
        artist1 = temp1->s.getArtist();
        artist2 = temp2->s.getArtist();
        title1 = temp1->s.getTitle();
        title2 = temp2->s.getTitle();

        //switching song info
        temp1->s.setTitle(title2);
        temp1->s.setSize(size2);
        temp1->s.setArtist(artist2);

        temp2->s.setTitle(title1);
        temp2->s.setSize(size1);
        temp2->s.setArtist(artist1);

    }
}


/* FUNCTION - void showSongList
 * prints the current list of songs in order from first to last to standard output
 * format - Title, Artist, size in MB (one song per line)

   input parms -

   output parms -
*/

void UtPod::showSongList() {
    SongNode *temp = songs;
    for(int i  = 0; i < this->getNumSongs(); i++){
        cout<<temp->s.getTitle()<<", "<<temp->s.getArtist()<<", "<<temp->s.getSize()<<" MB"<<endl;
        temp = temp->next;
    }
}


//
// Default destructor
//
UtPod::~UtPod() {

    SongNode *temp = songs;
    // Deleting all songs in UtPod
    while(temp->next != NULL){
        delete songs;
cout<<"song deleted"<<endl;
        temp = temp->next;
        songs = temp;
    }
}

/* FUNCTION - int getRemainingMemory
 *  returns the amount of memory available for adding new songs

   input parms -

   output parms -
*/

int UtPod::getRemainingMemory() {

    int remainingMemory = this->memSize;
    SongNode *temp = songs;
    // Traverse Linked list and subtract song sizes from total memory of this UtPod
    while(temp != NULL){
        remainingMemory -= temp->s.getSize();
        temp = temp->next;
    }
    return remainingMemory;
}

/* FUNCTION - void sortSongList
 *  sorts the songs in ascending order
    o will do nothing if there are less than two songs in the current list

   input parms -

   output parms -
*/

void UtPod::sortSongList() {
    

}

int UtPod::getNumSongs() {

    int numSongs = 0;
    SongNode *temp = songs;
    while(temp->next != NULL){
        numSongs++;
        temp = temp->next;
    }
    numSongs++;
    return numSongs;
}
