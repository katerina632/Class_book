#pragma once
#include "Book.h"

class Library
{
private:
	Book* arr;
	int booksCount;

public:
	Library();	
	~Library();
	Library(const Library& library);
	
	void AddBook(const Book &book);	

	void Sort() const;
	void PrintByName() const;
	void Search(string search) const;
	
};

