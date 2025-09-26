#include <iostream>
#include <array>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 4;

class Movie{
    public:
        string getTitle() const { return title; }
        void setTitle(string t) { this->title = t; }
        int getYear() const { return year; }
        void setYear(int y) {this->year = y; } 
        string getScreenWriter() const { return screenWriter; }
        void setScreenWriter(string s) { this->screenWriter = s; }

    private:
        string title;
        int year;
        string screenWriter;
       

};

int main(){
    ifstream inputFile("input.txt");
    array<Movie, SIZE> movies;


    return 0;
}