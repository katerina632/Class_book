#include<iostream>
#include "Book.h"
#include "Library.h"


using namespace std;


int main() {

	Book b1;
	//b1.Print();

	Library lib1;
	lib1.AddBook(b1);

	lib1.AddBook(Book("Harry Potter", "J. K. Rowling", "Bloomsbury Publishing", 1997, 5.0));

	lib1.Search("Har");
	lib1.PrintByName();
	lib1.Sort();
	lib1.PrintByName();

	system("pause");
	return 0;
}