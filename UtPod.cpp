#include "UtPod.h"


using namespace std;

//Default constructor
UtPod::UtPod() {
    memSize = MAX_MEMORY;
    songs = NULL;
    numSongs = 0;
}
//set the memory size to MAX_MEMORY
//UtPod::UtPod() {
//    memSize = MAX_MEMORY;
//
//    songs = NULL;
//
//    numSongs = 0;
//
//};

//Constructor with size parameter
//The user of the class will pass in a size.
//If the size is greater than MAX_MEMORY or less than or equal to 0,
//set the size to MAX_MEMORY.
UtPod::UtPod(int size) {
    if (size > MAX_MEMORY || size <= 0)
        memSize = MAX_MEMORY;
    else
        memSize = size;
    songs = NULL;
    numSongs = 0;
}

//UtPod::UtPod(int size){
//    if(size <= 0 || size > MAX_MEMORY){
//        size = MAX_MEMORY;
//    }
//    this->memSize = size;
//}

/* FUNCTION - int addSong
      * attempts to add a new song to the UtPod
          o returns a 0 if successful
          o returns -1 if not enough memory to add the song

      precondition: s is a valid Song

      input parms -

      output parms -
     */
int UtPod::addSong(Song const &s) {

    if(getRemainingMemory() >= s.getSize()) {
        SongNode *temp = new SongNode;
        temp->s = s;
        temp->next = songs;
        songs = temp;
        numSongs++;
        return SUCCESS;
    }
    return NO_MEMORY;
}

//int UtPod::addSong(Song const &s){

//    // Checking if song can be added
//    if(this->getRemainingMemory() >= s.getSize()) {
//        SongNode *temp = new SongNode;
//        temp->s = s;
//        temp->next = songs;
//        songs = temp;

//        return 0;
//    }else{
//        return -1;
//    }
//}

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

    SongNode *p = songs;
    SongNode *prev = NULL;

    if(songs == NULL)
        return NO_MEMORY;
    else {
        while ((p != NULL) && !(p->s == s)) {
            prev = p;
            p = p->next;
        }
        if (prev == NULL) { //first in list
            songs = p->next;
            delete p;
            numSongs--;
            return SUCCESS;
        }
        else if (p != NULL) {
            prev->next = p->next;
            delete p;
            numSongs--;
            return SUCCESS;
        }
    }
    return NO_MEMORY;
}

//int UtPod::removeSong(Song const &s) {
//
//    int output = NOT_FOUND;
//
//    SongNode *temp1;
//    SongNode *temp2;
//
//    temp1 = songs;
//    temp2 = songs->next;
//
//    // If song is first in list
//    if(temp1->s == s){
//        songs = songs->next;
//        delete temp1;
//        return SUCCESS;
//    }
//
//    // Traverse Linked List to find song for when song neither first nor last in list
//    while(temp2 != NULL){
//
//        if(temp2->s == s){
//
//            //make song behind deleted song point to the song after the deleted song
//            temp1->next = temp2->next;
//
//            //delete song
//            delete temp2;
//
//            output = SUCCESS;
//            return output;
//        }
//
//        temp1 = temp2;
//        temp2 = temp2->next;
//    }
//
//    return output;
//}

/* FUNCTION - void shuffle
 *  shuffles the songs into random order
    o will do nothing if there are less than two songs in the current list

   input parms -

   output parms -
*/

void UtPod::shuffle() {

    for(int numShuffles = 0; numShuffles < (this->getNumSongs())*100; numShuffles++) {

        time_t timer = time(NULL);
//        srand(static_cast<unsigned int>(time(nullptr)));
        srand(static_cast<unsigned int>(timer));

        int song1_Index = rand() % (this->getNumSongs()+1);
        int song2_Index = rand() % (this->getNumSongs()+1);
        if(song1_Index == song2_Index){
            song1_Index++;
        }

        SongNode *song1 = songs; // song1 is first in list
        SongNode *song2 = songs;

        //making song1 point to first song to swtich
        for(int i =0; i < song1_Index; i++){
            if(song1->next != NULL) {
                song1 = song1->next;srand
            }
        }
        // making song2 point to second song to switch
        for (int j = 0; j < song2_Index; j++) {
            if(song2->next != NULL) {
                song2 = song2->next;
            }
        }

        // swapping songs
        song1->s.swap(song2->s);

//        /////////////////////////////////////////////////////
//        // Switching Values instead of actual song objects //
//        /////////////////////////////////////////////////////

//        int size1;
//        int size2;
//        string artist1;
//        string artist2;
//        string title1;
//        string title2;
//
//        size1 = song1->s.getSize();
//        size2 = song2->s.getSize();
//        artist1 = song1->s.getArtist();
//        artist2 = song2->s.getArtist();
//        title1 = song1->s.getTitle();
//        title2 = song2->s.getTitle();
//
//        //switching song info
//        song1->s.setTitle(title2);
//        song1->s.setSize(size2);
//        song1->s.setArtist(artist2);
//
//        song2->s.setTitle(title1);
//        song2->s.setSize(size1);
//        song2->s.setArtist(artist1);

    }
}


/* FUNCTION - void showSongList
 * prints the current list of songs in order from first to last to standard output
 * format - Title, Artist, size in MB (one song per line)

   input parms -

   output parms -
*/

//void UtPod::showSongList() {
//    SongNode *p = songs;
//    while(p != NULL) {
//        cout << p->s << endl;
//        p = p->next;
//    }
//}

void UtPod::showSongList() {
    SongNode *temp = songs;
    for(int i  = 0; i < this->getNumSongs(); i++){
        cout<<temp->s.getTitle()<<", "<<temp->s.getArtist()<<", "<<temp->s.getSize()<<" MB"<<endl;
        temp = temp->next;
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

    if(getTotalMemory() < 2) {
        printf("less than 2 songs\n");
        return;
    }

    SongNode *head = songs;
    while(head != NULL) {
        Song temp2 = head->s;
        SongNode *smallest = head;
        SongNode *temp = head->next;
        while(temp != NULL) {
            if(temp2 > temp->s) {
                smallest = temp;
                temp2 = temp->s;
            }
            temp = temp->next;
        }
        head->s.swap(smallest->s);
        head = head->next;
    }
}

void clearMemory(){
    void UtPod::clearMemory() {

//        while(songs != NULL) {
//            SongNode *temp = songs;
//            songs = temp->next;
//            free(temp);
//            numSongs--;
//        }
        while(songs != NULL){
            SongNode *temp = songs;

        }
    }
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

//
// Default destructor
//
UtPod::~UtPod() {
    // Deleting all songs in UtPod
        SongNode* current = songs;
        while( current != NULL){
            SongNode* next = current->next;
            delete current;
            cout<<"song deleted"<<endl;
            current = next;
        }
        songs = NULL;
}
