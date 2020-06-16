#include "Book.h"

Book::Book() : name("No name"),  author("No author"), publisher("No publisher"), year(1),  rating(0.0)
{
}

Book::Book(string name, string author, string publisher, int year, float rating): name(name), author(author), 
publisher(publisher), year(year), rating(rating)
{
}

void Book::Print() const
{
	cout << "=========================" << endl;
	cout << "Name: " << name << endl;
	cout << "Author: " << author << endl;
	cout << "Publisher: " << publisher << endl;
	cout << "Year: " << year << endl;
	cout << "Ratint: " << rating << endl;
	cout << "=========================" << endl;

}
