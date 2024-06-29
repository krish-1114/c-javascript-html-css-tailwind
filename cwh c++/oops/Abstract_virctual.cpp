#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string tital;
        float rating;
    public:
        CWH(string s,float r){
            tital = s;
            rating = r;
        }

        virtual void display() = 0; // This virtual is important
        
};

class CWHVIDEO : public CWH{
    int videolenght;
    public:
    CWHVIDEO(string s,float r,int vl): CWH(s,r){
            videolenght = vl;
        }

    void display(){
            cout<<"This is amazing video"<<tital<<endl;
            cout<<"This is amazing Rating"<<rating<<"Out of 5 star"<<endl;
            cout<<"This is amazing Videolength"<<videolenght<<endl;
    }
};

class CWHtext : public CWH{
    int words;
    public:
        CWHtext(string s,float r,int wc): CWH(s,r){
            words = wc;
        }

        void display(){
            cout<<"is Titla"<<tital<<endl;
            cout<<"is Rating"<<rating<<"Out of 5 star"<<endl;
            cout<<"is words"<<words<<endl;
    }
};

int main(){
    string tital;
    float rating,vlen;
    int words;

    // Video

    tital = "C++ Video";
    vlen = 4.56;
    rating = 4.89;

    CWHVIDEO c(tital,rating,vlen);
    c.display();

    // text
    
    tital = "C++ Web";
    words = 456;
    rating = 4.19;

    CWHtext d(tital,rating,words);
    d.display();

    CWH* tuts[2];
    tuts[0] = &c;
    tuts[1] = &d;

    tuts[0]->display();
    tuts[1]->display();

    
return 0;
}