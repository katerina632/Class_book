#pragma once
#include<iostream>
#include<string>

using namespace std;

class Book
{
private:
	string name;
	string author;
	string publisher;
	int year;
	float rating;

public:
	Book();

	Book(string name, string author, string publisher, int year, float rating);

	
	friend class Library;

	void Print() const;
};

