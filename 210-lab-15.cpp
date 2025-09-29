#include <iostream>
#include <iomanip>
#include <array>
#include <fstream>
#include <string>
using namespace std;

// SIZE of movie array and setw width for the output formatting
const int SIZE = 4, W = 19, W1 = 18;

//Movie class that contains a movie title, year, and screenwriter
class Movie{
    public:
        //Getter for the title of the movie 
        string getTitle() const { return title; }
        //Setter for the title of the movie 
        void setTitle(string t) { this->title = t; }
        //Getter for the year of the movie 
        int getYear() const { return year; }
        //Setter for the year of the movie 
        void setYear(int y) {this->year = y; } 
        //Getter for the screenwriter of the movie
        string getScreenWriter() const { return screenWriter; }
        //Setter for the screenwirter of the movie
        void setScreenWriter(string s) { this->screenWriter = s; }
        //This is a print method to output formatted movie information
        void print() const{  
            cout << "Movie: " << title << endl;
            cout << setw(W) << right << "Year released: " << year << endl; 
            cout << setw(W1) << right << "Screenwriter: " << screenWriter << endl;
            cout << endl;
        }

    private:
        //Private member variables for the movie (title, year, screenwriter)
        string title;
        int year;
        string screenWriter;
       

};

int main(){
    //This code opens input file 
    ifstream inputFile("input.txt");
    //This code creates and array to store Movie objects
    array<Movie, SIZE> movies;
    //Temporary variable for title and screenwriter
    string t,s;
    //Temporary variable for the year and array index
    int y, i = 0;

    if(inputFile.is_open()){
        //This loop reads each movie from the input file
        while(getline(inputFile, s)){
            inputFile >> y;
            inputFile.ignore();
            getline(inputFile, t);
            //This code creates temporary Movie object 
            //Sets title, year, and screenwriter
            //And Stores Movies in the movies array and increments index
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
    
    //This loop prints movies array using the print() method
    for (auto val : movies ) {
        val.print();
    }

    return 0;
}