
//This is a program designed to prompt a user with questions about
// his or her favorite movies, places the user's answers in an array,
// and then applies content from the array instances of the myMovie class. 

//Michael Klink
//PRG218 Week 4

//#include "stdafx.h"
//#include "Movie.h"
#include <iostream>
#include <string>


using namespace std;
const int ARRAYSIZE = 3;

int main(){

	MyMovie movies[ARRAYSIZE];
	
	char movieTitle[50];
	int movieYear;
	char movieActor1[30];
	char movieActor2[30];
	char movieDirector[30];
	char movieGenre[20];

	int counter;

	cout << "***************** Hello and Welcome! *****************" << endl << endl;
	cout << "I would like to know about your three favorite movies." << endl;

	//Loop Prompts and User input for 3 Movies
	for (counter = 0; counter < ARRAYSIZE; counter++) {
		cout << "What is the title of movie " << counter + 1 << "?" << endl;
		cin.getline(movieTitle, 50);
		
		cout << "What year did \"" << movieTitle << "\" come out?" << endl;
		cin >> movieYear;
		
		cout << "What actor starred in \"" << movieTitle << "\"?" << endl;
		cin.getline(movieActor1, 50);
		cin.getline(movieActor1, 50);

		cout << "What actor co-starred in \"" << movieTitle << "\"?" << endl;
		cin.getline(movieActor2, 30);

		cout << "Who directed \"" << movieTitle << "\"?" << endl;
		cin.getline(movieDirector, 30);

		cout << "What genre would you define \"" << movieTitle << "\" as?" << endl;
		cin.getline(movieGenre, 20);

		movies[counter].setTitle(movieTitle);
		movies[counter].setYear(movieYear);
		movies[counter].setAct1(movieActor1);
		movies[counter].setAct2(movieActor2);
		movies[counter].setDirector(movieDirector);
		movies[counter].setGenre(movieGenre);
	}

	cout << "Your 3 favorite movies are: " << endl << endl;
	for (counter = 0; counter < ARRAYSIZE; counter++){
		cout << "Title: " << movies[counter].getTitle() << endl;
		cout << "Year: " << movies[counter].getYear() << endl;
		cout << "Starring: " << movies[counter].getAct1() << " and " << movies[counter].getAct2() << endl;
		cout << "Directed by: " << movies[counter].getDirector() << endl;
		cout << "Genre: " << movies[counter].getGenre() << endl;
	}
	return 0;
