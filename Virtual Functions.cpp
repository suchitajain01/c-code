#include <iostream>
using namespace std;

class CWH
{
protected:
    char title[30];
    float rating;
public:
    CWH(char *s, float r)
    {
        strcpy(title, s);
        rating = r;
    }

    virtual void display()
    {}
};




class CWHVideo : public CWH
{

    float VideoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        VideoLength = vl;
    }
    void display()
    {
     cout<<"this is amazing video with title"<<title<<endl;
     cout<<"ratings of this text tutorial:"<<rating<<"out of 5 stars"<<endl;
     cout<<"no of words in this text tutorial "<<VideoLength<<"words"<<endl;

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
        cout << "this is an amaxing text tutorial with title" << title << endl;
        cout << "ratings of this text tutorial:" << rating << "out of 5 stars" << endl;
        cout << "no of words in this text tutorial is:" << words << "words" << endl;
    }
};




int main()
{
    char*title = new char[30];
    float rating , vlen;

    //for any video


    CWHVideo djVideo(title, rating, vlen);
    djVideo.display();



    //for code with harry text
    title = "django tutorial text";
    words = 433;
    rating = 4.19;
    CWHText djText( title, rating , wc );
    //djText.display();



    CWH* tuts[2]; //array
    tuts[0] = &djVideo;
    tuts[1]= &djText;

    tuts[0]->display();
    tuts[1]->display(); 
     
    return 0;

};




/* 
RULES FOR VIRTUAL FUNCTIONS

1> they cannot be static
2> they are accessed by object pointers
3> can be friend of another class
4> function in base classe used.











*/