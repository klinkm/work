//Movie Class
//This class is for creating instances of movies

//#include "stdafx.h"
//#include "Movie.h"
#include <iostream>

using namespace std;

MyMovie:: MyMovie(){
	title = "";
	year = 0;
	actor1 = "";
	actor2 = "";
	director = "";
	genre = "";
}


MyMovie:: MyMovie(string title, int year, string actor1, string actor2, string director, string genre){
	this->title = title;
	this->year = year;
	this->actor1 = actor1;
	this->actor2 = actor2;
	this->director = director;
	this->genre = genre;
}

MyMovie::~MyMovie(){
}

//Get functions
string MyMovie::getTitle(){
	return title;
}
int MyMovie::getYear(){
	return year;
}
string MyMovie::getAct1(){
	return actor1;
}
string MyMovie::getAct2(){
	return actor2;
}
string MyMovie::getDirector(){
	return director;
}
string MyMovie::getGenre(){
	return genre;
}

//Set Functions
void MyMovie::setTitle(string title){
	this -> title = title;
}
void MyMovie::setYear(int year){
    while(year < 1920 || year > 2019){
        cout << "The year you entered is invalid. Please enter a year between 1920 and 2019" << endl;
        cin >> year;
        //cin.clear();
        cin.ignore();
        }
	this -> year = year;
}
void MyMovie::setAct1(string actor1){
	this -> actor1 = actor1;
}
void MyMovie::setAct2(string actor2){
	this->actor2 = actor2;
}
void MyMovie::setDirector(string director){
	this->director = director;
}
void MyMovie::setGenre(string genre){
	this->genre = genre;
}
