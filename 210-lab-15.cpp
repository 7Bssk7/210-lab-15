#include <iostream>
#include <array>
#include <fstream>
#include <string>
using namespace std;

class Movie{
    public:
        string getTitle() { return title; }
        void setTitle(string t) { this->title = t; }
        int getYear() { return year; }
        void setYear(int y) {this->year = y; } 
        string getScreenWriter() { return screenWriter; }
        void setScreenWriter(string s) { this->screenWriter = s; }

    private:
        string title;
        int year;
        string screenWriter;
       

};

int main(){

    return 0;
}