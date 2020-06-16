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
	void SearchByName(string search) const;
	void SearchByAuthor(string search) const;
	void SearchByPublisher(string search) const;
	void SearchByYear(int search) const;
	void SearchByRating(float search) const;




	
};

