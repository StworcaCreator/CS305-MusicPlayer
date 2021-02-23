#ifndef TRACK_H
#define TRACK_H
#include <string>
using namespace std;

class track
{
private:
    string fName, Title, Artist, Album;
public:
    track();
    void setfName(string in);
    void setTitle(string in);
    void setArtist(string in);
    void setAlbum(string in);
};

#endif // TRACK_H


// add mp3 class found ounline and test it <-- by wednesday
