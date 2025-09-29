#include <iostream>
#include <iomanip>
#include <array>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 4, W = 19, W1 = 18;

class Movie{
    public:
        string getTitle() const { return title; }
        void setTitle(string t) { this->title = t; }
        int getYear() const { return year; }
        void setYear(int y) {this->year = y; } 
        string getScreenWriter() const { return screenWriter; }
        void setScreenWriter(string s) { this->screenWriter = s; }
        void print() const{  
            cout << "Movie: " << title << endl;
            cout << setw(W) << right << "Year released: " << year << endl; 
            cout << setw(W1) << right << "Screenwriter: " << screenWriter << endl;
            cout << endl;
        }

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
    inputFile.close();

    for (auto val : movies ) {
        val.print();
    }

    return 0;
}