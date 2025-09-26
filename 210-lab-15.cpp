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
    string t,s;
    int y, i = 0;

    if(inputFile.is_open()){
        while(getline(inputFile, s)){
            inputFile >> y;
            inputFile.ignore();
            getline(inputFile, t);
            Movie tmp;
            tmp.setTitle(t);
            tmp.setYear(y);
            tmp.setScreenWriter(s);
            movies[i] = tmp;
            i++;
        }

    }
    else{
        cout << "Error, file is not opening" << endl;

        return 1;
    }




    return 0;
}