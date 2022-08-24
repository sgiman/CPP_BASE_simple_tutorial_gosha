// MyClass.cpp:
// CLASS ADDREES | My first class

#include "stdafx.h"
#include <iostream>
#include <string> 

using namespace std;

class MyAddress
{
private:
	string city;
	string street;
	string number;
	string index;

public:
	void set ( string houseCity, string houseStreet, string houseNumber, string houseIndex )
	{
		city = houseCity;
		street = houseStreet;
		number = houseNumber;
		index = houseIndex;
	}

	void get()
	{
		cout << city << ", " << street << " "  << number << ", " << index << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");

	MyAddress addr1;
	cout << "ADDRESS 1: ";
	addr1.set("Êèåâ", "Ñîáîðíàÿ", "10A", "20012");
	addr1.get();

	MyAddress addr2;
	cout << "ADDRESS 2: ";
	addr1.set("Kèåâ", "Êðåùàòèê", "44", "20010");
	addr1.get();


	/************ END ***********/
	cout << "\n\nTEST MY FIRST CLASS!\n";
	cin.get();	// <iostream>
	return 0;
}

