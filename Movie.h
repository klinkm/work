//This header file defines the class

#include <string>

using namespace std;

class MyMovie{
private:
	string title;
	int year;
	string actor1;
	string actor2;
	string director;
	string genre;

public:
	MyMovie();
	MyMovie(string, int, string, string, string, string);
	~MyMovie();
	void setTitle(string);
	void setYear(int);
	void setAct1(string);
	void setAct2(string);
	void setDirector(string);
	void setGenre(string);

	string getTitle();
	int getYear();
	string getAct1();
	string getAct2();
	string getDirector();
	string getGenre();
};
