#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videolength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title = new char[30];
    float rating, vlen;
    int words;

    // For Code With Harry Video
    title = "Django Tutorial";
    vlen = 23.54;
    rating = 4.78;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // For Code With Harry Text
    title = "Django Tutorial Text";
    words = 344;
    rating = 4.28;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    cout << endl;
    tuts[1]->display();

    return 0;
}

// Rules for virtual functions
// 1. They cannot be static.
// 2. They are accessed by object pointers.
// 3. Virtual functions can be a friend of another class.
// 4. A virtual function in base might not be used.
// 5. If a virtual function defined in the base class, there is no necessity of redefining it in the derived class.